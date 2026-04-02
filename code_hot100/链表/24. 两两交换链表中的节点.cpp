#include<iostream>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int val):val(val),next(nullptr){};
};
class Solution
{
public:
    ListNode* swapPairs(ListNode* head)
    {
        ListNode *dummy = new ListNode(0);
        dummy->next=head;
        ListNode *cur = dummy;
        while(cur->next!=nullptr && cur->next->next!=nullptr)
        {
            ListNode *tmp=cur->next; //画图，懂哪些点保留那些位置
            ListNode *tmp2=cur->next->next;
            ListNode *tmp3=cur->next->next->next;

            cur->next=tmp2;
            cur->next->next=tmp;
            cur->next->next->next=tmp3;
            
            cur=cur->next->next;
        }
        ListNode* result = dummy->next;
        delete dummy;
        return result;
    }

};

void printlist(ListNode* head)
{
    while(head != nullptr)
    {
        cout<<head->val<<" -> ";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}

void test()
{
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);

    Solution s;
    ListNode* newhead=s.swapPairs(head);
    printlist(newhead);
    delete head;
}

int main()
{
    test();
    return 0;
}