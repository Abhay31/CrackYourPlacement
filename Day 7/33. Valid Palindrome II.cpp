class Solution {
    bool isPal(string s, int l, int r)
    {
        while(l < r)
        {
            if(s[l] != s[r])
                return false;
            
            l++;
            r--;
        }
        
        return true;
    }
public:
    bool validPalindrome(string s) {
        int st = 0, n = s.length()-1;
        while(st < n)
        {
            if(s[st] != s[n])
            {
                return isPal(s, st+1, n) || isPal(s, st, n-1);
            }
            st++;
            n--;
        }
        return 1;
    }
};