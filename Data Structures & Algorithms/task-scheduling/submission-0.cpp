class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
       unordered_map<char,int>mp;
       for(auto x:tasks){
        mp[x]++;
       } 
       priority_queue<int>pq;
       for(auto x:mp){
        pq.push(x.second);
       }
       int ans=0;
       while(!pq.empty()){
        vector<int>arr;
        int i=0;
        while(i<=n&&!pq.empty()){
            ans++;
            int count=pq.top();
            pq.pop();
            count--;
            if(count>0)arr.push_back(count);
            i++;
        }
        for(int j=0;j<arr.size();j++){
            pq.push(arr[j]);
        }
        if(pq.empty())break;
        ans+=(n+1)-i;
       }
       return ans;
    }
};
