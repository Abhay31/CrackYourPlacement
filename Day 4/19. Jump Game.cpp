class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        vector<bool>arr(n,false);
        arr[n-1] = true;
        for(int i = n-2;i >= 0;i--){
            for(int j = 0;j <= nums[i];j++){
                if(i + j < n && arr[i+j] == true){
                   arr[i] = true;
                   break;
                }
            }
        }
        return arr[0];
    }
};