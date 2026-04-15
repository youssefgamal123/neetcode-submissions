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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        int length_of_list = 0;


        ListNode* curr = head;

        while(curr){
            length_of_list++;
            curr= curr->next;
        }


        int index_of_element_to_remove = length_of_list - n;

     if (index_of_element_to_remove == 0) {
            return head->next;
        }


        int currIndex = 0;

        curr = head;
        ListNode* prev = nullptr;

        while(curr){

            if (currIndex  == index_of_element_to_remove ){
            prev->next = curr->next;
                break;        
            }
            prev = curr;
            curr = curr->next;
            currIndex++;
        }


        return head;


        
    }
};
