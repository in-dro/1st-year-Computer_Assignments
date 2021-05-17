#include <stdio.h>
int main()
{
    int x, n;
    printf("ENTER THE VALUE OF x AND n:\n");
    scanf("%d%d", &x, &n);
    int i, result;
    result= 1;
    for (i=1; i<=n; i++)
    {
        result*=x;
    }
    printf("result = %d" , result);
     return 0;
}