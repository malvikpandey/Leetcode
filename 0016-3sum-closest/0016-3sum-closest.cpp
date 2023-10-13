class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        int nearT = 0;
        int diffT = INT_MAX;
        for(int i=0; i<nums.size(); i++){
            int left = i+1;
            int right = nums.size()-1;

            while(left < right){
                int sum = nums[i] + nums[left] + nums[right];

                if(sum == target){
                    return sum;
                }else if(abs(target-sum) < diffT){
                    diffT = abs(target - sum);
                    nearT = sum;
                }

                if(sum > target){
                    right--;
                }else{
                    left++;
                }
            }
        }

        return nearT;
    }
};