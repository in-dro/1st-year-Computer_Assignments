#include <stdio.h>
int main ()
{
    int n, i, sum = 0;
    printf("ENTER THE VALUE OF N : ");
    scanf("%d", &n);
    sum =n;
    for (i = 0; i < n; i++)
    {
        if (!(i&2))
        {
            sum-=i;
        }
        else
        {
            sum+=i;
        }
    }
    printf("s = %d",sum);
    return 0;
}
