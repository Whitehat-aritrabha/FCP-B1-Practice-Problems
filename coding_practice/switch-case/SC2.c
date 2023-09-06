#include<stdio.h>
void main()
{
        int n;
        printf("User Input:\n");
        scanf("%d", &n);
        switch (n)
        {
                case 1: printf("Sunday\n");
                        
                case 2: printf("Monday\n");
                        
                case 3: printf("Tuesday\n");
                        
                case 4: printf("Wednesday\n");
                        
                case 5: printf("Thursday\n");
                        
                case 6: printf("Friday\n");
                        
                case 7: printf("Saturday\n");
                        break;
                default: printf("ERROR\n");
        }
}

