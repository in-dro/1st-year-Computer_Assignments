#include <stdio.h>
int main()
{
       int x,y , z;
       printf("ENTER THREE NUMBERS :\n");
       scanf("%d%d%d" ,&x,&y,&z);
       if (x>y)
    {
        if (x>y)
        {
            printf("Largest number is %d" , x);
        }
        else
        {
            printf("Largest number is %d" , z);
        }
    }   
else     
{
    if(y>x)
    {
        printf("Largest number is %d" , y);
    }
    else
    {
        printf("Largest number is %d" , z);
    }
}
return 0;
}   