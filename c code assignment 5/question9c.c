#include <stdio.h>
#include <math.h> 
 int main()
{
    int n, i;
    float sum;
    printf("ENTER THE VALUE OF n : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum +=(float)(1 / (float)i);
    }
    printf("s = %f", sum);
    return 0;
}
