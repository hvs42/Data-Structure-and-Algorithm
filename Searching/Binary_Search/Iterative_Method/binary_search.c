#include <stdio.h> 
  
// A iterative binary search function. It returns 
// location of x in given array arr[l..r] if present, 
// otherwise -1 
int binarySearch(int arr[], int l, int r, int x) 
{ 
    while (l <= r)
    { 
        int m = l + (r - l) / 2; 

        if (arr[m] == x) 
        {
            return m; 
        }
  
        // If x greater, ignore left half 
        if (arr[m] < x) 
        {
            l = m + 1; 
        }

        else
        {
            r = m - 1; 
        }
    } 
  
    // if we reach here, then element was 
    // not present 
    return -1; 
} 

  
int main(void) 
{ 
    int n,x;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the elements to be searched : ");
    scanf("%d",&x);
    
    int result = binarySearch(arr, 0, n - 1, x); 
    if(result == -1)
    {
        printf("Element is not present in array");
    }
    else
    { 
        printf("Element is present at possition %d", result+1);
    } 
    return 0; 
} 