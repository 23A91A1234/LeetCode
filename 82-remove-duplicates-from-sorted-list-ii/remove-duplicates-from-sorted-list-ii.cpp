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
        map<int,int>map;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            map[temp->val]++;
            temp=temp->next;
        }
        ListNode* res=NULL;
        ListNode* tail=NULL;
        for(auto i : map)
        {
            if(i.second==1)
            {
                ListNode* newnode=new ListNode(i.first);
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
            }
        }
        return res;
    }
};