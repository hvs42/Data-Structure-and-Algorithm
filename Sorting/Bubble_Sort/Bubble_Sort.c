#include<stdio.h>
 
void swap(int* a, int* b) 
{ 
	int t = *a; 
	*a = *b; 
	*b = t; 
} 

void bubbleSort(int arr[], int n)
{
    if (n == 1)
        return;
 
    for (int i=0; i<n-1; i++)
        if (arr[i] > arr[i+1])
            swap(&arr[i], &arr[i+1]);
 
    bubbleSort(arr, n-1);
}
 
void printArray(int arr[], int n)
{
    for (int i=0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
int main()
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
	int arr[n];
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