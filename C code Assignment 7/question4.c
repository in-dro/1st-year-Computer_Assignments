#include <stdio.h>
int pascal(int rows);
int main()
{
    char choice = 'y';
    while (choice != 'n')
    {
        int n;
        printf("Enter the number of rows : ");
        scanf("%d", &n);
        printf("The required Pascal's Triangle is : \n");
        pascal(n);
        printf("Do you wanna do this again ? (y/n) : ");
        getchar();
        choice = getchar();
    }
}
int pascal(int rows)
{
    int coef = 1, space, i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef * (i - j + 1) / j;
            printf("%4d", coef);
        }
        printf("\n");
    }
}