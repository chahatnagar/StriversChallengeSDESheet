#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int white = 0, red = 0, blue = nums.size()-1;

        while(white<=blue)
        {
            if(nums[white]==0)
            {
                swap(nums[white], nums[red]);
                red++;
                white++;
            }
            else if(nums[white]==1)
            {
                white++;
            }
            else
            {
                swap(nums[blue], nums[white]);
                blue--;
            }
        }

        
    }
};
int main()
{

return 0;
}