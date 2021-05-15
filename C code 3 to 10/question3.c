#include<stdio.h>
int main()
{
    int x,y;
    printf("\n enter the 2 nos : ");
    scanf("%d",&x);
    scanf("%d",&y);
    printf("\n numbers before swapping : (%d,%d)",x,y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("\n numbers after swapping : (%d,%d)",x,y);

    return 0;
}