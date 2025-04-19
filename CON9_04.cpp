#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int n; cin >> n;
	int a[105][105];
	cin.ignore();
	for(int i=1; i<=n; i++){
		string adj;
		getline(cin, adj);
		stringstream ss(adj);
		int j;
		while(ss >> j) a[i][j]= 1;
	}
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(a[i][j]) cout << 1 << " ";
			else cout << 0 << " ";
		}
		cout << endl;
	}
    return 0;
}
