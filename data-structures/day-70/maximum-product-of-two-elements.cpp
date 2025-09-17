class Solution
{
public:
  int maxProduct(vector<int> &nums)
  {
    // complexity - (nlogn)
    sort(nums.begin(), nums.end());
    int mx1 = nums[nums.size() - 2];
    int mx2 = nums[nums.size() - 1];
    return (mx1 - 1) * (mx2 - 1);
  }
};