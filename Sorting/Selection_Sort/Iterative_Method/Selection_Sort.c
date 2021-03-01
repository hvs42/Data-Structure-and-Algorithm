#include <stdio.h>
#include <stdlib.h>

// function to swap the the position of two elements
void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

void selectionSort(int array[], int size)
{
    int min_idx;
    for (int i = 0; i < size - 1; i++)
    {
        min_idx = i;
        for (int j = i + 1; j < size; j++)
        {
            // To sort in descending order, change > to < in this line.
            // Select the minimum element in each loop.
            if (array[j] < array[min_idx])
            {
                min_idx = j;
            }
        }

        // put min at the correct position
        swap(&array[min_idx], &array[i]);
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
    selectionSort(arr, n);
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

Space complexity is O(1) because an extra variable temp is used.
*/

/*
Selection Sort Applications
The selection sort is used when:

1. a small list is to be sorted
2. cost of swapping does not matter
3. checking of all the elements is compulsory
4. cost of writing to a memory matters like in flash memory (number of writes/swaps is O(n) as compared to O(n2) of bubble sort)
*/