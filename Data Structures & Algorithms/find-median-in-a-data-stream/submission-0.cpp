class MedianFinder {
public:
vector<int>arr;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
       arr.push_back(num); 
    }
    
    double findMedian() {
        sort(arr.begin(),arr.end());
        int n= arr.size();
        if(n%2!=0){
            return double(arr[n/2]);
        }
        else{
            return double((arr[n/2]+arr[(n-1)/2])/2.0);
        }
        return 0.0;
    }
};
