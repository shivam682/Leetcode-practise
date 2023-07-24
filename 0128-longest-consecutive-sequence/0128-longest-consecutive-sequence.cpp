class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n= nums.size();
        if(n<=1)return n;
        sort(nums.begin(),nums.end());
        
        int temp=1;
        int ans=-1;
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]+1){
                temp++;
            }else if(nums[i]==nums[i-1]){
                continue;
            }else{
                ans=max(ans, temp);
                temp=1;
            }
        }
        ans =max(ans, temp);
        return ans;
    }
};