class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0;
        int j=0;
        int sum=nums[0];
        int ans =INT_MAX;
        while(i<nums.size()&&j<nums.size()){
            if(sum<target){
                j++;
                if(j<nums.size()){
                sum+=nums[j];
                }
            }else if(sum>=target){
                ans =min(ans, j-i+1);
                sum-=nums[i];
                i++;
            }
            
        }
        
        return ans==INT_MAX ? 0:ans ;
    }
};