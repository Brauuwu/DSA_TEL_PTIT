#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x): val(x), left(NULL), right(NULL) {} 
};

int maxDepth(vector<int> a){
	if(a.empty() || a[0] == -1) return 0;
	int n = a.size();
	queue<pair<int, int>> q;
	q.push({0, 1});
	int maxDepth = 0;
	while(!q.empty()){
		int i = q.front().first;
		int depth = q.front().second;
		q.pop();
		maxDepth = max(maxDepth, depth);
		int l = 2*i+1;
		int r = 2*i+2;
		if(l < n && a[l] != -1){
			q.push({l, depth+1});
		}
		if(r < n && a[r] != -1){
			q.push({r, depth+1});
		}
	}
	return maxDepth;
}

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<int> a(n);
		for(int &x:a) cin >> x;
		cout << maxDepth(a) << endl;
	}
	return 0;
}
