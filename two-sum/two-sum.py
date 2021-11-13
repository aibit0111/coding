class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hash1 = {}
        for i in range(len(nums)):
            complement = target - nums[i]
            print(complement,i)
            if complement in hash1:
                return [hash1[complement] , i]
            hash1[nums[i]] = i
        return []
                