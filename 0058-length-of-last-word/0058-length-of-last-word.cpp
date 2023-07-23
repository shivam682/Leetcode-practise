class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(),s.end());
        int i=0;
        int j=0;
        int n=s.size();
        int ans=0;
        while(i<n&&j<n){
            if(s[i]!=' '){
                j++;
                if(j>=n||(j<n&&s[j]==' ')){
                    ans+=(j-i);
                    return ans;
                }
            }else{
                i++;
                j++;
            }
        }
        return ans;
        
    }
};