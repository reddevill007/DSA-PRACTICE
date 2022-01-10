// Maximum and minimum of an array using minimum number of comparisons

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct pair
{
    int min;
    int max;
};

struct pair getMinMax(int arr[], int n)
{
    struct pair minmax;
    
    /*If there is only one element then return it as min and max both*/
    if(n == 1)
    {
        minmax.max = arr[0];
        minmax.min = arr[0];
    }

    /* If there are more than one elements, then initialize min and max*/
    if(arr[0] > arr[1])
    {
        minmax.max = arr[0];
        minmax.min = arr[1];
    }

    else
    {
        minmax.max = arr[1];
        minmax.min = arr[0];
    }

    for (int i = 2; i <n; i++)
    {
        if(arr[i] > minmax.max){
            minmax.max = arr[i];
        }

        else if (arr[i] < minmax.min)
        {
            minmax.min = arr[i];
        }
        
    }
    return minmax;
    
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

    struct pair minmax = getMinMax(arr, n);
    printf("\nMinimum element is %d", minmax.min);
    printf("\nMaximum element is %d\n", minmax.max);

    return 0;
}