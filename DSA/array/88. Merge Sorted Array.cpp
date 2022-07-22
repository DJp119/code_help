class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1;
        int j = n-1;
        int k = m+n-1;
        while(i>=0 && j>=0){
            if(nums1[i]<nums2[j]){
                nums1[k]=nums2[j];
                j--;
                k--;
            }
            else{
                nums1[k--]=nums1[i--];
            }   
        }
        while(i>=0){
            nums1[k--]=nums1[i--];
        }
        while(j>=0){
            nums1[k--]=nums2[j--];
        }
        
        // // int l = m + n;
        // // vector<int>cum;
        // int i = 0 , j = 0 , k = 0 ;
        // while (i<m && j<n){
        //     if(nums1[i]<nums2[j]){
        //         nums1[k++]=nums1[i++];
        //         // i++;
        //     }
        //     else{
        //         nums1[k++]=nums2[j++];
        //     }
        // }
        // while(i<m){
        //     nums1[k++]=nums1[i++];
        // }
        // while(j<n){
        //     nums1[k++]=nums2[j++];
        // }
        // // for (int d=0; d<cum.size(); d++) 
        // // nums1.push_back(cum[d]); 
        
    }
};
