class Solution {
public:
void helper(int i,vector<int>&nums,vector<vector<int>>&ans,vector<int>&arr){
  if(i==nums.size()){
    ans.push_back(arr);
    return;
  }
  arr.push_back(nums[i]);
  helper(i+1,nums,ans,arr);
  arr.pop_back();
  while(i+1<nums.size()&&nums[i]==nums[i+1])i++;
   helper(i+1,nums,ans,arr);
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
      sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        vector<int>arr;
        helper(0,nums,ans,arr);
        return ans;
    }
};
