/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */

class Solution {
public:

void addfirst(ListNode* & head,int x)
{
    ListNode*p=new ListNode(x);
    p->val=x;
   p->next=head; //test
    head=p;
}
 ListNode* revers(ListNode*head)
{
    ListNode*head2=NULL;
    ListNode*run=head;
    while(run!=NULL)
    {
        addfirst(head2,run->val);
        run=run->next;
    }
    return head2;
}
void addlast(ListNode* & head,int x)
{
    ListNode*p=new ListNode(x);
        p->val=x;
        p->next=NULL;
    if(head==NULL)
    head=p;
    else{
        ListNode*run=head;
        while(run->next!=NULL)
        run=run->next;
        run->next=p;
    }
}
int sum(ListNode*head)
{
    int s=0;
    ListNode * run=head;
      while(run!=NULL)
    {
        s+=run->val;
        if(run->next!=NULL)
        s*=10;
        run=run->next;
    }
    return s;
}
ListNode* addTwoNumbers(ListNode* l1,ListNode* l2) {
        ListNode* l3=revers(l1);
        ListNode* l4=revers(l2);
        int c=sum(l3)+sum(l4);
        ListNode*l5=NULL;
        if(c==0) addlast(l5,0);
        else
            while(c>0)
        {
            addlast(l5,c%10);
            c/=10;
        }
        return l5;
    }
 };
