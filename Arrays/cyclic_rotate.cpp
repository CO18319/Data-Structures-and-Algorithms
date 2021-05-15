#include<bits/stdc++.h>
using namespace std;

void cyclic_rotate(int arr[], int n)
{
    int temp;
    temp = arr[n-1];
    // start from last index of the array
    for(int i = n - 1; i > 0 ; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int *arr = new int[n-1];    // create an array of size n-1
        for(int i = 0; i < n; i++)
            cin>>arr[i];
        cyclic_rotate(arr, n);
        for(int i = 0; i < n; i++)
            cout<<arr[i]<<" ";
        delete[] arr;   // deallocate array memory
    }
    return 0;
}