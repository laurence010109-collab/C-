#include<iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode* next;
    ListNode(int val):val(val),next(nullptr) {}
};

class Solution
{
public:
    ListNode* removeFormEnd(ListNode* head, int n)
    {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode*fast=dummy;
        ListNode*slow=dummy;
        for(int i=0;i<n+1;i++)
        {
            fast=fast->next;
        }
        while(fast!=nullptr)
        {
            slow=slow->next;
            fast=fast->next;
        }
        slow->next=slow->next->next;
        ListNode *tmp=dummy->next;
        delete dummy;
        return tmp;
        
    }
};

void printlist(ListNode*head)
{
    while(head!=nullptr)
    {
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}
int test()
{
    ListNode*head=new ListNode(1);
    head->next=new ListNode(2);
    head->next->next=new ListNode(3);
    head->next->next->next=new ListNode(4);
    head->next->next->next->next=new ListNode(5);
    Solution s;
    ListNode*res=s.removeFormEnd(head,2);
    printlist(res);
}

int main()
{
    test();
    return 0;
}