#include <stdio.h>
int main ()
{
    int array1 [10], array2 [10], array3 [10];
    int i,j,k;
    for (i=0; i<10; i++)
    {
        printf(" Enter integer(s) for array 1 -- \n ");
        scanf("%d" , &array1[i]);
    }
    for (j=0; j<10; j++)
    {
        printf(" Enter integer(s) for array 2 -- \n ");
        scanf("%d" , &array2[j]);
    }
    for (k=0; k<10; k++)
    {
        array3[k] =array1[k]+array2[10-k-1];
        printf(" %d \t" , array3[k]);
    }
    return 0;
}