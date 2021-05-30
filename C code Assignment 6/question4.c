#include <stdio.h>
int main()
{
    int c, first, last, middile, n, search, array[100];
    printf("Enter number of elements \n");
    scanf("%d", &n);
    printf("Enter %d integers \n", n);
    for (c = 0; c < n; c++)
        scanf("%d", &array[c]);
    printf("Enter the value to find \n");
    scanf("%d", &search);
    first = 0;
    last = n - 1;
    middile = (first + last) / 2;
    while (first < last)
    {
        if (array[middile] < search)
            first = middile + 1;
        else if (array[middile] == search) {
            printf("%d found at location %d. \n", search, middile + 1);
            break;
        }
        else 
           last = middile -1;
           middile =(first+last)/2;
    }

    if (first > last)
        printf("Sorry the number %d is not found!\n The number is not present in the list.\n", search);
    return 0;
}