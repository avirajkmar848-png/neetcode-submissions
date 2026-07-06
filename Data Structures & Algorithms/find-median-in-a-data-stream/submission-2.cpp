class MedianFinder {
public:
priority_queue<int>maxm;
priority_queue<int,vector<int>,greater<>>minm;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
       
        if(!maxm.empty()&&num<maxm.top()){
            maxm.push(num);
        }
        else minm.push(num);
        if(minm.size()>maxm.size()+1){
              maxm.push(minm.top());
            minm.pop();
        }
        else if(maxm.size()>minm.size()+1){
              minm.push(maxm.top());
            maxm.pop();
        }
    }
    
    double findMedian() {
        if(minm.size()==maxm.size()){
            return (minm.top()+maxm.top())/2.0;
        }
        else if(minm.size()>maxm.size())return minm.top();
        else return maxm.top();
    }
};
