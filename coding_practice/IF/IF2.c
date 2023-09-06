#include<stdio.h>
void main()
{
	float celsius, farenheit, delta;
	printf("Give Cesius:\n");
	scanf("%f", &celsius);
	printf("Give Farenheit:\n");
	scanf("%f", &farenheit);
	printf("Give Delta:\n");
	scanf("%f", &delta);
	if(celsius == farenheit + delta || celsius == farenheit - delta)
	{
		printf("GOOD CONVERSION!!\n");
	}
	else
	{
		printf("BAD CONVERSION!!\n");
	}
}

