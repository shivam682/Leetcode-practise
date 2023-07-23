class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1){
            return s;
        }
        string ans ="";
        int k = 2*numRows-2;
        int x=k-2;
        int y=2;
        int t=0;
        for(int i=0;i<numRows;i++){
            if(i==0||i==numRows-1){
                for(int j =i;j<s.size();j+=k){
                    ans+=s[j];
                }
            }else{
                // cout<<"x"<<x<<endl;
                // cout<<"y"<<y<<endl;
                int j=i;
                while(j<s.size()){
                    if(t==0){
                        ans+=s[j];
                        j+=x;
                        t=1;
                    }else{
                        ans+=s[j];
                        j+=y;
                        t=0;
                    }
                }
                y+=2;
                x-=2;
                t=0;

            }
        }
        return ans; 
    }
};