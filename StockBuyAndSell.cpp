#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = INT_MIN, min1 = prices[0];

        for(int i = 0; i < prices.size(); i++)
        {
            if(prices[i]>min1)
            {
                ans = max(ans, prices[i]-min1);
            }
            min1 = min(prices[i], min1);
        }

        if(ans<0) return 0;
        return ans;
    }
};
int main()
{

return 0;
}