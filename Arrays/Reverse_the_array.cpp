#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,temp;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int start=0,end=(n-1);
    
    while(start<end)            // To reverse the array
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    cout<<"Reversed array is : ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;    
}
