/*
    Union of two sorted arrays.
*/
#include<bits/stdc++.h>
using namespace std;

// to find number of elements in union with handling duplicates in an array
int union_with_duplicate(int a[], int n, int b[], int m)
{
    int count = 0, flag;
        
    // take smaller array
    if(m <= n)
    {
        for(int i = 0; i < m; i++)
        {
            flag = 0;
            for(int j = 0; j < n; j++)
            {
                if(b[i] == a[j]) {
                    count++;
                    break;
                }
            }
        }
        return (n + m - count);
    }
    else
    {
        for(int i = 0; i < n; i++)
        {
            flag = 0;
            for(int j = 0; j < m; j++)
            {
                if(a[i] == b[j]) {
                    count++;
                    break;
                }
            }
        }
        return (n + m - count);
    }
}

// to find number of elements in union without handling duplicates in an array
int union_without_duplicate(int a[], int n, int b[], int m)
{
}