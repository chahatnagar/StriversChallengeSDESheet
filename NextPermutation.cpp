#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size(), j;
        
        for(j = n-2; j >= 0; j--)
        {
            if(nums[j]<nums[j+1]) break;
        }


        if(j<0) reverse(nums.begin(), nums.end());
        else
        {
            int x;
            for(x = n-1; x > j; x--)
            {
                if(nums[x]>nums[j]) break;
            }
            swap(nums[j], nums[x]);

            reverse(nums.begin()+j+1, nums.end());
        }
        
    }
};
int main()
{
return 0;
}