class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
        sort(a.begin(),a.end());
        long long ans = 0;
        for(int i = 0;i<n-m+1;i++)
        {
            long long sum = 0;
            if(i == 0)
            {
                sum = a[m+i-1]-a[i];
                ans = sum;
            }
            else
            {
                sum = a[m+i-1]-a[i];
                ans = min(ans,sum);
            }
        }
        return ans;
    }   
};