class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxpro = nums[0];
        int minpro = nums[0];
        int ans = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            int curr = nums[i];

            int tempmax = max({curr, curr * maxpro, curr * minpro});
            int tempmin = min({curr, curr * maxpro, curr * minpro});

            maxpro = tempmax;
            minpro = tempmin;

            ans = max(ans, maxpro);
        }

        return ans;
    }
};