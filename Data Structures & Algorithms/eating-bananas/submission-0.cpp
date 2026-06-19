class Solution {
public:
long long helper(int mid,vector<int>&piles){
   long long count=0;
   for(int i=0;i<piles.size();i++){
    if(piles[i]<mid)count++;
    else{ 
        if(piles[i]%mid==0)count+=piles[i]/mid;
        else count+=(piles[i]/mid)+1;
    }
   }
   return count;

}
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int l=1;
        int r=1;
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            r=max(piles[i],r);
        }
        while(r>=l){
            int mid=l+(r-l)/2;
            long long totalhours=helper(mid,piles);
            if(totalhours<=h){
                ans=min(ans,mid);
                r=mid-1;
            }
            else l=mid+1;
        }
        return ans;
    }
};
