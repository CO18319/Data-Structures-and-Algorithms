#include<bits/stdc++.h>
#include<vector>
using namespace std;

class Solution {
public:

    // my solution
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> merged;

        int j = 0, temp, temp2;
        sort(intervals.begin(), intervals.end());
        while(j < intervals.size())
        {
            vector<int> row;
            int k = j;
            temp = intervals[k][0];
            temp2 = intervals[k][1];
            while(k < intervals.size() - 1)
            {
                if(intervals[k][1] >= intervals[k+1][0])
                {
                    k++;
                    if(temp > intervals[k][0])
                        temp = intervals[k][0];
                    if(temp2 < intervals[k][1])
                        temp2 = intervals[k][1];
                }
                else 
                    break;
            } 
            row.push_back(temp);
            row.push_back(temp2);
            merged.push_back(row);
            j = k + 1;
        }
        return merged;
    }

    // Optimized solution
    // vector<vector<int>> merge(vector<vector<int>>& intervals) {
    //     sort(intervals.begin(), intervals.end());

    //     vector<vector<int>> merged;
    //     for (auto interval : intervals) {
    //         // if the list of merged intervals is empty or if the current
    //         // interval does not overlap with the previous, simply append it.
    //         if (merged.empty() || merged.back()[1] < interval[0]) {
    //             merged.push_back(interval);
    //         }
    //         // otherwise, there is overlap, so we merge the current and previous
    //         // intervals.
    //         else {
    //             merged.back()[1] = max(merged.back()[1], interval[1]);
    //         }
    //     }
    //     return merged;
    // }
};

int main()
{
    vector<vector<int>> intervals;
    vector<vector<int>> merged;
    int n, temp;
    cin>>n;

    for(int i = 0; i < n; i++)
    {
        vector<int> row;
        for(int j = 0; j < 2; j++)
        {
            cin>>temp;
            row.push_back(temp);
        }
        intervals.push_back(row);
    }

    Solution obj;
    merged = obj.merge(intervals);
    for(int i = 0; i < merged.size(); i++)
    {
        for(int j = 0; j < 2; j++)
        {
           cout << merged[i][j] << " ";
        }
    }
}