class KthLargest {
public:
priority_queue<int,vector<int>,greater<int>>pq;
int y;
    KthLargest(int k, vector<int>& nums) {
        this->y=k;
       for( auto x:nums){
        pq.push(x);
       if(pq.size()>k)pq.pop();
        }
    }
    
    int add(int val) {
        pq.push(val);
       if(pq.size()>y){
            pq.pop();
        }
        return pq.top();
    }
};
