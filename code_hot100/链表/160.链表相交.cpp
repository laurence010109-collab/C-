#include<iostream>
using namespace std;

struct  ListNode
{
    int val;
    ListNode* next;
    ListNode(int val):val(val),next(nullptr){}
};

class Solution
{
public:
    ListNode* FindeNode(ListNode* headA,ListNode* headB)
    {   int lenA = 0,lenB = 0;
        ListNode*curA=headA;
        while(curA!=nullptr)
        {
            lenA++; 
            curA = curA->next;
        }
        ListNode*curB=headB;
        while(curB!=nullptr)
        {
            lenB++; 
            curB = curB->next;
        }
        curA=headA;
        curB=headB;
        if(lenA<lenB)
        {
            swap(lenA,lenB);
            swap(curA,curB);
        }
        int gap = lenA-lenB;
        while(gap--)
        {
            curA = curA->next;
        }
        while(curA!=nullptr)
        {
            if(curA==curB)
            {
                return curA;
            }
            curA = curA->next;
            curB = curB->next;
        }
        return nullptr;
    }
};

void printList(ListNode* head)
{
    ListNode*cur = head;
    while(cur!=nullptr)
    {
        cout<<cur->val<<" ";
        cur = cur->next;
    }
    cout<<endl;
}
void test()
{
    ListNode*headA = new ListNode(1);
    headA->next = new ListNode(2);
    headA->next->next = new ListNode(3);
    headA->next->next->next = new ListNode(4);
    headA->next->next->next->next = new ListNode(5);
    headA->next->next->next->next->next = new ListNode(0);
    ListNode*headB = new ListNode(4);
    headB->next = new ListNode(6);
    headB->next->next = headA->next->next->next;
    // headB->next->next->next = headA->next->next->next->next;
    // headB->next->next->next->next = headA->next->next->next->next->next;
    Solution s;
    ListNode* list=s.FindeNode(headA,headB);
    printList(headA);
    printList(headB);
    printList(list);
}

int main()
{
    test();
    return 0;
}