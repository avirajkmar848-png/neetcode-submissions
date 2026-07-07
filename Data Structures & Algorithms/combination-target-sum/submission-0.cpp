class Solution {
public:
void helper(int i,vector<int>&nums,int sum,int &target,vector<vector<int>>&ans,vector<int>&arr){
    if(sum==target){
        ans.push_back(arr);
        return;
    }
    if(sum>target||i==nums.size())return ;
    
    arr.push_back(nums[i]);
    helper(i,nums,sum+nums[i],target,ans,arr);
    arr.pop_back();
     helper(i+1,nums,sum,target,ans,arr);
}
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        vector<int>arr;
        int sum=0;
        helper(0,nums,sum,target,ans,arr);
        return ans;
    }
};
