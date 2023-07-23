class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int val=arr[0];
        int freq=1;
        for(int i=1;i<arr.size();i++){
            if(arr[i]==val){
                freq++;
                if(freq>2){
                    arr[i]=-100000;
                }
            }else{
                val=arr[i];
                freq=1;
            }
        }


        int nonZeroIndex = 0;

    // Traverse the array and move non-zero elements to the front
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] != -100000) {
            arr[nonZeroIndex] = arr[i];
            nonZeroIndex++;
        }
    }

   return nonZeroIndex;
    }
};