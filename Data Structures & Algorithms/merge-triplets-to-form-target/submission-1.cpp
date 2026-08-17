class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        int n=triplets.size();
        vector<int>arr(3,0);
        for(int i=0;i<n;i++){
            if(triplets[i][0]>target[0]||triplets[i][1]>target[1]||triplets[i][2]>target[2])
    continue;
            arr[0]=max(arr[0],triplets[i][0]);
             arr[1]=max(arr[1],triplets[i][1]);
              arr[2]=max(arr[2],triplets[i][2]);
              if(arr==target)return true;
        }
        return false;
    }
};
