#include<bits/stdc++.h>
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        sort(strs.begin(),strs.end());
        int c = 0;
        for(int i = 0;i<strs[0].length();i++)
        {
            if(strs[0][i] == strs[n-1][i])
            {
                c++;
            }
            else
            {
                break;
            }
        }
        if(c == 0)
            return "";
        else
        {
            return strs[0].substr(0,c);
        } 
    }
};