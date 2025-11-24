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
    bool hasCycle(ListNode *head) {
        map<ListNode*,int>map;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            map[temp]++;
            if(map[temp]>1) return true;
            temp=temp->next;
        }
        // for(auto i :map)
        // {
        //     if(i.second>1) return true;
        // }
        return false;
    }
};