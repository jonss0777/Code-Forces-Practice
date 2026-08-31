// Problem 655 Print Binary Tree
#include <iostream>
#include <vector>
#include <string>
using namespace std;

// M X N 
// M = height +1
// N = 2^(height + 1 ) 

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

// Simplified Version
int getHeight(TreeNode * root){
    if(!root) return  -1;
    return 1 + max(getHeight(root->left), getHeight(root->right));
}


void fillMatrix(TreeNode * root, vector<vector<string>>& res, int r, int c, int height){
    if(!root) return;

    res[r][c] = to_string(root->val);
    int offset = pow(2, height - r - 1);

    if(root->left){
        fillMatrix(root->left, res, r + 1, c - offset, height);
    }
    if(root->right){
        fillMatrix(root->right, res, r + 1, c + offset, height);
    }
}


vector<vector<string>> printTree(TreeNode* root){
    int height = getHeight(root);
    int m = height + 1;
    int n = pow(2, height + 1) - 1;

    vector<vector<string>> res(m, vector<string>(n, ""));
    if(!root) return res;

    fillMatrix(root, res, 0, (n-1)/2, height);
    return res;
}

int main(){

    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);

    vector<vector<string>> result = printTree(root);

    for(int i = 0; i < result.size(); i++){
        for(int j = 0; j < result[0].size(); j++){
            cout << result[i][j];
        } 
        cout << "\n";
    }
    return 0;
}
