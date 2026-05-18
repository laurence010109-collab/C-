#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x):val(x),left(nullptr),right(nullptr){}
};



class Solution 
{
public:

        //前序遍历：根左右
    // vector<int> preorderTree(TreeNode*root)
    // {
    //     vector<int> result;
    //     stack<TreeNode*> st;
    //     if(root==nullptr) return result;
    //     st.push(root);
    //     while(!st.empty())
    //     {
    //         TreeNode* cur=st.top();
    //         st.pop();
    //         result.push_back(cur->val);
    //         if(cur->right) st.push(cur->right);
    //         if(cur->left) st.push(cur->left);
    //     }
    //     return result;
    // }

    ///中序遍历：左根右
    // vector<int> preorderTree(TreeNode*root)
    // {
    //     vector<int> result;
    //     stack<TreeNode*> st;
    //     if(root==nullptr) return result;
    //     TreeNode*cur=root;
    //     while(cur!=nullptr||!st.empty())
    //     {
    //         // 1. 先把cur的左子树全部入栈
    //         while(cur!=nullptr)
    //         {
    //             st.push(cur);
    //             cur=cur->left;
    //         }
    //         // 2. 访问栈顶元素
    //         TreeNode* top=st.top();
    //         st.pop();
    //         result.push_back(top->val);
    //         // 3. 让cur指向top的右子树
    //         cur=top->right;
    //     }
    //     return result;
    // }
    
    vector<int> preorderTree(TreeNode*root)
    {
        vector<int> result;
        stack<TreeNode*> st;
        if(root==nullptr) return result;
        st.push(root);
        while(st.empty()==false)
        {
            TreeNode*cur=st.top();
            st.pop();
            result.push_back(cur->val);
            if(cur->left) st.push(cur->left);
            if(cur->right) st.push(cur->right);
        }
        reverse(result.begin(),result.end());
        return result;
    }
};

void test()
{
    TreeNode*root=new TreeNode(1);
    root->left=new TreeNode(2);
    root->right=new TreeNode(3);
    root->right->left=new TreeNode(6);
    root->left->left=new TreeNode(4);

    Solution sol;
    vector<int> result=sol.preorderTree(root);
    for(int i=0;i<result.size();i++)
    {        cout<<result[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    test();
    return 0;
}