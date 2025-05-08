#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left, *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode* buildTree(vector<int>& a){
    if(a.empty() && a[0] == -1) return NULL;
    TreeNode* root = new TreeNode(a[0]);
    queue<TreeNode*> q;
    q.push(root);
    int i = 1;
    while(i<a.size()){
        TreeNode* current = q.front(); q.pop();
        if(i<a.size() && a[i] != -1){
            current->left = new TreeNode(a[i]);
            q.push(current->left);
        }
        i++;
        if(i<a.size() && a[i] != -1){
            current->right = new TreeNode(a[i]);
            q.push(current->right);
        }
        i++;
    }
    return root;
}

void levelOrder(TreeNode* root){
    if(!root) return;
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        int size = q.size();
        for(int i=0; i<size; i++){
            TreeNode* current = q.front(); q.pop();
            cout << current->val << " ";
            if(current->left) q.push(current->left);
            if(current->right) q.push(current->right);
        }
        cout << endl;
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for(int &x : a) cin >> x;
        TreeNode* root = buildTree(a);
        levelOrder(root);
    }
    return 0;
}
