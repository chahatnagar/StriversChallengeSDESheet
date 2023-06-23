#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rowsize = matrix[0].size(), colsize = matrix.size();
        int low1 = 0, low2 = 0, high1 = colsize-1, high2 = rowsize-1;
        
        while(low1<=high1){
            int mid1 = (low1+high1)/2;
            if(matrix[mid1][0]<=target && matrix[mid1][rowsize-1]>=target){
                while(low2<=high2){
                    int mid2 = (low2+high2)/2;
                    if(matrix[mid1][mid2]==target){
                        return true;
                    }else if(matrix[mid1][mid2]<target){
                        low2 = mid2 + 1;
                    }else{
                        high2 = mid2 - 1;
                    }
                }
                return false;
                
                
                
            }else if(target>matrix[mid1][rowsize-1]){
                low1 = mid1 + 1;
            }else{
                high1 = mid1 - 1;
            }
            
        }
        
        return false;
    }
};
int main()
{

return 0;
}