class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=nums[0];
        int sum=nums[0];
        for(int r=1;r<nums.size();r++){
            
           if(sum<0){
                sum=0;
            }
            sum+=nums[r];
            ans=max(sum,ans);
        }
        return ans;
    }
};
