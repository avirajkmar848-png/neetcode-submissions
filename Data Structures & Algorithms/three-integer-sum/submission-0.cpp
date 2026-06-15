class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n= nums.size();
        sort(nums.begin(),nums.end());
        set<vector<int>>s;
        for(int i=0;i<n;i++){
            int lo=i+1;
            int hi=n-1;
            while(hi>lo){
                if(nums[i]+nums[lo]+nums[hi]==0){
                    s.insert({nums[lo],nums[i],nums[hi]});
                    lo++;
                    hi--;
                }
                else if(nums[i]+nums[lo]+nums[hi]>0){
                    hi--;
                }
                else lo++;
            }
        }
        return vector<vector<int>>(s.begin(),s.end());
    }
};
