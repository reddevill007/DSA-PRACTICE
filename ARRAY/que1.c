// Write a program to reverse an array

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

int main()
{
    int n;
    printf("\nEnter the number of element you want in your array: ");
    scanf("%d", &n);
    int arr[n];

    printf("\nEnter the element of your array\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nYour array is\n");
    printArray(arr, n);

    reverseArray(arr, 0, n-1);

    printf("\nReversed array is\n");
    printArray(arr, n);
    printf("\n");

    return 0;
}