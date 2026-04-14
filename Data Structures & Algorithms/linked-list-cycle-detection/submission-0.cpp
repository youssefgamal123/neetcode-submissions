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


        unordered_set<ListNode*> vis;
        ListNode* current = head;


        while (current){

            if (vis.count(current)){
                return true;
            }


            vis.insert(current);
            current = current->next;


        }

        return false;


    }
};
