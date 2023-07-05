class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int sum = 0;
        vector<int> Sum(n,0);
        for(int i = 0;i<n;i++)
        {
            sum += cardPoints[i];
            Sum[i] = sum;
        }
        if(n==k)
        {
            return sum;
        }
        int ans = 0;
        int score = 0;
        for(int i = 0;i<=k;i++)
        {
            int j = i+n-k-1;
            if(i==0) 
                ans = Sum[j];
            else 
                ans = Sum[j] - Sum[i-1];
            score = max(score,sum-ans);
        }
        return score;
    }
};