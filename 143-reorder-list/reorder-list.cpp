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
    void reorderList(ListNode* head) {
        ListNode* temp=head,*rev=NULL,*temp1=NULL,*tail=NULL;
        int c=0,h=0;
        if(head->next==NULL) return;
        while(temp!=NULL)
        {
            c++;
            ListNode* newnode=new ListNode(temp->val);
            if(temp1==NULL)
            {
                temp1=newnode;
                tail=newnode;
            }
            else
            {
                tail->next=newnode;
                tail=newnode;
            }
            temp=temp->next;
        }
        temp=head;
        while(temp!=NULL)
        {
            ListNode* newnode=new ListNode(temp->val);
            if(rev==NULL)
            {
                rev=newnode;
            }
            else
            {
                newnode->next=rev;
                rev=newnode;
            }
            temp=temp->next;
        }
        while((temp1!=NULL&&rev!=NULL)&&h<c)
        {
            if(h%2==0)
            {
                head->val=temp1->val;
                temp1=temp1->next;
            }
            else
            {
                head->val=rev->val;
                rev=rev->next;
            }
            head=head->next;
            h++;
        }
        cout<<temp1->val<<" "<<rev->val;
        // if(c%2!=0){
        // head->val=rev->val;
        // head=head->next;
        // head->val=temp1->val;
        // }
    }
};