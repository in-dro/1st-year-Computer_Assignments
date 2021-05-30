#include <stdio.h>
int main()
{
    int arr[10];
    float sum = 0, avg = 0;
    int max, min;
    for (int i = 0; i < 10; i++)
    {
        printf("\n Please enter a number --- ");
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    max = min = arr[0];
    for (int j = 1; j < 10; j++)
    {
        if (arr[j] > max)
            max = arr[j];
        if (arr[j] < min)
            min = arr[j];
    }
    printf(" The greatest number is : %d\n", max);

    printf(" The lowest number is : %d\n", min);
    printf(" The sum is : %f", sum);
    printf(" The avarage is :%f", avg);
    return 0;
}    