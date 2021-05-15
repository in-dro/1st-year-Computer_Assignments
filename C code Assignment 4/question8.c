#include <stdio.h>
#include <math.h>
int main ()
{
    int x,y;
    printf("ENTER VALUE OF x:");
    scanf("%d", &x);
    if (x<0)
    {
        y=6*x+1;
    }
    else if (x>=0 && x<=29)
    {
        y=5*pow(x,3)-6;
    }
    else if (x>=30 && x<=50)
    {
        y=2*pow(x,2)+3;
    }
    else
    {
        y=0;
    }
    printf("y=%d", y);
    return 0;

}