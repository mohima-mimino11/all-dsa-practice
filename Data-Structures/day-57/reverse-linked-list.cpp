// Problem Link: https://leetcode.com/problems/reverse-linked-list/description/

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
  void reverse(ListNode *&head, ListNode *tmp)
  {

    if (tmp->next == nullptr)
    {
      head = tmp;
      return;
    }
    reverse(head, tmp->next);
    tmp->next->next = tmp;
    tmp->next = nullptr;
  }
  ListNode *reverseList(ListNode *head)
  {
    if (head == nullptr)
    {
      return head;
    }
    reverse(head, head);
    return head;
  }
};