#include<stdio.h>
int remcheck(int n)
{
	int m = n % 3;
	return m;
}
void main()
{
	int n;
        printf("User Input:\n");
        scanf("%d", &n);
        int m = 2*n;
        printf("Output:\n");
        while (n <= m)
        {
      		if(remcheck(n) != 0)
		{
			printf("%d\n",n);
			n = n + 1;
		}
		else
		{
			n = n + 1;
		}
        }
}

