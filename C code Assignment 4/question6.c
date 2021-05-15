#include <stdio.h>
#include <math.h>
int main ()
{
    int a,b,c;
    int D;
    float x1, x2;
    printf("Enter the coefficient of x^2 : ");
    scanf("%d" , &a);
    printf("Enter the coefficient of x : ");
    scanf("%d" , &b);
    printf("Enter the constant : ");
    scanf("%d ", &c);
    D=pow (b,2)-4*a*c; //discriminent
    if (D>=0)
    {
        x1=(float)(-b+ sqrt (D))/(2*a);
        x2=(float)(-b- sqrt (D))/(2*a);
        printf("The real roots of the quadractic equation are %0.2f and %0.2f", x1,x2);
    }
    else
    {
        printf("No real roots exist.\n");
    }
    return 0;
}