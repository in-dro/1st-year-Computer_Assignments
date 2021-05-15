#include <stdio.h>
int main ()
{
    int x,y,z;
    int result;
    printf ("ENTER THREE NUMBERS : \n");
    scanf("%d%d%d", &x,&y,&z);
    result = (x>y) ? ((x>z)? x : z) : ((y>z) ? y : z);
    printf ("%d is the largest number\n", result);
    return 0;
}