#include<stdio.h>
void main()
{
	int x;
	printf("User Input:\n");
	scanf("%d", &x);
	int count = 0;
	while(count<20)
	{
		if(x%2==0)
		{
			x = x/2;
			printf("%d\n",x);
		}
		else
		{
			x = 3*x + 1;
			printf("%d\n", x);
		}
		count++;
	}
	
}
