#include<stdio.h>
void main()
{
        int n, count = 0;
        printf("User input for evaluating factors:\n");
        scanf("%d", &n);
        int d = 1;
        while(d<=n)
        {
                if(n%d==0)
                {
                        printf("%d\n",d);
                        d++;
			count++;
                }
                else
                {
                        d++;
                }
        }
	if( count == 2)
	{
		printf("%d is a prime\n",n);
	}
}

