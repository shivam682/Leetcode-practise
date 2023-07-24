class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans ;
        int n= nums.size();
        int i=0;
        int j=0;
        while(j<n){
            if(j<n-1&&nums[j+1]==nums[j]+1){
                j++;
            }else{
                string x="";
                
                string a =to_string(nums[i]);
                
                string b =to_string(nums[j]);
                if(a==b){
                    x=x+a;
                }else{
                x= x+a+"->"+b;
                }
                ans.push_back(x);
                i=j+1;
                j=j+1;
            }
        }
        return ans;
    }
};