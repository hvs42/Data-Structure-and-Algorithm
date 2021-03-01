#include<stdio.h>
#include<stdlib.h>
 
void swap(int* a, int* b) 
{ 
	int t = *a; 
	*a = *b; 
	*b = t; 
} 

void bubbleSort(int arr[], int n)
{
    for (int i=0; i < (n-1) ; i++)
    {
        for (int j = 0; j < (n-i-1) ; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(&arr[j], &arr[j+1]);
            }
        } 
    }
}
 
void printArray(int arr[], int n)
{
    for (int i=0; i < n; i++)
    {
        printf("%d ", arr[i]);
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
    bubbleSort(arr, n);
    printf("Sorted array : \n");
    printArray(arr, n);

    return 0;
}