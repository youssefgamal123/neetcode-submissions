class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {

        vector<int> nodes;

        ListNode* curr = head;

        while (curr) {
            nodes.push_back(curr->val);
            curr = curr->next;
        }

      
        for (int start = 0; start + k <= nodes.size(); start += k) {
            int left = start;
            int right = start + k - 1;

            while (left < right) {
                swap(nodes[left], nodes[right]);
                left++;
                right--;
            }
        }




        ListNode* dummy = new ListNode(0);
        ListNode* newList = dummy;

        for (int node : nodes) {
            newList->next = new ListNode(node);
            newList = newList->next;
        }

        return dummy->next;

        
    }
};