struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* tempt;
        tempt = head;
        int len = 0;
        while(tempt != nullptr){
            len++;
            tempt = tempt->next;
        }
        tempt = head;
        for(int i=1;i<=len/2;i++){
            tempt = tempt->next;
        }
        return tempt;
        
    }
};