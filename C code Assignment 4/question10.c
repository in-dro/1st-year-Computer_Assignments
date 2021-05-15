#include <stdio.h>
int main ()
{
    int x,y,d,r,n=0;
    printf("ENTER A YEAR : ");
    scanf("%d" , &x);
    if (x>1900)
    {
        y=x-1900;
        x--;
        n=((x/4)-(x/100)+(x/400))-((1900/4)-(1900/100)+(1900/400));
    }
    else
    {
       y=x-1900;
        x--;
        n=((1900/4)-(x/100)+(x/400))-((x/4)-(x/100)+(x/400)); 
    }
    d=y*365+n; // d denotes the total no of days
    r=d%7;
    if (x>1900)
    {
        if (r==1)
           printf("Tuesday");
        else if (r==2)
           printf("Wednesday");
        else if (r==3)
           printf("Thursday");
        else if (r==4)
           printf("Friday");
        else if (r==5)
           printf("Saturday");
        else if (r==6)
           printf("Sunday");      
        else 
           printf("Monday");
    }
    return 0;
}
    
    