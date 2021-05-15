#include <stdio.h>
int main ()
{
    char x;
    int y;
    printf("ENTER A CHRACTER : ");
    scanf("%c" , &x);
    y=x;
    if (y>=65 && y<=90)
    {
        printf(" The entered character is a capital letter\n");
    }
    else if (y>=48 && y<=57)
    {
        printf(" The entered character is a digit\n");
    }
    else if (y>=97 &&  y<=122)
    {
        printf(" The entered character is a small letter\n");
    }
    else 
    {
        printf(" The entered character is a special chracter\n");
    }
    return 0;
}   R