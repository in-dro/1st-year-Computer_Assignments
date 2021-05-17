#include <stdio.h>
int main()
{
    int i = 0 ;
    int y;
    int a = 0;
    int n;
    printf("Enter the number of lines : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {

        for (a = 1; a <= i; a++)
        {
            y= (i * (i - 1) / 2) + a;
            printf("%d", y);
        }
        printf("\n");
    }
    return 0;
}