#include<stdio.h>
void main()
{
	int m,n;
	printf("Input for smaller integer:\n");
	scanf("%d", & n);
	printf("Input for greater integer:\n");
        scanf("%d", & m);
	printf("Output:\n");
	while (n<=m)
	{
		printf("%d\n", n);
		n = n + 1;
	}
}

