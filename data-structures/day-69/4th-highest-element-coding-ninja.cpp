#include <bits/stdc++.h>
using namespace std;
int getFourthLargest(int arr[], int n)
{
  // Write your code here.
  // If n < 4, fourth highest doesn't exist
  if (n < 4)
  {
    return -2147483648;
  }

  // Min-heap to store top 4 elements
  priority_queue<int, vector<int>, greater<int>> minHeap;

  // Iterate through the array
  for (int i = 0; i < n; i++)
  {
    if (minHeap.size() < 4)
    {
      // If heap has fewer than 4 elements, add current element
      minHeap.push(arr[i]);
    }
    else if (arr[i] > minHeap.top())
    {
      // If current element is larger than the smallest in heap, replace it
      minHeap.pop();
      minHeap.push(arr[i]);
    }
  }

  // Return the smallest element in the heap (fourth highest)
  return minHeap.top();
}