#include <stdio.h>
int main() 
{
    int x,n,res;
    printf("Enter a number : ");
    scanf("%d", &x);
    res=0;
    for ( x; x>0; x/=10)
    {
        n=x%10;  //n=remainder after dividing x by 10
        res+=n; //res= sum of the digits 
    }
     printf("sum of the digits = %d ", res);
     return 0;
}