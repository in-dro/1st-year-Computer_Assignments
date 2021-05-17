#include <stdio.h>
int main ()
{
    int n, i,j, fact , sum ;
    printf("ENTER THE VALUE OF : ");
    scanf("%d", &n);
    sum =n;
    for (i = 0; i <= n; i++)
    {
        j=i;
        for (fact = 1;  j>0; j--)
        {
            fact *= j;
        }
         sum+=fact;
        
    }
    printf("s = %d",sum);
    return 0;
}
