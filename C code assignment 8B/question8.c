#include <stdio.h>

struct complex
{
    int real, imaginary;
};
struct complex sum(struct complex a, struct complex b)
{
    struct complex c;
    c.real = a.real + b.real;
    c.imaginary = a.imaginary + b.imaginary;
    return c;
}

int main()
{
    struct complex c1, c2, c3, c4;
    printf("Enter the real part of complex number 1 : \n");
    scanf("%d", &c1.real);
    printf("Enter the imaginary part of complex number 1 : \n");
    scanf("%d", &c1.imaginary);
    printf("Enter the real part of complex number 2 : \n");
    scanf("%d", &c2.real);
    printf("Enter the imaginary part of complex number 2 : \n");
    scanf("%d", &c2.imaginary);

    c3 = sum(c1, c2);
    printf("required complex number : %d +%di", c3.real, c3.imaginary);

    return 0;
}