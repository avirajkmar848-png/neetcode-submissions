class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int ans=nums[0];
        int prefix=1;
        int suffix=1;
        for(int i=0;i<n;i++){
           if(suffix==0)suffix=1;
            if(prefix==0)prefix=1;
             suffix*=nums[n-i-1];
            prefix*=nums[i];
           
          
            ans=max(ans,max(suffix,prefix));
        }
        return ans;
    }
};
