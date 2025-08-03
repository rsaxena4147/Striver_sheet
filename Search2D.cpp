#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& nums, int target) {
        int n = nums.size();
        int start = 0;
        int end = n - 1;

        while (start <= end) {
            int mid = (start + end) / 2;

            if (nums[mid][0] == target) {
                return true;
            } else if (nums[mid][0] > target) {
                end = mid - 1;
            } else if (nums[mid][nums[0].size() - 1] < target) {
                start = mid + 1;
            } else {

                int s = 0;
                int e = nums[0].size() - 1;

                while (s <= e) {

                    int m = (s + e) / 2;

                    if (nums[mid][m] == target) {
                        return true;
                    } else if (nums[mid][m] > target) {
                        e = m - 1;
                    } else {
                        s = m + 1;
                    }
                }
                return false;
            }
        }

        return false;
    }
};