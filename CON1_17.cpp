#include<bits/stdc++.h>
#define ll long long
#define oo 1e9
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		queue<string> q;
		q.push("9");
		while(!q.empty()){
			string s = q.front();
			q.pop();
			if(stoll(s) % n == 0){
				cout << s << endl;
				break;
			}
			q.push(s+"0");
			q.push(s+"9");
		}
    }
    return 0;
}
