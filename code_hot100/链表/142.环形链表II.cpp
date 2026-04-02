#include<iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution 
{
public:
    ListNode* detectCycle(ListNode* head)
    {
       ListNode*fast=head;
       ListNode*slow=head;
       while(fast !=nullptr || fast->next!=nullptr)
       {
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow)
            {
                ListNode* Index1=head;
                ListNode* Index2=fast;
                while(Index1!=Index2)
                {
                    Index1=Index1->next;
                    Index2=Index2->next;
                }
                return Index1;
            }
       }
       return NULL;
    }

};

void print(ListNode*head)
{
    int i=10;
    while(i--)
    {
        cout<<head->val<<" ";
        head=head->next;
    }
}
void test()
{
    ListNode*head=new ListNode(3);
    head->next=new ListNode(2);
    head->next->next=new ListNode(0);
    head->next->next->next=new ListNode(-4);
    head->next->next->next->next=head->next;
    Solution s;
    print(head);
    ListNode*newhead=s.detectCycle(head);
    cout<<"入口节点: "<<newhead->val<<endl;
    print(newhead);
}

int main()
{
    test();
    return 0;
}