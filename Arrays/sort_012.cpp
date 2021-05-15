/*
    Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo
*/

#include<bits/stdc++.h>
using namespace std;

// first solution
void _1_sort012(int arr[], int n)
{
    int lo = 0;
    int hi = n - 1;
    int mid = 0;

    // sort until mid <=hi
    while (mid <= hi) {
        switch (arr[mid]) {

        case 0:
            swap(arr[lo++], arr[mid++]);
            break;

        case 1:
            mid++;
            break;

        case 2:
            swap(arr[mid], arr[hi--]);
            break;
        }
    }
}

// second solution
void _2_sort012(int arr[], int n)
{
    int i, count0 = 0, count1 = 0, count2 = 0;

    // Count the number of 0s, 1s and 2s in the array
    for (i = 0; i < n; i++) {
        switch (arr[i]) {
        case 0:
            count0++;
            break;
        case 1:
            count1++;
            break;
        case 2:
            count2++;
            break;
        }
    }
    
    // Update the array
    i = 0;
    
    // Store all the 0's in the beginning
    while (count0 > 0) {
        arr[i++] = 0;
        count0--;
    }
    
    // store 1's after 0's
    while (count1 > 0) {
        arr[i++] = 1;
        count1--;
    }
    
    // store 2's after 1's
    while (count2 > 0) {
        arr[i++] = 2;
        count2--;
    }
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
        _1_sort012(arr, n);
        for(int i = 0; i < n; i++)
            cout<<arr[i]<<" ";
        delete[] arr;   // deallocate array memory
    }
    return 0;
}   