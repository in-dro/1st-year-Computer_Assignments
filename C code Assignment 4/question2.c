#include <stdio.h>
int main ()
{
    int x,n;
    printf ("Enter a year : ");
    scanf("%d", &x);
    if ((x%4==0 && x%100!=0) || (x%400==0))
{
  printf("the entered year is a leap year.\n");
  }
  else
  {
      printf("the entered year is not a leap year.\n");
}
    return 0;
}




