struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy(0);
        ListNode*tail = &dummy;
        int count=0;
        while (l1 !=NULL ||l2 !=NULL || count!=0)
        {
         int sum=0;
            int x=(l1!=NULL)?l1->val:0;int y=(l2!=NULL)?l2->val:0;
            sum=(x+y+count)%10;
            count=(x+y+count)/10;
            tail->next=new ListNode(sum);
            tail=tail->next;
            if(l1!=NULL)l1=l1->next;if(l2!=NULL)l2=l2->next;
        }
        return dummy.next;
    }
};
