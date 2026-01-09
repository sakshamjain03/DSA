class Solution:
    def numTrees(self, n: int) -> int:
        """
        Calculate the number of structurally unique BST's with n nodes.
        
        Args:
        n (int): The number of nodes in the BST.
        
        Returns:
        int: The number of unique BST's.
        """
        # Initialize dp array with n+1 elements, all set to 0
        dp = [0] * (n + 1)
        
        # Base cases: 0 nodes and 1 node
        dp[0] = 1
        dp[1] = 1
        
        # Calculate dp[i] for i from 2 to n
        for i in range(2, n + 1):
            # For each i, consider each node as the root
            for j in range(i):
                # The number of unique BST's is the product of the number of unique left and right subtrees
                dp[i] += dp[j] * dp[i - j - 1]
        
        return dp[n]