#include<stdio.h>
void main()
{
        int n;
	do
	{
        printf("User Input:\n");
        scanf("%d", &n);
	switch (n)
        {
                case 1: printf("Sunday\n");
                        break;
                case 2: printf("Monday\n");
                        break;
                case 3: printf("Tuesday\n");
                        break;
                case 4: printf("Wednesday\n");
                        break;
                case 5: printf("Thursday\n");
                        break;
                case 6: printf("Friday\n");
                        break;
                case 7: printf("Saturday\n");
                        break;
                default: printf("ERROR\n");
        }

	}
	while(1<=n && n<=7);
}

