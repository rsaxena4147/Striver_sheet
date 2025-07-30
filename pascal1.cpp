#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        vector<vector<int> > ans;

        if(numRows == 1)
        return {{1}};


        ans.push_back({1});
        ans.push_back({1,1});

        for(int i = 2 ; i < numRows ; i++){
            vector<int> store ;
            store.push_back(ans[i-1][0]);
            int j;
            for( j = 1 ; j < i ; j++){
                store.push_back(ans[i-1][j-1] + ans[i-1][j]);
            }

            store.push_back(ans[i-1][j-1]);
            ans.push_back(store);
        }
        return ans;
    }
};