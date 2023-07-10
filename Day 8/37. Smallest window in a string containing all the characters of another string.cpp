class Solution
{
    public:
    string smallestWindow (string s, string t){
        int n = s.size();
        unordered_map<char,int> m;
        for(auto it: t) m[it]++;
        int i = 0;
        int j = 0;
        int count = t.size();
        int ans = INT_MAX;
        int start = -1;
        
        while(j<n){
            if(m[s[j]] > 0) count--;
            m[s[j]]--;
            
            while(count==0){
                if(j-i+1 < ans){
                    ans = j-i+1;
                    start = i;
                }
                m[s[i]]++;
                if(m[s[i]]>0) count++;
                i++;
            }
            j++;
        }
        return start==-1 ? "-1" : s.substr(start, ans);
    }
};