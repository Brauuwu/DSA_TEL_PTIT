#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x): val(x), left(NULL), right(NULL) {} 
};

TreeNode* buildTree(vector<int> a){
	TreeNode* root = new TreeNode(a[0]);
	queue<TreeNode*> q;
	q.push(root);
	int i = 1;
	while(i < a.size()){
		TreeNode* current = q.front();
		q.pop();
		if(i < a.size() && a[i] != -1){
			current->left = new TreeNode(a[i]);
			q.push(current->left);
		}
		i++;
		if(i < a.size() && a[i] != -1){
			current->right = new TreeNode(a[i]);
			q.push(current->right);
		}
		i++;
	}
	return root;
}

void DFS(TreeNode* node, string path, vector<string>& res){
	if(!node) return;
	if(!node->left && !node->right){
		res.push_back(path + to_string(node->val));
		return;
	}
	path += to_string(node->val) + "->";
	
	DFS(node->left, path, res);
	DFS(node->right, path, res);
}

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<int> a(n);
		for(int &x:a) cin >> x;
		TreeNode* root = buildTree(a);
		vector<string> paths;
		DFS(root, "", paths);
		if(paths.empty()) cout << "0\n";
		else{
			for(string path:paths){
				cout << path << "\n";
			}
		}
	}
	return 0;
}
