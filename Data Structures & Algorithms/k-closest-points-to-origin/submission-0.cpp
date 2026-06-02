class Solution {
public:
    long long dist(vector<int>& p) {
        long long x = p[0];
        long long y = p[1];

        return x*x + y*y;
    }

    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {

        vector<pair<long long, vector<int>>> arr;

        for (auto &p : points) {
            arr.push_back({dist(p), p});
        }

        sort(arr.begin(), arr.end());

        vector<vector<int>> ans;

        for (int i = 0; i < k; i++) {
            ans.push_back(arr[i].second);
        }

        return ans;
    }
};