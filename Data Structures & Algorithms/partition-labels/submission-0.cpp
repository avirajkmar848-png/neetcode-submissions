class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int>mp;
        int n=s.size();
        for(int i=0;i<n;i++){
            mp[s[i]]=i;
        }
        vector<int>ans;
        int size=0;
        int end=0;
        for(int i=0;i<n;i++){
            size++;
            end=max(end,mp[s[i]]);
            if(i==end){
                ans.push_back(size);
                size=0;
            }
        }
        return ans;
    }
};
