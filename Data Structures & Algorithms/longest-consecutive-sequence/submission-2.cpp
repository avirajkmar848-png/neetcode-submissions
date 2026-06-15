class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n= nums.size();
        if(n==0)return 0;
        sort(nums.begin(),nums.end());
        int ans=1,count=1,i=0;
        while(i<n-1){
            if(nums[i]==nums[i+1]){
                i++;
                continue;
            }
            else if(nums[i]==nums[i+1]-1){
                count++;
    
            }
            
            else count=1;
            
            ans=max(ans,count);
            i++;
        }
        return ans;
    }
};
