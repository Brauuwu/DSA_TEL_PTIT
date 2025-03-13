#include <bits/stdc++.h>
#define ll long long
#define oo 1e9
using namespace std;

int main() {
    int t; cin >> t;
    while(t--){
    	int n; cin >> n;
    	queue<string> q;
    	q.push("1");
    	while(!q.empty()){
    		string x = q.front();
    		q.pop();
    		if(stoll(x) % n == 0){
    			cout << x << endl;
    			break;
			}
			q.push(x + "0");
			q.push(x + "1");
		}
	}
    return 0;
}
