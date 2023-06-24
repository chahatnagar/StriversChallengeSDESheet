#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, pair<int, int>> m1;
        vector<int> v;
        for(int i = 0; i < nums.size(); i++){
            if(m1.find(target-nums[i]) != m1.end()){
                v.push_back(m1[target-nums[i]].second);
                v.push_back(i);
                break;
            }else{
                m1[nums[i]] = {nums[i], i};
            }
        }
        
        return v;
        
    }
};
int main()
{

return 0;
}