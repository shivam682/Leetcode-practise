class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0;
        int j =numbers.size()-1;
        while(i<j){
            int a =numbers[i];
            int b=numbers[j];
            int sum=a+b;
            if(a+b==target){
                vector<int>ans= {i+1,j+1};
                return ans;
            }
            if(sum>target){
                j--;
            }else{
                i++;
            }
           
        }
        vector<int>ans(2,0);
                return ans;
        
    }
};