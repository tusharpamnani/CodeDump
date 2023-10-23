class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *p1 = head;
        ListNode *p2 = head;
        p1 = head;
        p2 = head;
        while (p2 && p2->next){
            p1 = p1->next;
            p2 = p2->next->next;    // this will go 2x faster than p1, so when p2 reached the end of the list, p1 will have reached till the middle ( or the second middle) of the list 
        }
        return p1;
    }
};
