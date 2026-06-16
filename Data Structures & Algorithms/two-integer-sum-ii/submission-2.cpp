class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans(2,0);
        int l=0;
        int r=nums.size()-1;
        while(r<nums.size()){
            if(nums[l]+nums[r]==target){
                ans[0]=l+1;
                ans[1]=r+1;
                break;
            }
            else if(nums[l]+nums[r]>target)r--;
            else l++;
        }
        return ans;
    }
};
