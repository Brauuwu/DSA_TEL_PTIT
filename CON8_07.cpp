#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
    	int n; cin >> n;
    	queue<int> q;
    	q.push(1);
    	int cnt=0;
    	while(!q.empty()){
    		int x = q.front(); q.pop();
    		if(x>n) continue;
    		cnt++;
    		q.push(x*10);
    		q.push(x*10+1);
		}
		cout << cnt << endl;
    }
    return 0;
}
