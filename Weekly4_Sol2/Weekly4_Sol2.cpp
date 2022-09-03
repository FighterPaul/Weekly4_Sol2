#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int n[100];						//Problem 52, Solution 2, ID Student 65010902
void store(int k)
{
	printf("Enter number: ");
	scanf("%d", &n[k]);
}

int main()
{
	int i = 0;
	while (true)
	{
		store(i);
		if (n[i] == 999)
		{
			n[i] = n[i - 1];
			break;
		}
		i += 1;
	}
	
	int issort = 1;
	for (int j = 1; j <= i - 1; j++)
	{
		if ((n[j] - n[j - 1] > 0 && n[j + 1] - n[j] < 0) || (n[j] - n[j - 1] < 0 && n[j + 1] - n[j] > 0))
		{
			issort = 0;
			break;
		}
	}

	switch (issort)
	{
	case 0:
	{
		printf("Is sort: NO");
		break;
	}
	case 1:
	{
		printf("Is sort: Yes");
		break;
	}

	}
	return 0;
}