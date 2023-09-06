#include<stdio.h>
int number (int n)
{
	int ten = n %10;
	n = (n-ten)/10;
	int hundred = n%10;
	n = n - hundred;
	if(ten<hundred)
	{
		int ten2 = ten;
		int hundred2 = hundred;
		n = (n*10)+(hundred2 * 10)+(ten2);
       	        printf("New Number:%d\n",n);
	}
	else
	{
		int ten2 = hundred;
		int hundred2 = ten;
	
	n = (n*10)+(hundred2 * 10)+(ten2);
	printf("New Number:%d\n",n);
	}
}
int main()
{
	int n, m;
	printf("Input Number:\n");
	scanf("%d", &n);
	if(n<0)
	{
		return 0;
	}
	else
	{
		m = number (n);
			return 0;
	}
}


