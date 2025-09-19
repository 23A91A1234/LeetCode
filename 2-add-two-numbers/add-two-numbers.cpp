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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* res=NULL;
        ListNode* tail=NULL;
        int b=0;
        while(l1!=NULL&&l2!=NULL)
        {
            b+=l1->val+l2->val;
            ListNode* newnode=new ListNode(b%10);
            b=b/10;
            if(res==NULL)
            {
                res=newnode;
                tail=newnode;
            }
            else
            {
                tail->next=newnode;
                tail=newnode;
            }
            l1=l1->next;
            l2=l2->next;
        }
        while(l1!=NULL)
        {
            b+=l1->val;
            ListNode* newnode=new ListNode(b%10);
            b=b/10;
            tail->next=newnode;
            tail=newnode;
            l1=l1->next;
        }
         while(l2!=NULL)
        {
            b+=l2->val;
            ListNode* newnode=new ListNode(b%10);
            b=b/10;
            tail->next=newnode;
            tail=newnode;
            l2=l2->next;
        }
        if(b!=0)
        {
            ListNode* newnode=new ListNode(b);
            tail->next=newnode;
            tail=newnode;
        }
        // while(res!=NULL)
        // {
        //     cout<<res->val<<" ";
        //     res=res->next;
        // }
        return res;
    }
};