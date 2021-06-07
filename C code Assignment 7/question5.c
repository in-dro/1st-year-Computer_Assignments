#include <stdio.h>
void swap(int a, int b);
int main()
{
    char choice = 'y';
    while (choice != 'n')
    {
        int m, n, ex[2] = {}, i;
        printf("Enter the values to be swapped: ");
        scanf("%d %d", &m, &n);
        swap(m, n);
        printf("\nDo you wanna do this again ? (y/n) ");
        getchar();
        choice = getchar();
    }
}
void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = b;
    b = temp;
printf( "The swapped values are %d and %d", a, b);
}