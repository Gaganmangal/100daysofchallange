#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int val) : val(val), next(nullptr) {}
};

// Function to reverse a linked list
ListNode *reverseList(ListNode *head)
{
    ListNode *prev = nullptr;
    ListNode *curr = head;

    while (curr != nullptr)
    {
        ListNode *nextTemp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextTemp;
    }

    return prev;
}

// Function to check if a linked list is a palindrome
bool isPalindrome(ListNode *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        return true;
    }

    // Find the middle of the linked list using the slow and fast pointer technique
    ListNode *slow = head;
    ListNode *fast = head;
    while (fast->next != nullptr && fast->next->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Reverse the second half of the linked list
    ListNode *secondHalf = reverseList(slow->next);
    ListNode *firstHalf = head;

    // Compare the first half and the reversed second half for palindrome check
    while (secondHalf != nullptr)
    {
        if (firstHalf->val != secondHalf->val)
        {
            return false;
        }
        firstHalf = firstHalf->next;
        secondHalf = secondHalf->next;
    }

    return true;
}
