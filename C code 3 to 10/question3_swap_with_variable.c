#include<stdio.h>
int main()
{
    int x,y,z;
    printf("enter the 2 numbers : ");
    scanf("%d",&x);
    scanf("%d",&y);
    printf("\n numbers before swapping : (%d,%d)",x,y);
    z=y;
    y=x;
    x=z;
    printf("\n numbers after swapping : (%d,%d)",x,y);

    return 0;
}