// Using Hashmaps with TC O(n) SC(N)
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> Count;
        for (auto& it : arr) {
            Count[it]++;
        }
        set<int> S;
        for (auto item : Count) {
            S.insert(item.second);
        }
        return S.size()==Count.size();
    }
};