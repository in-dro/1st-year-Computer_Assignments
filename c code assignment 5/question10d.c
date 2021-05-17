#include <stdio.h>
int main()
{
    int i ;
    int a;
    int n;
    printf("Enter the number of lines : ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--)
    {

        for (a = 1; a <= i; a++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}