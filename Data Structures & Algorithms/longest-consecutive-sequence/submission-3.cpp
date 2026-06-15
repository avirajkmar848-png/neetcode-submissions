class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n= nums.size();
       unordered_set<int>s(nums.begin(),nums.end());
       int ans=0;
       for(auto x:nums){
        if(s.find(x)!=s.end()){
            int i=1;
            while(s.find(x+i)!=s.end()){
                i++;
            }
            ans=max(ans,i);
        }
       }
       return ans;
    }
};
