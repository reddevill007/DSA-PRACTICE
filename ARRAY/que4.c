// Sort an array of 0s, 1s and 2s

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort012(int a[], int arr_size)
{
    int low = 0;
    int high = arr_size - 1;
    int mid = 0;

    while (mid <= high)
    {
        switch (a[mid])
        {
        case 0:
            swap(&a[low++], &a[mid++]);
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(&a[mid], &a[high--]);
            break;
        }
    }
    
}

void printArray(int arr[], int arr_size)
{
    for (int i = 0; i < arr_size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = { 0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);
 
    sort012(arr, arr_size);
 
    printf("array after segregation ");
    printArray(arr, arr_size);
    return 0;
}