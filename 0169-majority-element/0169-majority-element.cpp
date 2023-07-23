class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int major=nums[0];
        int freq=1;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==major){
                freq++;
            }else{
                freq--;
                if(freq==0){
                    major=nums[i];
                    freq=1;
                }
            }
        }
        return major;
    }
};