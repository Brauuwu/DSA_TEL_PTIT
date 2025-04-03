#include<bits/stdc++.h>
#define ll long long
using namespace std;

void Partition(int n, int maxi, vector<int> p){
	if(n==0){
		cout << "(";
		for(int i=0; i<p.size(); i++){
			cout << p[i] << (i<p.size()-1 ? " " : ")");
		}
		cout << " ";
		return;
	}
	for(int i = min(maxi, n); i>=1; i--){
		p.push_back(i);
		Partition(n-i, i, p);
		p.pop_back();
	}
}

int main(){
    int t; cin >> t;
    while(t--){
    	vector<int> p;
    	int n; cin >> n;
		Partition(n, n, p);
		cout << endl;
	}
    return 0;
}
