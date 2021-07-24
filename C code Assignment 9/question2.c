#include <stdio.h>
#include <stdlib.h>

struct complex
{
    int real, imag;
};

int main()
{
    int n, realsum = 0, imagsum = 0;
    struct complex *ptr;

    printf("Enter the number of Elements : ");
    scanf("%d", &n);

    ptr = (struct complex *)malloc((n + 1) * sizeof(struct complex));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &(ptr + i)->real);
        scanf("%d", &(ptr + i)->imag);
        realsum += ((ptr + i)->real);
        imagsum += ((ptr + i)->imag);
    }

    (ptr + n)->real = realsum;
    (ptr + n)->imag = imagsum;

    printf("Value stored at N+1th location : %d + %di", (ptr + n)->real, (ptr + n)->imag);

    return 0;
}

