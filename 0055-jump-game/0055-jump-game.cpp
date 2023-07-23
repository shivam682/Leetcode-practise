class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n =nums.size();
        vector<bool>dp(n);
        dp[n-1]=true;
        for(int i=n-2;i>=0;i--){
            bool t= false;
            for(int j=i+1;j<=min(n-1,i+nums[i]);j++){
                t=t||dp[j];
            }
            dp[i]=t;
        }
        return dp[0];
    }
};