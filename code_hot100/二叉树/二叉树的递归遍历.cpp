#include<iostream>
using namespace std;
#include<vector>

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x):val(x),left(nullptr),right(nullptr){}
};

class Solution 
{
public:
     //前序遍历：根左右
    // void traversal(TreeNode* cur,vector<int>& vec)
    // {
    //     if(cur==nullptr) return;
    //     vec.push_back(cur->val);
    //     traversal(cur->left,vec);
    //     traversal(cur->right,vec);
    // }
    //中序遍历：左根右
      void traversal(TreeNode* cur,vector<int>& vec)
    {
        if(cur==nullptr) return;
        traversal(cur->left,vec);
        vec.push_back(cur->val);
        traversal(cur->right,vec);
    }
    //后序遍历：左右根
    //   void traversal(TreeNode* cur,vector<int>& vec)
    // {
    //     if(cur==nullptr) return;
    //     vec.push_back(cur->left->val);
    //     traversal(cur->right,vec);
    //     traversal(cur,vec);
    // }

    vector<int> preorderTraversal(TreeNode*root)
    {
        vector<int> result;
        traversal(root,result);
        return result;
    }
};
// 1. 手动在堆内存里搭建一棵物理二叉树
    //       1
    //      / \
    //     2   3
    //    / \  /
    //   4   5 6
void test()
{
    TreeNode*root=new TreeNode(1);
    root->left=new TreeNode(2);
    root->right=new TreeNode(3);
    root->right->left=new TreeNode(6);
    root->left->left=new TreeNode(4);
    root->left->right=new TreeNode(5);
    Solution s;
    vector<int> result = s.preorderTraversal(root);

    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }
    cout<<endl;
    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right;
    delete root;
}


int main()
{
    test();
    return 0;

}