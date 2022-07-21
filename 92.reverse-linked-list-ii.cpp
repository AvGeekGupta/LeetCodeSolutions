/*
 * @lc app=leetcode id=92 lang=cpp
 *
 * [92] Reverse Linked List II
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        int j=0;
        int* arr = new int[right-left+1];
        ListNode* node = head;
        for (int i = 1; i <= right; i++) {
            if(i >=left){
                arr[j] = node->val;
                j++;
            }
            node = node->next;
        }
        node = head;
        for (int i = 1; i <= right; i++) {
            if(i >= left){
                j--;
                node->val = arr[j];
            }
            node = node->next;
        }
        return(head);
    }
};
// @lc code=end

