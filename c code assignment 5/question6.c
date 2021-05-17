#include <stdio.h>
int main ()
{
    int n, i, a, b, result;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    a=0 ;
    b=1;
    printf("Fibonacci sequence of %d terms : \n", n);
    for (i=0; i<n; i++)
    {
        if (i<=1)
        {
        result=i;
        }
    else
    {
        result=a+b;
        a=b;;
        b=result;
    }
    printf("%d ", result);
    }

}