#include<stdio.h>
int square (int n)
{
	int m = n*n;
	return m;
}
void main()
{
	int n, op;
	printf("User Input for n:\n");
	scanf("%d", &n);
	printf("User Input for op:\n");
        scanf("%d", &op);
	switch (op)
	{
		case 1: int x1 = square(n)+1;
			printf("Output:%d\n", x1);
			break;
		case 2: int x2 = square(n)+3;
                        printf("Output:%d\n", x2);
                        break;
		case 3: int y = n - (n%2);
			int x3 = y/2;
			printf("Output:%d\n", x3);
                        break;
		case 4: int x4 = n%2;
			printf("Output:%d\n", x4);
                        break;
		default: printf("The User Input for op is INVALID\n" );
                        break;
	}
}


