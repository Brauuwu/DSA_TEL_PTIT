#include<bits/stdc++.h>
#define ll long long
#define oo 1e9
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		string s1, s2; cin >> s1 >> s2;
		int n=s1.size(), m=s2.size();
		int LCS[n+1][m+1];
		for(int i=0; i<=n; i++){
			for(int j=0; j<=m; j++){
				if(i==0 || j==0) LCS[i][j] = 0;
				else{
					if(s1[i-1] == s2[j-1]) LCS[i][j] = LCS[i-1][j-1] + 1;
					else LCS[i][j] = max(LCS[i][j-1], LCS[i-1][j]);	
				}
			}
		}
		cout << LCS[n][m] << endl;
    }
    return 0;
}
