class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int>arr;
        int i=0;
        int j=0;
         double ans;
        while(j<n&&i<m){
           
            if(nums1[j]>nums2[i]){
                arr.push_back(nums2[i]);
                i++;
                
                }
            else{
                arr.push_back(nums1[j]);
                j++;
               
            }    
        }
        while(i<m){
            arr.push_back(nums2[i]);
            i++;  
        }
         while(j<n){
            arr.push_back(nums1[j]);
            j++;  
        }
       
        if((n+m)%2!=0){
            int x=(n+m)/2;
           ans=arr[x];
        }
        else{
            int x=(n+m)/2;
            ans=(arr[x]+arr[x-1])/2.0;
        }
        return ans;
    }
};
