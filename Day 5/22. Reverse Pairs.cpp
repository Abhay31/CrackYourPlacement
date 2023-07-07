class Solution {
public:
    
    void merge(vector<int>& nums, int low , int mid , int high , int& ans)
    {
        int i,j,k;
        
        i=low;
        j=mid;
        
        for(i;i<mid;i++)
        {
            while(j <= high && nums[i] > 2LL * nums[j])
            {
                j++;
            }
            
            ans += j-mid;
        }
        
        
        int left[mid-low];
        int right[high-mid+1];
        
        for(int i=0;i<mid-low;i++)
        {
            left[i] = nums[low+i];
        }
        for(int i=0;i<high-mid+1;i++)
        {
            right[i] = nums[mid+i];
        }
        
        i=0,j=0,k=low;
        
        while(i<mid-low && j<high-mid+1)
        {
            if(left[i] < right[j]) nums[k++] = left[i++];
            else
            {
                nums[k++] = right[j++];
            }
        }
        
        while(i<mid-low) nums[k++] = left[i++];
        while(j<high-mid+1) nums[k++] = right[j++];
    }
    
    void count(vector<int>& nums, int low, int high, int& ans)
    {
        int mid;
        
        if(low < high)
        {
            mid = (low + high)/2;
            
            count(nums,low,mid,ans);
            count(nums,mid+1,high,ans);
            
            merge(nums,low,mid+1,high,ans);
        }
    }
    
    int reversePairs(vector<int>& nums) {
        
        int ans = 0;
        count(nums,0,nums.size()-1,ans);
        
        return ans;
    }
};