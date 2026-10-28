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
    bool hasCycle(ListNode* head) {
        unordered_map<ListNode*, bool> mp;
        ListNode* curr = head;
        while (curr != nullptr) {
            if (mp[curr]) {
                return true;
            }
            mp[curr] = true;
            curr = curr->next;
        }
        return false;
    }
};
