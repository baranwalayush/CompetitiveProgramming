class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        vector<double> averages;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size() / 2; i++) {
            double sum = (double)nums[i] + (double)nums[nums.size() - i - 1];
            averages.push_back(sum / 2);
        }
        sort(averages.begin(), averages.end());
        return *min_element(averages.begin(), averages.end());
    }
};