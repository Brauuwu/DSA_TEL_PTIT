#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t; cin >> t;
    while(t--){
    	int nA, nB, nC;
    	cin >> nA; int a[nA+1];
    	for(int i=1; i<=nA; i++) cin >> a[i];
    	cin >> nB; int b[nB+1];
    	for(int i=1; i<=nB; i++) cin >> b[i];
    	cin >> nC; int c[nC+1];
    	for(int i=1; i<=nC; i++) cin >> c[i];
    	int LCA[nA+1][nB+1][nC+1];
    	for(int i=0; i<=nA; i++){
    		for(int j=0; j<=nB; j++){
    			for(int k=0; k<=nC; k++){
    				if(i==0 || j==0 || k==0) LCA[i][j][k] = 0;
    				else if(a[i]==b[j] && b[j]==c[k]) LCA[i][j][k] = LCA[i-1][j-1][k-1] + 1;
    				else LCA[i][j][k] = max({LCA[i][j][k-1], LCA[i][j-1][k], LCA[i-1][j][k]});
				}
			}
		}
		cout << LCA[nA][nB][nC] << endl;
	}
    return 0;
}
