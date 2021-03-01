#include <stdio.h>
#include <stdlib.h>

// function to swap the the position of two elements
void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void selectionSort(int arr[], int i, int n)
{
    // find the minimum element in the unsorted subarray `[i…n-1]`
    // and swap it with `arr[i]`
    int min = i;
    for (int j = i + 1; j < n; j++)
    {
        // if `arr[j]` is less, then it is the new minimum
        if (arr[j] < arr[min])
        {
            min = j;    // update the index of minimum element
        }
    }
 
    // swap the minimum element in subarray `arr[i…n-1]` with `arr[i]`
    swap(arr, min, i);
 
    if (i + 1 < n)
    {
        selectionSort(arr, i + 1, n);
    }
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
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
    selectionSort(arr,0, n);
    printf("Sorted array : \n");
    printArray(arr, n);

    return 0;
}


/*
Time Complexities:

Worst Case Complexity: O(n2)
If we want to sort in ascending order and the array is in descending order then, the worst case occurs.
Best Case Complexity: O(n2)
It occurs when the array is already sorted
Average Case Complexity: O(n2)
It occurs when the elements of the array are in jumbled order (neither ascending nor descending).

The time complexity of the selection sort is the same in all cases. At every step, you have to find the minimum element and put it in the right place. The minimum element is not known until the end of the array is not reached.

Space Complexity:

Space complexity is O(n).
(The time Complexity of the selection sort recursive algorithm remains the same as the iterative version, However, the auxilary space used by recursive version is O(n) for the call stack)
*/

/*
Selection Sort Applications
The selection sort is used when:

1. a small list is to be sorted
2. cost of swapping does not matter
3. checking of all the elements is compulsory
4. cost of writing to a memory matters like in flash memory (number of writes/swaps is O(n) as compared to O(n2) of bubble sort)
*/