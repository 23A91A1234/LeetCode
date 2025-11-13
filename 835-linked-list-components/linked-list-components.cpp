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
    int numComponents(ListNode* head, vector<int>& nums) {
        int c=0,s=0;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            if(find(nums.begin(),nums.end(),temp->val)!=nums.end())
            {
                c++;
            }
            else if(c>0)
            {
                s+=1;
                c=0;
            }
            temp=temp->next;
        }
        if(c!=0) s+=1;
        return s;
    }
};