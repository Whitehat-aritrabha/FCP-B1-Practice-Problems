#include<stdio.h>
#include<string.h>
struct books
{
    char name[100];
    char author[100];
    long pages;
};

void main()
{
    int n;
    printf("Number of Books:");
    scanf("%d", &n);
    struct books b[n];
    struct books reserve;
    

    //Collecting the Data
    for (int i = 0; i < n; i++)
    {   printf("Name of Book:");
        scanf("%s", &b[i].name);
        printf("Name of Author:");
        scanf("%s", &b[i].author);
        printf("Pages:");
        scanf("%li", &b[i].pages);
    }

    //Organizing the Data through bubblesort
    for (int j = n-1; j > 0; j--)
    {
        for (int k = 0; k < j; k++)
        {
            if(strcmp(b[k].author, b[k+1].author)<1)
            {
                reserve = b[k];
                b[k] = b[k+1];
                b[k+1] = reserve;
            }
        }
        
    }

    //Printing the Data
    for (int i = 0; i < n; i++)
    {   printf("Name of Book:");
        printf("%s\n", b[i].name);
        printf("Name of Author:");
        printf("%s\n", b[i].author);
        printf("Pages:");
        printf("%li\n", b[i].pages);
    }

}