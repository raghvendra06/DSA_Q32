class Solution {
public:
    int minimumPushes(string word) {
        int sz = word.size();

        int n = sz/8;
        int rem = sz%8;

        return ((n*(n+1))/2)*8 + rem*(n+1);
    }
};