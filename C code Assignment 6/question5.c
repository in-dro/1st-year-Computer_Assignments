#include <stdio.h>
int main()
{
    int arr[10];
    int i, x1, pos1, pos2, n = 10;
    printf("Please enter 10 integers for populating the array: ");
    //initial array of size 10 with elements
    for (i = 0; i < 10; i++)
        ;
    {
        printf(" \n Enetr an integer - \n");
            scanf("%d", &arr[1]);
    }
    //element to be inserted
    printf("Please enter the element to be instered --- \n");
    scanf("%d", &x1);
    //position at which element is to be inserted
    printf("Please enter the position where the elment is to be inserted-- \n");
    scanf("%d", &pos1);
    //shift elements forward
    for (i = n - 1; i > pos1; i--)
        arr[i] = arr[i - 1];
    //insert x at pos
    arr[pos1 - 1] = x1;
    //print updated array
      for (i = 0; i < n; i++)
       printf("\t %d", arr[i]);
       printf("\n");
       printf("\n Enter the element position to delete: ");
       scanf("%d", &pos2);
       //copy next element value to current element
       for(i=pos2-1; i<9; i++)
       {
        arr[i] = arr[i + 1];
       }    
       printf("Elements of array after delete are : ");
       for (i=1; i<9; i++)
       {
        printf("%d", arr[i]);
       }
       return 0;
}