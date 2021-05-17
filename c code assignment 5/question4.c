#include <stdio.h>
int main() 
{
    int x,j;
    printf("Etner a number : ");
    scanf("%d",&x);
    for (j=2; j<=x; j++) 
    {
        if(!(x%j))
        {
            break;
        }
    }
    if (j==x)
    {
        printf("%d is a prime number \n" , x );
    }
    else
    {
         printf("%d is not a prime number \n" , x );
    }
    return 0;
}