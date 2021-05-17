#include <stdio.h>
int main ()
{
    int x,n,rem, rev;
    printf("Enter a number : ");
    scanf("%d",&x);
    rev=0;
    n=x;
    for (n; n>0; n/=10) 
    {
        rem=n%10; // rem is the remainder after dividing n by 10
        rev = rev*10+rem; //rev is the reverse  of the number 
    }
    if (rev==x)
    {
        printf("%d is a pallindrome number" , x);
    }
    else
    {
        printf("%d is not a pallindrome number" , x);
    }
     return 0;


}