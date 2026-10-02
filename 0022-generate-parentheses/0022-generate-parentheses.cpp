
class Solution {
public:
    vector<string> ans;

    void solve(int n, int o, int c, string s) {
        if (s.size() == 2 * n) {
            ans.push_back(s);
            return;
        }

        if (o < n)
            solve(n, o + 1, c, s + '(');

        if (c < o)
            solve(n, o, c + 1, s + ')');
    }

    vector<string> generateParenthesis(int n) {
        solve(n, 0, 0, "");
        return ans;
    }
};