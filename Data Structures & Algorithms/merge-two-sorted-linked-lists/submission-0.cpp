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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {


        if (!list1) {
            return list2;
        }
        if (!list2) {
            return list1;
        }


        ListNode dummy(0);
        ListNode* nodes = &dummy;
    

        while (list1 && list2 ){

         if (list1-> val < list2-> val) {
            nodes->next = list1;
            list1= list1->next;
         }   

        else {
            nodes->next = list2;
            list2= list2->next;
        }


        nodes = nodes->next;

        }

        if (list1) nodes->next = list1;
        else nodes->next = list2;

        
        
        return dummy.next;



        
    }
};
