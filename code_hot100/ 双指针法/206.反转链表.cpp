#include<iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int val):val(val),next(nullptr) {}
};

class Solution
{
public:
    ListNode* reverselist(ListNode* head)
    {
        ListNode* pre=nullptr;
        
        ListNode* cur=head;
        ListNode* tmp;
        while(cur)
        {
            tmp=cur->next;
            cur->next=pre;
            pre=cur;
            cur=tmp;
        }
        return pre;
    }
};

void tets()
{
    ListNode* head=new ListNode(1);
    head->next=new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    cout<<"反转前的链表："<<endl;
    ListNode* cur=head;
    while(cur!=nullptr)
    {
        cout<<cur->val<<" -> ";
        cur=cur->next;
    }
    cout<<"NULL"<<endl;

    cout<<"反转后的链表："<<endl;
    Solution s;
    ListNode* newHead=s.reverselist(head);
    cur=newHead;
    while(cur!=nullptr)
    {
        cout<<cur->val<<" -> ";
        cur=cur->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    tets();
    return 0;
}

