#include<bits/stdc++.h>
#define ll long long
using namespace std;

int MOD = 1e9+7;

int n, k;
struct matrix{
	ll f[15][15];
	friend matrix operator * (matrix a, matrix b){
		matrix res;
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				res.f[i][j] = 0;
				for(int t=0; t<n; t++){
					res.f[i][j] += a.f[i][t]*b.f[t][j];
					res.f[i][j] %= MOD;
				}
			}
		}
		return res;
	}
};

matrix powMOD(matrix a, int k){
	if(k == 1) return a;
	matrix tmp = powMOD(a, k/2);
	if(k&1) return tmp*tmp*a;
	return tmp*tmp;
}

int main() {
	int t; cin >> t;
	while(t--) {
		cin >> n >> k;
		matrix a;
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				cin >> a.f[i][j];
			}
		}
		a = powMOD(a, k);
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				cout << a.f[i][j] << " ";
			}
			cout << endl;
		}
	}
}
