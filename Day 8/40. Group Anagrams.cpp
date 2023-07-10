class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<int>> m;
        vector<vector<string>> ans;
        for(int i = 0;i<strs.size();i++)
        {
            string s = strs[i];
            sort(s.begin(),s.end());
            m[s].push_back(i);
        }
        for(auto i : m)
        {
            vector<string> v;
            for(auto j: i.second)
            {
                v.push_back(strs[j]);
            }
            ans.push_back(v);
        }
        return ans;
    }   
};
