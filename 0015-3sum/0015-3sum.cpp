class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());

        for(int i=0; i<nums.size(); i++){
            int right = nums.size()-1;
            int left = i+1;
            while(left < right){
                if(nums[i] + nums[left] + nums[right] == 0){
                    ans.push_back({nums[i], nums[left], nums[right]});
                    int tempIndex1 = left, tempIndex2 = right;
                    while(left < right && nums[left] == nums[tempIndex1]){
                        left++;
                    }
                    while(left < right && nums[right] == nums[tempIndex2]){
                        right--;
                    }
                }else if(nums[i] + nums[left] + nums[right] < 0){
                    left++;
                }else{
                    right--;
                }
            }
            while(i+1 < nums.size() && nums[i] == nums[i+1]){
                i++;
            }
        }

        return ans;
    }
};