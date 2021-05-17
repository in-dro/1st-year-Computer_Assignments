#include <stdio.h>
int main()
{
    int n,i,j,x,s;
    printf("Enter the number of lines : ");
    scanf("%d", &n);
     for (i = 0; i<n; i++)
    {
        for (s = i; s <= n-1; s++)
        {
            printf(" ");
        }
        x=1;
        for (j=0; j<=i; j++)
        {
            if (i==0 || j==0)
            {
                x=1;
            }
            else
            {
                x=x*(i-j+1)/j;
            }
            printf("%d ",x);

        }
        printf("\n");
    }
    return 0;
}