#include <iostream>
#include <queue>
using namespace std;

struct TreeNode
{
    TreeNode *left;
    TreeNode *right;
    int value;
    TreeNode() : value(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : value(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : value(x), left(nullptr), right(nullptr){}
};


TreeNode* inverbintree(TreeNode* root){
    if(!root) return nullptr;
    TreeNode* l = inverbintree(root->left);
    TreeNode* r = inverbintree(root->right);
    root->left = r;
    root->right = l;
    return root;
}


void bfs(TreeNode* root){
    queue<TreeNode*> q;

    q.push(root);
    cout << "Elements: " << "\n";
    while(q.size()){
        TreeNode* curr = q.front();
        q.pop();
        cout << curr->value <<  " ";
        if(curr->left) q.push(curr->left);
        if(curr->right) q.push(curr->right);
    }
}



int main()
{
    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(7);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(9);

    cout << "Original" << "\n";
    bfs(root);
    cout << "\n";
    cout << "After invert bin tree" << "\n";
    bfs(inverbintree(root));
    return 0;
}