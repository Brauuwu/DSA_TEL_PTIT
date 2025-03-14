#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n, p, s, k, sum;
vector<int> prime;

int isPrime(int n){
	if(n<2) return 0;
	for(int i=2; i*i<=n; i++){
		if(n%i==0) return 0;
	}
	return 1;
}

void Init(){
	for(int i=p+1; i<=s; i++){
		if(isPrime(i)) prime.push_back(i);
	}
	k = prime.size();
}

int X[100];
vector<vector<int>> res;

void Update(){
	vector<int> a;
	for(int i=1; i<=n; i++){
		a.push_back(prime[X[i]-1]);
	}
	res.push_back(a);
}

void Try(int i){
	for(int j=X[i-1]+1; j<=k-n+i; j++){
		X[i] = j;
		sum += prime[X[i]-1];
		if(i == n){
			if(sum == s) Update();
		}
		else if(sum < s) Try(i+1);
		sum -= prime[X[i]-1];
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		sum=0;
		prime.clear();
		cin >> n >> p >> s;
		Init();
		Try(1);
		cout << res.size() << endl;
		for(auto comb:res){
			for(int x:comb) cout << x << " ";
			cout << endl;
		}
//		for(int x:prime) cout << x << " ";
	}
	return 0;
}
