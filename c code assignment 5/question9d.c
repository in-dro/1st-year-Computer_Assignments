#include <stdio.h> 
#include <math.h>
int main()
{
    int n, i, sum;
    printf("ENTER THE VALUE OF n : ");
    scanf("%d", &n);
    sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum += pow(i, 2);
    }
    printf("s = %d", sum);
    return 0;
}
