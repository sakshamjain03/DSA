#include <iostream>
#include <vector>

using namespace std;

int maxProfit(vector<int>& prices, int K) {
    int n = prices.size();
    if (n == 0) return 0;

    vector<int> dp(n + 1, 0);

    for (int i = 1; i <= n; ++i) {
        int maxProfit = -1;
        for (int j = max(0, i - K); j < i; ++j) {
            maxProfit = max(maxProfit, dp[j] - prices[j]);
        }
        dp[i] = max(dp[i - 1], prices[i - 1] + maxProfit);
    }

    return dp[n];
}

int main() {
    // Example usage
    vector<int> prices = {3, 2, 6, 5, 0, 3};
    int K = 2;
    cout << "Maximum profit: " << maxProfit(prices, K) << endl;

    return 0;
}
