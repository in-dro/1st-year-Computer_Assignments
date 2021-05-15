#include <stdio.h>
int main ()
{
    int x,y,z;float avg;
    printf ("ENTER THE MARKS OBTAINED BY A STUDENT IN THREE SUBJECTS OUT OF 100 : \n");
    scanf ("%d%d%d", &x,&y,&z);
    avg=(float)(x+y+z)/3;
    if (avg>=60.0)
    {
        printf ("1st Division!!\n");
    }
    else if (avg>= 45 && avg<60)
    {
        printf ("2nd Division!!\n");
    }
    else if (avg>= 34 && avg<40)
    {
        printf ("3rd Division!!\n");
    }
    else
    {
        printf ("Fail!!\n");
    } 
    return 0;
}