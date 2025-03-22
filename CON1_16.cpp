#include<bits/stdc++.h>
using namespace std;

int n, k, a[100][100], sum;
bool visited[100];
vector<int> v;
vector<vector<int>> res;

void Try(int row){
	if(sum > k) return;
	if(row == n){
		if(sum == k) res.push_back(v);
		return;
	}
	for(int col=0; col<n; col++){
		if(!visited[col]){
			visited[col] = true;
			v.push_back(col+1);
			sum += a[row][col];
			Try(row+1);
			sum -= a[row][col];
			v.pop_back();
			visited[col] = false; 
		}
	}
}

int main() {
	cin >> n >> k;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> a[i][j];
		}
	}
	res.clear();
	sum = 0;
	memset(visited, false, sizeof(visited));
	v.clear();
	Try(0);
	cout << res.size() << endl;
	for(auto& row:res){
		for(int x:row) cout << x << " ";
		cout << endl;
	}
	return 0;
}
