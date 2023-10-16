class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> duplicate;
        int n = nums.size();
        sort(nums.begin(), nums.end());

        int i=0;

        while(i<n){
            if(i == n-1){
                break;
            }else if(nums[i] == nums[i+1]){
                duplicate.push_back(nums[i]);
                i+=2;
            }else{
                i++;
            }
        }
        
        return duplicate;
    }
};