class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string> mpa;
        unordered_map<string,char> mpb;
        int n = s.size();
        int i=0;
        int j=0;
        int k=0;
        int nwords=0;
        while(j<n){
            if(s[j]==' '){
                string word= s.substr(i,j-i);
                if(mpa.find(pattern[k])!=mpa.end()){
                    if(mpa[pattern[k]]!=word)return false;
                }else{
                    mpa[pattern[k]]=word;
                }
                if(mpb.find(word)!=mpb.end()){
                    if(mpb[word]!=pattern[k])return false;
                }else{
                    mpb[word]=pattern[k];
                }
                i=j+1;
                j=j+1;
                k++;
                nwords++;
                
            }else{
                j++;
                if(j==n){
                    string word= s.substr(i,j-i);
                    if(mpa.find(pattern[k])!=mpa.end()){
                    if(mpa[pattern[k]]!=word)return false;
                }else{
                    mpa[pattern[k]]=word;
                }
                if(mpb.find(word)!=mpb.end()){
                    if(mpb[word]!=pattern[k])return false;
                }else{
                    mpb[word]=pattern[k];
                }
                    nwords++;
                }
            }
        }
        for(auto it : mpa){
            cout<<it.first<<" "<<it.second<<endl;
        }
        for(auto it : mpb){
            cout<<it.first<<" "<<it.second<<endl;
        }
        cout<<endl;
        if(nwords!=pattern.size())return false;
        return true;
        
    }
};