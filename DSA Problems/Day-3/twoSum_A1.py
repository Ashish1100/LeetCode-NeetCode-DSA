class Solution:
    def twoSum(self, nums, target):
        # Iterates over the elements of the nums list.
        for a in range(len(nums)):
            # Iterating through the members of the nums list beginning at position a+1.
            for b in range(a + 1, len(nums)):
                # Checks if the sum of the items in the nums list at indices a and b equals the desired value and returns a list containing the indices a and b.
                if nums[a] + nums[b] == target:
                    return [a, b]
        
        # An empty list is returned if no pair of integers in the "nums" list adds up to the target.
        return []

# TC: n^2
