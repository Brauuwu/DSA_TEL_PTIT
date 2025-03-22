#include<bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<vector<int>> v;
		int a[n];
		for(int &x:a) cin >> x;
		for(int i=0; i<n; i++){
			vector<int> tmp;
			for(int j=i; j<n; j++) tmp.push_back(a[j]);
			v.push_back(tmp);
			for(int j=n-1; j>=1; j--){
				a[j] += a[j-1];
			}
		}
		reverse(v.begin(), v.end());
		for(auto row:v){
			int m = row.size();
			cout << "[";
			for(int i=0; i<m; i++){
				cout << row[i] << (i<m-1 ? " " : "] ");
			}
		}
		cout << endl;
	}
	return 0;
}
