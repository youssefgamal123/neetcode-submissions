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
        
        if (left == right){
            return head;
        }


        vector<int>list;

        ListNode* curr = head;

        while(curr){
            list.push_back(curr->val);
            curr = curr->next;
        }

         reverse(list.begin() + left - 1, list.begin() + right);


        curr = head;
        int i = 0;
        while(curr){
            curr->val =list[i++];
            curr = curr->next ; 
        }

        return head;

    }
};