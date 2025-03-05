#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll fibo[100];
void Init(){
	fibo[1] = fibo[2] = 1;
	for(int i=3; i<93; i++){
		fibo[i] = fibo[i-2] + fibo[i-1];
	}
}

char Find(int n, int i){
	if(n == 1) return 'A';
	if(n == 2) return 'B';
	if(i <= fibo[n-2]) return Find(n-2, i);
	return Find(n-1, i-fibo[n-2]);
}

int main(){
	Init();
	int t; cin >> t;
	while(t--){
		int n, i; cin >> n >> i;
		cout << Find(n, i) << endl;
	}
	return 0;
}
