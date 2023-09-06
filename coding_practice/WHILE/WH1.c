#include<stdio.h>
void main()
{
	int n;
	printf("User Input:\n");
	scanf("%d", &n);
	int m = 2*n;
	printf("Output:\n");
	while (n <= m)
	{
		printf("%d\n", n);
		n = n + 1;
	}
}
