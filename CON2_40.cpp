#include<bits/stdc++.h>
#define ll long long
#define oo 1e9
using namespace std;

int n, X[20], visited[20], C[20][20], cmin=oo, Fopt=oo;
int store = 0;

void TSP(int k){
	for(int i=2; i<=n; i++){
		if(!visited[i] && C[X[k-1]][i]){
			visited[i] = 1;
			X[k] = i;
			store += C[X[k-1]][X[k]];
			if(k==n){
				if(C[X[n]][1]) Fopt = min(Fopt, store+C[X[n]][1]);
			}
			else if(store + (n-k+1)*cmin < Fopt){
				TSP(k+1);
			}
			store -= C[X[k-1]][X[k]];
			visited[i] = 0;
		}
	}
}

int main(){
	memset(visited, 0, sizeof(visited));
    cin >> n;
    for(int i=1; i<=n; i++){
    	for(int j=1; j<=n; j++){
    		cin >> C[i][j];
    		cmin = min(cmin, C[i][j]);
		}
	}
	visited[1] = 1;
	X[1] = 1;
	TSP(2);
	cout << Fopt;
	return 0;
}
