class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int ans=nums[0];
        int curMin=1;
        int curMax=1;
        for(int i=0;i<n;i++){
            int temp=nums[i]*curMax;
             curMax=max(nums[i],max(nums[i]*curMin,nums[i]*curMax));
            curMin=min(nums[i],min(nums[i]*curMin,temp));
           
          
            ans=max(ans,curMax);
        }
        return ans;
    }
};
