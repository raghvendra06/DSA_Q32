class Solution {
public:
    int minMoves(vector<int>& nums) {
        int sum = 0;
        int mn = INT_MAX;

        for (int num : nums) {
            sum += num;
            mn = min(mn, num);
        }

        return sum - nums.size() * mn;
    }
};