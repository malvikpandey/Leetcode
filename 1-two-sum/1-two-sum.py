class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        indices =[]
        for i in range(len(nums)):
            for y in range(1,len(nums)):
                if(i != y): 
                    if(nums[i]+nums[y] == target):
                        indices.append(i)
                        indices.append(y)
                        return indices
                    