#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end());
        int range1 = intervals[0][0], range2 = intervals[0][1];

        for(int i = 1; i < intervals.size(); i++)
        {
            if(range1==-1 && range2==-1)
            {
                range1 = intervals[i][0];
                range2 = intervals[i][1];
                continue;
            }
            else if(intervals[i][0]<=range2)
            {
                range2 = max(range2, intervals[i][1]);
            }
            else if(intervals[i][0]>range2)
            {
                ans.push_back({range1, range2});
                range1 = intervals[i][0];
                range2 = intervals[i][1];
            }
        }

        if(range1!=-1 && range2!=-1)
        {
            ans.push_back({range1, range2});
        }

        return ans;
    }
};
int main()
{

return 0;
}