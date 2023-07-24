class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        map<char, int> mp;
        for(int i=0;i<magazine.size();i++){
            mp[magazine[i]]++;
        }
        for(int i=0;i<ransomNote.size();i++){
            if(mp.find(ransomNote[i])==mp.end()){
                return false;
            }else{
                mp[ransomNote[i]]--;
                if(mp[ransomNote[i]]==0){
                    mp.erase(mp.find(ransomNote[i]));
                }
            }
        }
        return true;
    }
};