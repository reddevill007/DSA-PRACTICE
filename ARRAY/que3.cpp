// K’th Smallest/Largest Element in Unsorted Array

#include <iostream>
#include <algorithm>

using namespace std;

int ktnSmallest(int arr[], int n, int k)
{
    // Sort the given array
    sort(arr, arr + n);

    // Return k'th element in the sorted array
    return arr[k - 1];
    
}

int ktnLargest(int arr[], int n, int k)
{
    // Sort the given array
    sort(arr, arr + n);

    // Return k'th element in the sorted array
    return arr[n - k];
    
}

int main()
{
    int n, k;
    printf("\nEnter the number of element you want in your array: ");
    scanf("%d", &n);
    int arr[n];

    printf("\nEnter the element of your array\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the value of k(kth smallest element): ");
    scanf("%d", &k);

    printf("K'th smallest element is %d\n", ktnSmallest(arr, n, k));

    printf("K'th largest element is %d\n", ktnLargest(arr, n, k));
    return 0;
}