class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        int n= nums.size();
        int idx=0;
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=val){
                nums[idx]=nums[i];
                idx++;
            }else{
                count++;
            }
        }

        return n-count;
        
    }
};