/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        map<ListNode*,int>map;
        ListNode* temp=head;
        ListNode *hell;
        int c=0;
        while(temp!=NULL)
        {
            map[temp]++;
            if(map[temp]>1){
                // hell=temp; 
                // break;
                return temp;
            }
            temp=temp->next;
        }
        // temp=head;
        // while(temp!=NULL)
        // {
        //     c++;
        //     if(temp==hell) return c;
        //     temp=temp->next;
        // }
        return NULL;

    }
};