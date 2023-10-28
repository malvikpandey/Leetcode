class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> mSort;

        int i=0;
        int j=0;
        int k=0;

        while(i<=m-1 && j<=n-1){
            if(nums1[i]<nums2[j]){
                mSort.push_back(nums1[i]);
                i++;
                k++;
            }else{
                mSort.push_back(nums2[j]);
                j++;
                k++;
            }
        }

        while(i<=m-1){
            mSort.push_back(nums1[i]);
            k++;
            i++;
        }

        while(j<=n-1){
            mSort.push_back(nums2[j]);
            k++;
            j++;
        }

        for(int i=0; i<k; i++){
            nums1[i] = mSort[i];
        }
    }
};