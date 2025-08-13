#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> freq(1000 , 0);
        int i = 0 , j = 0 , n= s.length() , ans = INT_MIN;

        if(n==0) return 0;

        while(j < n){
            freq[s[j]]++;

            while(freq[s[j]]>1){
                freq[s[i]]--;
                i++;
            }

            ans = max(ans , j-i+1);

            j++;
        }
        return ans;
    }
};