#include<iostream>
using namespace std;

class Solution
{
public:
    ListNode* removeElements(ListNode* head,int val)
    {
        while(head!=nullptr && head->val == val)
        {
            ListNode* tmp = head;
            head=head->next;
            delete tmp;
        }

        ListNode* cur = head;
        while(cur != nullptr && cur->next != nullptr)
        {
            if(cur->next->val ==val)
            {
                ListNode* tmp=cur->next;
                cur->next=cur->next->next;
                delete tmp;
            }
            else
            {
                cur=cur->next;
            }
        }
        return head;
    }

};

class Solution2
{
public:
    ListNode* removeElements(ListNode *head, int val)
    {
        ListNode* dummyHead=new ListNode(0);
        dummyHead->next=head;
        ListNode* cur=dummyHead;
        while(cur->next!=nullptr)
        {
            if(cur->next->val == val)
            {
                ListNode* tmp=cur->next;
                cur->next=cur->next->next;
                delete tmp;
            }
            else
            {
                cur=cur->next;
            }

        }
        head=dummyHead->next;
        delete dummyHead;
        return head;
    }
};







int main()
{
    Solution s;
    cout<<s.removeElements(head,val)<<endl;
    return 0;
}