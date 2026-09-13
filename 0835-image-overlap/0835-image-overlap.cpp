class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1,
                       vector<vector<int>>& img2) {

        int n = img1.size();

        map<pair<int, int>, int> mp;

        vector<pair<int, int>> A;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (img1[i][j] == 1) {
                    A.push_back({i, j});
                }
            }
        }

        vector<pair<int, int>> B;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (img2[i][j] == 1) {
                    B.push_back({i, j});
                }
            }
        }

        int ans = 0;

        for (auto [r1, c1] : A) {
            for (auto [r2, c2] : B) {

                int dr = r2 - r1;
                int dc = c2 - c1;

                mp[{dr, dc}]++;

                ans = max(ans, mp[{dr, dc}]);
            }
        }

        return ans;
    }
};