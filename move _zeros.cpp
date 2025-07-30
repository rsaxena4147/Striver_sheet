#include <bits/stdc++.h>
#include <iostream>
using namespace std;


class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> front;
        vector<int> back;
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                if (matrix[i][j] == 0) {
                    front.push_back(i);
                    back.push_back(j);
                    cout << i << j;
                }
            }
        }
        for (int val : front) {
            for (int i = 0; i < matrix[0].size(); i++) {
                matrix[val][i] = 0;
            }
        }
        for (int val : back) {
            for (int i = 0; i < matrix.size(); i++) {
                matrix[i][val] = 0;
            }
        }
    }
};