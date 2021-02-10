Roll no. 42 

#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int n,i,j,k,temp=0,min=0,*arr;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    arr = (int *)calloc(n, sizeof(int));
    if (arr == NULL) 
	{
        printf("Dynamic memory allocation not possible");
    }
	else
	{
		printf("Enter the array elements");
		for(i=0;i<n;i++)
		{
			scanf("%d",arr+i);
		}
		for(i=0;i<n-1;i++)
		{
			min=i;
			for(j=i+1;j<n;j++)
			{
				if(arr[j]<arr[min])
					min=j;
			}
			if(min!=i)
			{
				temp=arr[min];
				arr[min]=arr[i];
				arr[i]=temp;
			}
		}
		printf("The sorted array is : \n");
		for(k=0;k<n;k++)
		{
			printf("%d \n ",arr[k]);
		}
	}
}