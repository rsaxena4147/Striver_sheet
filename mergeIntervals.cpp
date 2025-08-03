#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        sort(intervals.begin() , intervals.end());


        vector<vector<int>> ans;


        vector<int> st = intervals[0];


        for(int i = 1 ; i < intervals.size() ; i++){

            if(st[1] >= intervals[i][0]){
                st[1]= st[1] > intervals[i][1] ? st[1] : intervals[i][1];
            }else{
                ans.push_back(st);
                st = intervals[i];
            }
        }
        if(st.size())
        ans.push_back(st);
        return ans;
    }
};