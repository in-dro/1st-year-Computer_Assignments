#include <stdio.h>
long factorial(int n)

{

    int i, prod = 1;
    for (i = 1; i < n; i++)
        prod  = i;
    return prod;
}
int main ()
{
    char choice = 'y';
    while (choice != 'n')
    {
        int number;
        long fact;
        printf("Enter a number: ");
        scanf("%d", &number);
        fact = factorial(number);
        printf("Factorial of %d is %1d\n", number, fact);
        printf("Do you wanna do this again ? (y/n) : ");
        getchar();
        choice = getchar();
    }
}