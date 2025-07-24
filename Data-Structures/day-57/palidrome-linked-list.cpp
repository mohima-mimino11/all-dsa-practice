// Problem Link: https://leetcode.com/problems/palindrome-linked-list/

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
  void insertAtTail(ListNode *&head, ListNode *&tail, int val)
  {

    ListNode *newNode = new ListNode(val);
    if (head == nullptr)
    {
      head = newNode;
      tail = newNode;
      return;
    }
    tail->next = newNode;
    tail = newNode;
  }
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
  bool isPalindrome(ListNode *head)
  {
    ListNode *newHead = nullptr;
    ListNode *newTail = nullptr;

    ListNode *tmp = head;
    while (tmp != nullptr)
    {
      insertAtTail(newHead, newTail, tmp->val);
      tmp = tmp->next;
    }

    tmp = head;
    reverse(newHead, newHead);
    ListNode *tmp2 = newHead;
    while (tmp != nullptr)
    {
      if (tmp->val != tmp2->val)
      {
        return false;
      }
      tmp = tmp->next;
      tmp2 = tmp2->next;
    }
    return true;
  }
};