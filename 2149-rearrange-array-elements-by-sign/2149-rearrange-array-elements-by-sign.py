class Solution:
    def rearrangeArray(self, nums: List[int]) -> List[int]:
        positives = [num for num in nums if num > 0]
        negatives = [num for num in nums if num < 0]
        
        # Initialize the result array
        rearranged = []
        
        # Merge the positive and negative arrays, starting with a positive number
        for pos, neg in zip(positives, negatives):
            rearranged.append(pos)
            rearranged.append(neg)
        
        return rearranged