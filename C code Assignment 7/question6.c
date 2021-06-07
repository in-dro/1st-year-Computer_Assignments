#include <stdio.h>
int Fibonacci(int n);
int main()
{
    char choice = 'y' ;
    while (choice != 'n')
    {
        int n, i = 0, c;
        printf("Enter the number of terms : ");
        scanf("%d", &n);
        printf("Fibonacci series\n") ;
        for (c = 1; c <= n; c++)
        {
            printf("%d\n", Fibonacci(i));
            i ++;
        }
        printf("Do you wanna do this again ? (y/n) : ");
        getchar();
        choice = getchar();
    }
}
int Fibonacci(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return (Fibonacci(n - 1) + Fibonacci(n - 2));
}