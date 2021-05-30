#include <stdio.h>
int main ()
{
    int search, i,n;
    printf("Enter number of elements in array \n");
    scanf("%d",&n);
    int arr[n];
    for (i=0; i<n; i++)
    {
        printf(" Enter integer(s) -- \n");
        scanf("%d",&arr[i]);
    }
    printf("Enter a number to sesrch \n");
    scanf("%d",&search);

    for (i=0; i<search; i++)
    {
        if (arr[i] == search)  //Finding the element
    {
        printf("%d is the present location %d. \n", search, i+1);
        break;
    }
    }
    if (i == n)
    printf("%d isn't present in the array. \n", search);
    return 0; 
}