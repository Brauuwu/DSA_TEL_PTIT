#include<bits/stdc++.h>
using namespace std;

int minSteps(vector<int> a){
	int steps = 0;
	int prev = 0;
	for(int h:a){
		if(h > prev){
			steps += h-prev;
		}
		prev = h;
	}
	return steps; 
}

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<int> a(n);
		for(int &x:a) cin >> x;
		cout << minSteps(a) << endl;
	}
	return 0;
}
