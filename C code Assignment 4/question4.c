#include <stdio.h>
int main()
{
     int x,y,z;
     printf ("Enter the lenths of the triangle : \n");
     scanf("%d%d%d", &x,&y,&z);
     if (x+y>z && y+z>x && z+x>y)
    {
     printf ("The triangle is valid.\n");
    }
    else
    {
     printf ("The triangle is invalid.\n");
    }
    return 0;
}
