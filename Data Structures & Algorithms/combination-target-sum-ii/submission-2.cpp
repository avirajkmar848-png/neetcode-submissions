class Solution {
public:
void helper(int i,vector<int>&nums,int sum,int &target, vector<vector<int>>&ans,vector<int>&arr){
    if(sum==target){
        ans.push_back(arr);
        return ;
    }
    if(i==nums.size()||sum>target)return;
    arr.push_back(nums[i]);
    helper(i+1,nums,sum+nums[i],target,ans,arr);
    arr.pop_back();
    while(i+1<nums.size()&&nums[i]==nums[i+1])i++;
    helper(i+1,nums,sum,target,ans,arr);
}
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        vector<int>arr;
        sort(nums.begin(),nums.end());
        helper(0,nums,0,target,ans,arr);
        return ans;
    }
};
