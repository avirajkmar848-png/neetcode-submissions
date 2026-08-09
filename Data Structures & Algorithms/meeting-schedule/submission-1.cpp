/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    bool canAttendMeetings(vector<Interval>& intervals) {
        if (intervals.empty()) { return true; }
         sort(intervals.begin(), intervals.end(), [](auto& x, auto& y) { return x.start < y.start; });
        vector<int>arr(2);
        arr[0]=intervals[0].start;
        arr[1]=intervals[0].end;
        for(int i=1;i<intervals.size();i++){
            if(arr[1]>intervals[i].start){
                return false;
            }
            else{
                 arr[0]=intervals[i].start;
          arr[1]=intervals[i].end;
            }
        }
        return true;
    }
};
