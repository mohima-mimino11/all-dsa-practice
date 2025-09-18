class Solution
{
public:
  bool containsDuplicate(vector<int> &nums)
  {
    set<int> st;
    bool flag = false;
    for (int i = 0; i < nums.size(); i++)
    {
      st.insert(nums[i]);
    }
    return st.size() != nums.size();
  }
};