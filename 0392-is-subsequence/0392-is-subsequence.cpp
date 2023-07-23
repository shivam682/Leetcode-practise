class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0;
        int j=0;
        if(t.size()<s.size()){
            return false;
        }

        while(i<s.size()){
            char c= s[i];
            if(j>=t.size()){
                return false;
            }
            while(j<t.size()){
                if(t[j]==c){
                    j++;
                    break;
                }else{
                    j++;
                    if(j>=t.size()){
                        return false;
                    }
                }
            }
            i++;
        }
        return true;
    }
};