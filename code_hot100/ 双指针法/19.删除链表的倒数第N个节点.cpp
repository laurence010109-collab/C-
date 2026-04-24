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
    ListNode* removeNthFromEnd(ListNode* head,int n)
    {
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode* fast=dummy;
        ListNode* slow=dummy;
        for(int i=0;i<n;i++)
        {
            fast=fast->next;
        }
        while(fast!=nullptr)
        {
            slow=slow->next;
            fast=fast->next;
        }
        slow->next=slow->next->next;
        ListNode* result=dummy->next;
        delete dummy;
        
        return result;
    }


};

void test()
{
    ListNode*head=new ListNode(1);
    head->next=new ListNode(2);
    head->next->next=nullptr;
    // head->next->next=new ListNode(3);
    // head->next->next->next=new ListNode(4);
    // head->next->next->next->next=new ListNode(5);
    cout<<"删除前的链表："<<endl;
    ListNode* cur=head;
    while(cur!=nullptr)    {
        cout<<cur->val<<" -> ";
        cur=cur->next;  
    }
    cout<<"nullptr"<<endl;
    int n=1;
    Solution s;
    ListNode* newHead=s.removeNthFromEnd(head,n);
    cout<<"删除后的链表："<<endl;
    cur=newHead;
    while(cur!=nullptr)    {
        cout<<cur->val<<" -> ";
        cur=cur->next;
    }
    cout<<"nullptr"<<endl;
}

int main()
{
    test();
    return 0;
}