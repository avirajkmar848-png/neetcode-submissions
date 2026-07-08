class Solution {
public:
void helper(vector<int>&nums,vector<vector<int>>&ans,vector<int>&arr,vector<bool>&check){
    if(arr.size()==nums.size()){
        ans.push_back(arr);
      return;
    }
    for(int i=0;i<nums.size();i++){
      if(check[i])continue;
      check[i]=true;
      arr.push_back(nums[i]);
    helper(nums,ans,arr,check);
    arr.pop_back();
     check[i]=false;
    }
    
}
    vector<vector<int>> permute(vector<int>& nums) {
       vector<vector<int>>ans;
       vector<int>arr;
       vector<bool>check(nums.size(),false);
       helper(nums,ans,arr,check) ;
       return ans;
    }
};
