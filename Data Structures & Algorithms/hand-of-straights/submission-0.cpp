class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        map<int,int>mp;
        for(int i=0;i<hand.size();i++){
            mp[hand[i]]++;
        }
        sort(hand.begin(),hand.end());
        int start=hand[0];
        int count=1;
        while(!mp.empty()){
            if(mp.find(start)==mp.end()){
                return false;
            }
            
                mp[start]--;
                if( mp[start]==0)mp.erase(start);
                while(count<groupSize){
            if(mp.find(start+1)==mp.end()){
                return false;
            }
            else{
                 start++;
                mp[start]--;
                if( mp[start]==0)mp.erase(start);
               
                count++;
            }}
           count=1;
           if(!mp.empty()) start=mp.begin()->first;
        }
        return true;
    }
};
