#include <stdio.h>
int GCD(int a, int b);
int main()
{
    char choice = 'y';
    while (choice != 'n')
    {
        int A, B, gcd;
        printf("Enter two numbers : ");
        scanf("%d %d", &A, &B);
        gcd = GCD(A, B);
        printf("The GCD of %d and %d is %d ", A, B, gcd);
        printf("\n Do you wanna do this again ? (y/n);");
        getchar();
        choice = getchar();
    }
}

int GCD(int a, int b)
{
    int gcd;
    int i;
    for (i = 1; i <= a && i <= b; i++)
    {
        if ((a % 1 == 0) && (b % i == 0))
            gcd = i;
    }
    return gcd;
}