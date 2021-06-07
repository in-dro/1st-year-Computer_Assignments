#include <stdio.h>
int prime(int x);
int main()
{

    char choice = 'y';
    while (choice != 'n')
    {
        int num;
        printf("Enter an integer: ");
        scanf("%d", &num);
        prime(num);
        printf("\nDo you wanna do this again ? (y/n) ");
        getchar();
        choice = getchar();
    }
}

int prime(int x)
{
    int a;
    printf("The prime factors of the given number are =  ");
    
    for (a = 2; a <= x;a++)
    {
        if (x % a == 0)
        {
            printf("%d, ", a);
            x = x / a;
            a--;
        }
    }
}
