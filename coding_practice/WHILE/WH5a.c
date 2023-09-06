#include<stdio.h>
void main()
{
	int n;
	printf("User input for evaluating factors:\n");
	scanf("%d", &n);
	int d = 1;
	while(d<=n)
	{
		if(n%d==0)
		{
			printf("%d\n",d);
			d++;
		}
		else
		{
			d++;
		}
	}
}
