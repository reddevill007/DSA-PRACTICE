// A C++ program to put all negative numbers before positive numbers
#include <bits/stdc++.h>
using namespace std;

void rearrange(int arr[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            if (i != j)
            {
                swap(arr[i], arr[j]);
            }
            j++;
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
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

    rearrange(arr, n);
    printf("\nRearranged array is array is\n");
    printArray(arr, n);
    return 0;
}
