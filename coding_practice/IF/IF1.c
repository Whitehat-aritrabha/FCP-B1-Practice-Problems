#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Give a:\n");
	scanf("%d", &a);
	printf("Give b:\n");
	scanf("%d", &b);
	printf("Give c:\n");
	scanf("%d", &c);
	if(a == b*c)
	{
		printf("Relation Satisfied!!\n");
	}
	else
	{
		printf("Relation NOT Satisfied!!\n");
	}
}
