// Problem Link: https://leetcode.com/problems/middle-of-the-linked-list/description/

// Definition for singly-linked list.
struct ListNode
{
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
  int listSize(ListNode *head)
  {
    ListNode *tmp = head;
    int count = 0;
    while (tmp != nullptr)
    {
      count++;
      tmp = tmp->next;
    }
    return count;
  }
  ListNode *middleNode(ListNode *head)
  {
    int sz = listSize(head);
    ListNode *tmp = head;
    for (int i = 0; i < sz / 2; i++)
    {
      tmp = tmp->next;
    }
    return tmp;
  }
};