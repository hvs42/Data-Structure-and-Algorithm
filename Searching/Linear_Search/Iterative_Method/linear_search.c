#include <stdio.h> 
  
int linearsearch(int arr[], int n, int x) 
{ 
    int i; 
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
        { 
            return i;
        }
    }
     
    return -1; 
} 
  
int main(void) 
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
    int x;
    printf("Enter the Element you want to search : ");
    scanf("%d",&x);
    int result = linearsearch(arr, n, x); 
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