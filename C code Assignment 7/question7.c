#include <stdio.h>
int fact(int n);
int main()
{

    char choice = 'y';
    while (choice != 'n')
    {
        int m;
            printf("Enter the number for facorial calculation: ");
        scanf("%d", &m);
        printf("The factorial of %d is %d", m, fact(m));
        printf("\nDo you wanna do this again ? (y/n) : ");
        getchar();
        choice = getchar();
    }
}

int fact(int n)
{
    while (n != 0)
        return n * fact(n - 1);
    return 1;
}