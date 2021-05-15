#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int n);

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int *arr = new int[n-1];    // create new array of size n-1
        for(int i = 0; i < n; i++)
            cin>>arr[i];
        reverseArray(arr, n-1);
        for(int i = 0; i < n; i++)
            cout<<arr[i]<<" ";
        delete[] arr;   // deallocate array memory
    }
    return 0;
}


void reverseArray(int arr[], int n){
    
    int temp, i = 0;
    while(1)
    {
        // check for middle index based on odd and even size array
        if( n % 2 == 0 && i == n / 2 || n % 2 != 0 && i > n /2)
            break;
        // swap the numbers
        else
        {
            temp = arr[i];
            arr[i] = arr[n-i];
            arr[n-i] = temp;
            i++;
        }
    }
}