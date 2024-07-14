class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> numSet(nums.begin(), nums.end());

        ListNode* newNode = new ListNode(0);
        newNode->next = head;

        ListNode* current = newNode;

        while (current->next != nullptr) {
            if (numSet.find(current->next->val) != numSet.end()) {
                // Remove the node
                ListNode* temp = current->next;
                current->next = current->next->next;
                delete temp; 
            } else {
                current = current->next;
            }
        }

        ListNode* newHead = newNode->next;
        delete newNode;

        return newHead;
    }
};
