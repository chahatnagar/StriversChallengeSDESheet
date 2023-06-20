#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> v;
        int p1 = 0, p2 = 0;
        while(p1<m && p2<n){
            if(nums1[p1]<nums2[p2]){
                v.push_back(nums1[p1]);
                p1++;
            }else if(nums1[p1]>=nums2[p2]){
                v.push_back(nums2[p2]);
                p2++;
            }
        }
        
        while(p1<m){
            v.push_back(nums1[p1]);
            p1++;
        }
        while(p2<n){
            v.push_back(nums2[p2]);
            p2++;
        }
        nums1.clear();
        nums1 = v;
    }
};
int main()
{

return 0;
}