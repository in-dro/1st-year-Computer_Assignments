#include <stdio.h>
int main ()
{
    int n, i,j,x , sum ;
    printf("ENTER THE VALUE OF n : ");
    scanf("%d", &n);
    sum =0;
    for (i = 1; i <= n; i++)
    {
        x=i;
        for (j = 1;  j>i; j++)
        {
            x*=(2*i-1);
        }
         sum+= x;
        
    }
    printf("s = %d",sum);
    return 0;
}
