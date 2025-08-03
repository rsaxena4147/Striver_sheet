#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> map;
        vector<int> ans;
        for(int i = 0 ; i < nums.size() ; i++){
            map[nums[i]] +=1 ;
        }
        int n = nums.size();
        for(auto val : map){
            if(val.second > n/3){
                ans.push_back(val.first);
            }
        }
        return ans;
    }
};