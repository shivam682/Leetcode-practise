class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        reverse(s.begin(),s.end());
        int i=0;
        int j=0;
        string ans="";
        while(i<n&&j<n){
            if(s[i]!=' '){
                j++;
                if(j<n&&s[j]==' '){
                    reverse(s.begin()+i,s.begin()+j);
                    ans+=s.substr(i,j-i);
                    ans+=' ';
                    i=j;
                }
            }else{
                i++;
                j++;
            }
        }
        if(s[n-1]!=' '){
        reverse(s.begin()+i,s.end());
        ans+=s.substr(i,j-i);
        }
        if(ans[ans.size()-1]==' '){
            ans=ans.substr(0,ans.size()-1);
        }
        return ans;
    }
};