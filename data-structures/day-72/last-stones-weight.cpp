class Solution
{
public:
  int lastStoneWeight(vector<int> &stones)
  {
    // O(NLogN)
    priority_queue<int> pq;
    for (auto stone : stones)
    {
      pq.push(stone);
    }
    while (!pq.empty())
    {
      int first = pq.top();
      pq.pop();
      if (pq.empty())
        return first;
      int sec = pq.top();
      pq.pop();
      if (first != sec)
        pq.push(first - sec);
    }
    return 0;
  }
};