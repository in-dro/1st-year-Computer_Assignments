#include <stdio.h>
void bubble_sort(int m, int arr[]);
void binary_search(int arr[], int low, int high, int key);
int main()
{

    char choice = 'y' ;
    while (choice != 'n')
    {

        int list[10], val, i;
        printf("Enter the elements of the array: \n");
        for (i = 0; i < 10; i++)
            scanf("%d", &list[i]);
        bubble_sort(10, list);
        printf("Enter the value to be searched for: ");
        scanf("%d", &val);
        binary_search(list, 0, 10, val);
        printf("\nDo you wanna do this again ? (y/n): ");
        getchar();
        choice = getchar();
    }
}

void bubble_sort(int m, int arr[])
{
    int i, temp, j;
    for (i = 0; i < m; i++)
    {
        for (j = i; j < m; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void binary_search(int arr[], int low, int high, int key)
{
    int mid = (low + high) / 2;
    if (key == arr[mid])
        printf("Element found");
    else if (key < arr[mid])
        binary_search(arr, low, mid - 1, key);
    else if (key > arr[mid])
        binary_search(arr, mid + 1, high, key);
    else if (low > high)
        printf("Element not found");
}