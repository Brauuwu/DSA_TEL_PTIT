#include<bits/stdc++.h>
using namespace std;

int C[105] = {0};
void Init(){
	C[0] = 1;
	for(int n=1; n<=100; n++){
		for(int i=0; i<n; i++){
			C[n] += C[i]*C[n-i-1];
		}
	}
}

int main(){
	Init();
	int t; cin>>t;
	while(t--){
		int n; cin >> n;
		cout << C[n] << endl;
	}
	return 0;
}
