#include<stdio.h>
void main()
{
	int n,m,k;
	printf("Number of men(n):\n");
	scanf("%d",&n);
	printf("Time(m):\n");
	scanf("%d",&m);
	printf("New numberof men(k):\n");
	scanf("%d", &k);
	int result;
	result = (m*n)/k;
	printf("Time required:%d\n", result);
}

