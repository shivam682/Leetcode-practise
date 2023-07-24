class Solution {
public:
    bool wordPattern(string pattern, string s) {
        istringstream newS (s);
        vector<string> words;
        unordered_map<char, string> pS;
        unordered_map<string, char> sP;
        

        while (newS >> s) {
            words.push_back(s);
        }

        if (pattern.size() != words.size()) {
            return false;
        }

        int size = pattern.size();
        for (int i = 0; i < size; i++) {
            char c1 = pattern[i];
            string c2 = words[i];

            if ((pS.find(c1) != pS.end() && pS[c1] != c2) ||
                (sP.find(c2) != sP.end() && sP[c2] != c1)) {
                return false;
            }

            pS[c1] = c2;
            sP[c2] = c1;
        }
        return true;
        
    }
};