// Problem Link: https://leetcode.com/problems/remove-duplicates-from-sorted-list/
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
  ListNode *deleteDuplicates(ListNode *head)
  {
    if (head == nullptr)
    {
      return head;
    }
    ListNode *tmp = head;
    while (tmp->next != nullptr)
    {
      if (tmp->val == tmp->next->val)
      {
        tmp->next = tmp->next->next;
      }
      else
      {
        tmp = tmp->next;
      }
    }
    return head;
  }
};