#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_map<int, int> map;

        if(nums.size()==0){
            return 0;
        }if(nums.size()==1){
            return 1;
        }

        for(int num : nums){
            map[num]++;
        }
        int longest = 0;
       

        for(auto i : map){

            if(map.find(i.first-1)==map.end()){
                int count = 1;
                int v = i.first;


                while(map.find(v+1)!=map.end()){
                    count++;
                    v++;
                }
            longest = max(count , longest);

            }



        }
        return longest;
    }
};