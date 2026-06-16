class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int l=0;
        int r=n-1;
        int lmax=0;
        int rmax=0;
        int ans=0;

        while(r>=l){
            
            if(rmax>lmax){
                lmax=max(lmax,height[l]);
                ans+=lmax-height[l];
                l++;
                
            }
             else{
                rmax=max(rmax,height[r]);
                ans+=rmax-height[r];
               r--;
              // ans=1;
            }
        }
        return ans;
    }
};
