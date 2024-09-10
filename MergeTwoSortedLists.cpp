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
    void addlast(ListNode* & head,int x)
    {
        ListNode* p=new ListNode();
        p->val=x;
        p->next=NULL;
        if(head!=NULL)
        {
            ListNode* run=head;
            while(run->next!=NULL)
            run=run->next;
        run->next=p;
        }
        else
        head=p;
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL && list2==NULL)
            return NULL;
        else if(list1==NULL)
            return list2;
        else if(list2==NULL)
            return list1;
        else
        {
        ListNode * list3=NULL;
            ListNode* run1=list1;
        ListNode* run2=list2;
        while(run1!=NULL && run2!=NULL)
        {
            if(run1->val > run2->val)
            {
                addlast(list3,run2->val);
                run2=run2->next;
            }
            else if(run1->val < run2->val)
            {
                addlast(list3,run1->val);
                run1=run1->next;
            }
            else
            {
                addlast(list3,run1->val);
                addlast(list3,run2->val);
                run1=run1->next;
                run2=run2->next;
            }
        }
        if(run1==NULL)
        while(run2!=NULL)
        {
            addlast(list3,run2->val);
            run2=run2->next;
        }
        else
        while(run1!=NULL)
        {
            addlast(list3,run1->val);
            run1=run1->next;
        }

        return list3;
    }
  }
};
