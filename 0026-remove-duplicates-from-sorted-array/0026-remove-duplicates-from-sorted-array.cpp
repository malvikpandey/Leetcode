class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() <= 1){
            return nums.size();
        }

        int count = 0;

        for(int j = 1; j < nums.size(); j++){
            if(nums[j] != nums[count]){
                count++;
                nums[count] = nums[j];
            }
        }

        return count + 1;
    }
};