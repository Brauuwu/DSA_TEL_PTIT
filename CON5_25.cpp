#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll step[100];
void Init(){
	step[0] = 1; step[1] = 2; step[2] = 4;
	for(int i=3; i<=50; i++){
		step[i] = step[i-1]+step[i-2]+step[i-3];
	}
}

int main(){
	Init();
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		cout << step[n-1] << endl;
	}
    return 0;
}
