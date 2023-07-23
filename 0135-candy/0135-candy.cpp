class Solution {
public:
    int candy(vector<int>& ratings) {
        // int n=ratings.size();
        // if(n==1)return 1;
        // vector<int> ans(n,0);
        // for(int i=1;i<n-1;i++){
        //     if(ratings[i-1]>=ratings[i]&&ratings[i+1]>=ratings[i]){
        //         ans[i]=1;
        //     }
        // }
        // if(ratings[0]<=ratings[1]){
        //     ans[0]=1;
        // }
        // if(ratings[n-2]>=ratings[n-1]){
        //     ans[n-1]=1;
        // }
        // for(int i=1;i<n;i++){
        //     if(ratings[i]>ratings[i-1]&&ans[i]==0){
        //         ans[i]=ans[i-1]+1;
        //     }
        // }
        // for(int i=n-2;i>=0;i--){
        //     if(ratings[i]>ratings[i+1]&&ans[i]==0){
        //         ans[i]=ans[i+1]+1;
        //     }
        // }
        // for(int i=0;i<n-1;i++){
        //     if(ratings[i]>ratings[i+1]&&ans[i]<ans[i+1]){
        //         ans[i]=ans[i+1]+1;
        //     }else if( ratings[i]>ratings[i+1]&&ans[i]==ans[i+1]){
        //         ans[i]+=1;
        //     }
        // }
        // int sol=0;
        // for(int i=0;i<n;i++){
        //     cout<< ans[i]<<" ";
        //     sol+=ans[i];
        // }
        // cout<<endl;
        // return sol;
        int n = ratings.size();
        int candy = n, i=1;
        while(i<n){
            if(ratings[i] == ratings[i-1]){
                i++;
                continue;
            }
            
            //For increasing slope
            int peak = 0;
            while(ratings[i] > ratings [i-1]){
                peak++;
                candy += peak;
                i++;
                if(i == n) return candy;
            }
            
            //For decreasing slope
            int valley = 0;
            while(i<n && ratings[i] < ratings[i-1]){
                valley++;
                candy += valley;
                i++;
            }
            // here we have two values for peak one with increasing slope and one with decreasing slope 
            candy -= min(peak, valley); //Keep only the higher peak
        }
        return candy;
    }
};