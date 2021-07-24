#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    printf("Enter number of rows of 2d array : ");
    scanf("%d", &n);
    printf("Enter number of columns of 2d array : ");
    scanf("%d", &m);
    int **arr, **ptr_to_rows, **ptr_to_array;
    arr = (int **)malloc(n * sizeof(int *));
    ptr_to_rows = malloc(n * sizeof(int *));
    ptr_to_array = &ptr_to_rows[0];
    for (int i = 0; i < n; i++)
    {
        arr[i] = (int *)malloc(m * sizeof(int));
        ptr_to_rows[i] = &arr[i][0];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d",(*(arr+i)+j));
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d \t", arr[i][j]);
        }
        printf("\n");
    }

    printf("Address of the locations : ");
    for (int i = 0; i < n; i++)
    {
        printf("%u %u %u ", ptr_to_rows[i], &arr[i][0], ptr_to_array[i]);
    }

    free(arr), free(ptr_to_rows), free(ptr_to_array);
    return 0;
}