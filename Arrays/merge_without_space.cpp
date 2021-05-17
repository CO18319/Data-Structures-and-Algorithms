#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	    // code here
	    int flag, p = 0;
	    
	    while(p != m)
	    {
	        flag = 0;
	        for(int i = 0; i < n; i++)
	        {
                if(arr2[p] < arr1[i])
                {
                    swap(arr1[i], arr2[p]);
                    flag = 1;
                    break;
                }
	        }
	        if(flag == 0)
	            p++;
	    }
    	sort(arr1, arr1 + n);
    	sort(arr2, arr2 + m);
	}
    /*
        Time complexity - O(n*m)
        Space complexity - O(1)
    */

    // Optimized solution - O(n+m)*log(m+n) time complexity
    /* int p1 = 0,  p2 = 0, k = n - 1;

    while(p1 <= k && p2 < m)
    {
        if (arr1[p1] < arr2[p2])
            p1++;
        else {
            swap(arr1[k--], arr2[p2++]);
        }
    }
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);

    */
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, i;
        cin >> n >> m;
        int arr1[n], arr2[m];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < m; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        ob.merge(arr1, arr2, n, m);
        for (i = 0; i < n; i++) {
            cout << arr1[i] << " ";
        }
        for (i = 0; i < m; i++) {
            cout << arr2[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends