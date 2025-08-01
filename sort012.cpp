#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {

        int k = 0;
        int i = 0;
        while(i <nums.size()){
            if(nums[i]==0){
                swap(nums[k], nums[i]);
                i++;
                k++;
            }else{
                i++;
            }
        }

        int j = k;

        while(j < nums.size()){
            if(nums[j]==1){
                swap(nums[k++] , nums[j++]);
            }else{
                j++;
            }
        }


        
    }
};