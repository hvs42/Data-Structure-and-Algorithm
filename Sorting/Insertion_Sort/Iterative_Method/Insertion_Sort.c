#include <stdio.h>
#include<stdlib.h>

void insertionSort(int array[], int size) 
{
    for (int i = 1; i < size; i++) 
    {
        int key = array[i];
        int j = i - 1;

        // Compare key with each element on the left of it until an element smaller than
        // it is found.
        // For descending order, change key<array[j] to key>array[j].
        while (key < array[j] && j >= 0) 
        {
            array[j + 1] = array[j];
            --j;
        }
        array[j + 1] = key;
    }
}

void printArray(int array[], int size) 
{
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}


int main()
{
    int n, *arr;
    printf("Enter the size of array : ");
    scanf("%d",&n);
	arr = (int *)malloc(n * sizeof(int));
    printf("Enter the array elements : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Initial array is : ");
    printArray(arr,n);

    insertionSort(arr, n);
    printf("Sorted array in ascending order:\n");
    printArray(arr,n);

    return 0;
}