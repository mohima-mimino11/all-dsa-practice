/*
There are n rooms labeled from 0 to n - 1 and all the rooms are locked except for room 0. Your goal is to visit all the rooms. However, you cannot enter a locked room without having its key.

When you visit a room, you may find a set of distinct keys in it. Each key has a number on it, denoting which room it unlocks, and you can take all of them with you to unlock the other rooms.

Given an array rooms where rooms[i] is the set of keys that you can obtain if you visited room i, return true if you can visit all the rooms, or false otherwise.
*/
class Solution
{
public:
  bool vis[1005];
  void bfs(int src, vector<vector<int>> &rooms)
  {
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while (!q.empty())
    {
      int par = q.front();
      q.pop();
      for (int child : rooms[par])
      {
        if (!vis[child])
        {
          q.push(child);
          vis[child] = true;
        }
      }
    }
  }
  bool canVisitAllRooms(vector<vector<int>> &rooms)
  {
    memset(vis, false, sizeof(vis));
    bfs(0, rooms);
    for (int i = 0; i < rooms.size(); i++)
    {
      if (!vis[i])
        return false;
    }
    return true;
  }
};