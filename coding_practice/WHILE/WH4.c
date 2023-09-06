#include<stdio.h>
void main()
{
	int m,n;
	printf("User Input for n:\n");
	scanf("%d", &n);
	printf("User Input for m:\n");
        scanf("%d", &m);
	int smallint, bigint;
	if(n<=m)
	{
		smallint = n;
		bigint = m;
	}
	else
	{
		smallint = m;
		bigint = n;
	}
	while(smallint<=bigint)
	{
		printf("%d\n", smallint);
		smallint ++;
	}
}
