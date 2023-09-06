#include<stdio.h>
void main()
{
	int n;
	printf("User Input:\n");
	scanf("%d", &n);
	switch (n)
	{
		case 1: printf("apple\n");
			break;
		case 3: printf("banana\n");

		case 2: printf("orange\n");
			break;
		default: printf("unknown fruit\n");
	}
}
