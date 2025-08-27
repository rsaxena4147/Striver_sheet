#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> right(vector<int> & nums){
        vector<int> ans(nums.size());

        int maxi = -1;

        for(int i = nums.size() - 1 ; i >= 0 ; i--){
            ans[i]=maxi;

            if(maxi < nums[i]){
                maxi = nums[i];
            }
        }
    return ans;
    }
    vector<int> left(vector<int> & nums){
        vector<int> ans(nums.size());

        int maxi = -1;
        for(int i = 0 ; i < nums.size() ; i++){
            ans[i]=maxi;
            if(nums[i] > maxi){
                maxi = nums[i];
            }
        }

        return ans;
    }


    int trap(vector<int>& height) {
        vector<int> r = right(height);
        vector<int> l = left(height);
        int ans = 0;

        for(int i = 0 ; i < height.size() ; i++){
            if(l[i]==-1 || r[i]==-1)
            continue;


            int h = min(r[i] , l[i]) - height[i];

            if(h>0)
            ans += (h);
            
        }

        return ans;
    }
};