#include <stdio.h>
int main ()
{
    int i,j,n,x;
    printf("Enter the number of lines : ");
    scanf ("%d",&n);

    for (i=1; i<=n; i++)
    {
        x=i;
        for (x; x<=n-1; x++)
        {
            printf(" ");
        }
        for (j=1; j<=(2*i-1); j++)
        {
            printf("%d" , j);
        }
        printf("\n");
    }
    return 0;
}