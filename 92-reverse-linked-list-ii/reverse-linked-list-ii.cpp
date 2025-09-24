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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* temp=head;
        ListNode* res=NULL;
        int c=0;
        while(temp!=NULL){
            c++;
            if(c>=left&&c<=right)
            {
                ListNode* newnode=new ListNode(temp->val);
                if(res==NULL)
                {
                    res=newnode;
                }
                else
                {
                    newnode->next=res;
                    res=newnode;
                }
            }
            if(c>right) break;
            temp=temp->next;
        }
        temp=head;
        c=0;
        while(temp!=NULL)
        {
            c++;
            if(c>=left&&c<=right)
            {
                temp->val=res->val;
                res=res->next;
            }
            if(c>right) break;
            temp=temp->next;
        }
        return head;
        
    }
};