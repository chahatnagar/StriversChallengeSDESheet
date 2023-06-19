#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_ans = nums[0], curr_sum = 0;

        for(int i = 0; i < nums.size(); i++)
        {
            curr_sum += nums[i];
            max_ans = max(max_ans, curr_sum);
            if(curr_sum<0)
            {
                curr_sum = 0;
            }
        }

        return max_ans;
    }
};
int main()
{

return 0;
}