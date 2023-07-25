class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int i=1;
        int j= arr.size()-1;
        int ans =-1;
        while(i<j){
            int mid  =(i+j)/2;
            if(arr[mid]>arr[mid+1]){
                ans =mid;
                j=mid;
            }else{
                i=mid+1;
            }
        }
        return ans;
    }
};