#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x): val(x), left(NULL), right(NULL) {}
};

TreeNode* buildTree(vector<int>& a){
    if(a.empty() && a[0] == -1) return NULL;
    TreeNode* root = new TreeNode(a[0]);
    queue<TreeNode*> q;
    q.push(root);
    int i = 1;
    while(!q.empty() && i<a.size()){
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

void levelOrderBottomUp(TreeNode* root){
    if(!root) return;
    queue<TreeNode*> q;
    q.push(root);
    vector<vector<int>> result;
    while(!q.empty()){
        int size = q.size();
        vector<int> level(size);
        for(int i = 0; i < size; i++){
            TreeNode* current = q.front(); q.pop();
            level[i] = current->val;
            if(current->left) q.push(current->left);
            if(current->right) q.push(current->right);
        }
        result.push_back(level);
    }
    reverse(result.begin(), result.end());
    for(const auto& level : result){
        for(int x : level) cout << x << " ";
        cout << endl;
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for(int &x:a) cin >> x;
        TreeNode* root = buildTree(a);
        levelOrderBottomUp(root);
    }
    return 0;
}
