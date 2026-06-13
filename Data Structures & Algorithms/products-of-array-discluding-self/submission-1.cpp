class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n= nums.size();
        int product=1;
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                count++;
                }
            else product*=nums[i];
        }
        for(int i=0;i<n;i++){
            if(count==1){
                if(nums[i]==0)nums[i]=product;
                else nums[i]=0;
            }
            else if(count>1)nums[i]=0;
            else nums[i]=product/nums[i];
        }
        return nums;
    }
};
