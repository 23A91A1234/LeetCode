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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* res=NULL;
        ListNode* tail=NULL;
        if(head==NULL)
        {
            return head;
        }
        ListNode* newnode=new ListNode(head->val);
        res=newnode;
        tail=newnode;
        head=head->next;
        while(head!=NULL)
        {
            ListNode* newnode=new ListNode(head->val);
            if(head->val!=tail->val)
            {
                tail->next=newnode;
                tail=newnode;
            }
            head=head->next;
        }
        return res;
    }
};