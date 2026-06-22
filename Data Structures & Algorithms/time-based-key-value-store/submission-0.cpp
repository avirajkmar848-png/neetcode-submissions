class TimeMap {
public:
unordered_map<string,unordered_map<int,vector<string>>>mp;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        mp[key][timestamp].push_back(value);
    }
    
    string get(string key, int timestamp) {
        if(mp.find(key)==mp.end())return "";
        int seen=0;
        for(auto x:mp[key]){
            if(x.first<=timestamp)seen=max(seen,x.first);
        }
        return seen==0? "":mp[key][seen].back();
    }
};
