class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int n=points.size();
        priority_queue<pair<double,int>,vector<pair<double,int>>,greater<pair<double,int>>>pq;
        for(int i=0;i<n;i++){
            double dist=sqrt((points[i][0]*points[i][0])+(points[i][1]*points[i][1]));
            pq.push({dist,i});
        }
         vector<vector<int>>ans;
         while(k){
            vector<int>arr(2);
            int i=pq.top().second;
            pq.pop();
            arr[0]=points[i][0];
            arr[1]=points[i][1];
            ans.push_back(arr);
            k--;
         }
         return ans;
    }
};
