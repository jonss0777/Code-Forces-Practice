#include <iostream>
#include <queue>
#include <stack>

using namespace std;

struct TreeNode{
    TreeNode *left;
    TreeNode *right;
    int value;

    TreeNode(){}
    TreeNode(int x): value(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right):  value(x), left(left), right(right) {}
};

// Traversals Imprementation

void bfs_iterative(TreeNode* root){
    queue<TreeNode*> q;
    q.push(root);

    // iterative approach 

    while(q.size()){
        TreeNode* elem = q.front();
        cout <<  q.front()->value << " ";

        q.pop();

        if(elem->left){
            q.push(elem->left); 
        }
        
        if(elem->right){
            q.push(elem->right);
        }
    }
}

void dfs_iterative(TreeNode* root){
    stack<TreeNode*> s; 
    s.push(root);
    while(s.size()){
        TreeNode* elem = s.top();
        cout << elem->value <<" ";
        s.pop();

        if(elem->left){
            s.push(elem->left);
        }
        if(elem->right){
            s.push(elem->right);
        }
    }
}

void pre_order(TreeNode* root){
    if(!root) return;
    cout << root->value << " ";
    pre_order(root->left);
    pre_order(root->right);
}


void inorder(TreeNode* root){
    if(!root) return;
    inorder(root->left);
    cout << root-> value << " ";
    inorder(root->right);
}

void postorder(TreeNode* root){
    if(!root) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->value << " ";
}





int main(){

    
    // Demo Tree
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left  = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    /*
                1
              /   \ 
            2       3
          /  \     /  \
         4    5   6    7
    */
    // Different Traversals
    cout << "bfs_iterative" << "\n";
    cout << "Expected: 1, 2, 3, 4, 5, 6, 7" << "\n";
    cout << "Actual: "; bfs_iterative(root);
    cout << "\n\n";
   
    cout << "dfs_iterative" << "\n";
    cout << "Expected: 1, 3, 7, 6, 2, 5, 4" << "\n";
    cout << "Actual: "; dfs_iterative(root);
    cout << "\n\n";

    cout << "pre_order" << "\n";
    cout << "Expectad: 1, 2, 4, 5, 3, 6, 7" << "\n";
    cout << "Actual: "; pre_order(root);
    cout << "\n\n";


    cout << "inorder" << "\n";
    cout << "Expected: 4, 2, 5, 1, 6, 3, 7" << "\n";
     cout << "Actual: "; inorder(root);
     cout << "\n\n";

    cout << "postorder" << "\n";
    cout << " Expected: 4, 5, 2, 6, 7, 3, 1" <<"\n";
    cout << "Actual: "; postorder(root);
    cout << "\n\n";
    return 0;
}


