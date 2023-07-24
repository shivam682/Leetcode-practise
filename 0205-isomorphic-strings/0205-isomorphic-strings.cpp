class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>mps, mpt;
        int n= s.size();
        for(int i=0;i<n;i++){
            if(mps[s[i]]&&mps[s[i]]!=t[i])return false;
            if(mpt[t[i]]&&mpt[t[i]]!=s[i])return false;
            mps[s[i]]=t[i];
            mpt[t[i]]=s[i];
        }
        return true;
            
        
    }
};