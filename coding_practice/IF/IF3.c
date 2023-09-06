#include<stdio.h>
void main()
{
	int a,b, big, small;
	printf("Enter first input:\n");
	scanf("%d",&a);
	printf("Enter second input:\n");
	scanf("%d", &b);
	if (a > b)
	{
		big = a;
		small = b;
	}
	else
	{
		big = b; 
		small = a;
	}
	printf("Descending Order:%d %d\n", big, small);
}
