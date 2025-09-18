class Solution
{
public:
  bool isAnagram(string s, string t)
  {
    map<char, int> smp;
    map<char, int> tmp;
    for (char c : s)
      smp[c]++;
    for (char c : t)
      tmp[c]++;

    return smp == tmp;
  }
};