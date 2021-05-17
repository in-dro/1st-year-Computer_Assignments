#include <stdio.h>
int main() 
{
    int x,i,sum;
    /*sum= sum of the positive divisors of the entered numbers 
    i= the divisors of the entered number
    x= the entered number */
    printf("Enter a number :");
    scanf("%d",&x);
    sum=0;
    for (i=1; i<=(x/2); i++)
    {
        if (!(x%i))
        {
            sum+=i;
        }
    }
    if (sum==x)
    {
        printf("%d is a perfect number" , x );
    }
    else
    {
        printf("%d is not a perfect number" , x );
    }
    return 0;
}