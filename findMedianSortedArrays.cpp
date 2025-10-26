class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        int o=m+n;
        vector<int > nums3;
        int i=0;
        int j=0;
        while(i<m && j<n){
            if(nums1[i]<nums2[j]){
                nums3.push_back(nums1[i]);
                i++;
            }
            else{
                nums3.push_back(nums2[j]);
                j++;
            }
        }
        while(i<m){
            nums3.push_back(nums1[i]);
            i++;
        }
        while(j<n){
            nums3.push_back(nums2[j]);
            j++;
        }
        if(o%2!=0){
            int ans=o/2;
            double number=nums3[ans];
            return number;
        }
        else{
            int ans1=o/2;
            int ans2=ans1-1;
            double number=(nums3[ans1]+nums3[ans2])/2.0;
            return number;
        }
    }
};
