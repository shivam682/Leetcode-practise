class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        int x =nums.size()-k;
        
        reverse(nums.begin(),nums.begin()+x);
        reverse(nums.begin()+x,nums.end());
        reverse(nums.begin(),nums.end());
        
        
    }
};