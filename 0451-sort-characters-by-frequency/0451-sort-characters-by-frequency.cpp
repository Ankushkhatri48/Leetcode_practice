
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;

        // Count frequency
        for (char c : s) {
            freq[c]++;
        }

        // Store {frequency, character}
        vector<pair<int, char>> v;

        for (auto p : freq) {
            v.push_back({p.second, p.first});
        }

        // Sort by frequency in descending order
        sort(v.rbegin(), v.rend());

        string ans;

        // Add characters according to frequency
        for (auto p : v) {
            ans.append(p.first, p.second);
        }

        return ans;
    }
};
