#include <stdio.h>
int sum_of_digit(int n)
{
    if (n == 0)
        return 0;
    return (n % 10 + sum_of_digit(n / 10));
}

       int main()
        {
            char choice = 'y';
            while (choice != 'n')
            {
                int num;
                printf("Enter the number : ");
                scanf("%d", &num);
                int result = sum_of_digit(num);
                printf("Sum of digits in %d is %d\n", num, result);
                printf("Do you wanna do this again ? (y/n)");
                getchar();
                choice = getchar();
            }
        }