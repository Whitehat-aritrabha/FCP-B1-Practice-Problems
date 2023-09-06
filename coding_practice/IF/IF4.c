#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter first number:\n");
	scanf("%d", &a);
	printf("Enter second number:\n");
	scanf("%d", &b);
	printf("Enter third number:\n");
	scanf("%d", &c);
	int max,min,mid;
	if (a<b && a<c)
	{
		if(b<c)
		{
			max = c;
			mid = b;
			min = a;
		}
		else
		{
			max = b;
			mid = c;
			min = a;
		}
	}
	else if(b<a && b<c)
	{
		min = b;
		if(a<c)
		{
			mid = a;
			max = c;
		}
		else
		{
			mid = c;
			max = a;
		}
	}
	else if(c<a && c<b)
	{
		min = c;
		if (a<b)
		{
			mid = a;
			max = b;
		}
		else
		{
			mid = b;
			max = a;
		}
	}
	printf("Descending order: %d %d %d\n", max,mid,min);
}




