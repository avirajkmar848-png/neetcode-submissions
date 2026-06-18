class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n=position.size();
        vector<pair<int,double>>mp;
        for(int i=0;i<n;i++){
            double x=(double)(target-position[i])/speed[i];
           mp.push_back({position[i],x});
        }
        sort(mp.begin(),mp.end(),greater<>());
        int fleet=0;
        double maxtime=0;
        for(auto y:mp){
            if(y.second>maxtime){
                maxtime=y.second;
                fleet++;            }
        }
        return fleet;
    }
};
