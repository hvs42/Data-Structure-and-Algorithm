#include<stdio.h> 

int recSearch(int arr[], int l, int r, int x) 
{ 
     if (r < l)
     {
        return -1;
     } 
     if (arr[l] == x)
     { 
        return l;
     } 
     if (arr[r] == x)
     { 
        return r;
     }

     return recSearch(arr, l+1, r-1, x); 
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
    int x;
    printf("Enter the Element you want to search : ");
    scanf("%d",&x);
    int result = recSearch(arr, 0, n-1, x);
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