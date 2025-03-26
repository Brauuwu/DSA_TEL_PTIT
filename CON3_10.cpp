#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        priority_queue<int, vector<int>, greater<int>> pq;
        while(n--){
        	int tmp; cin >> tmp;
        	pq.push(tmp);
		}
		int res = 0;
		while(pq.size() > 1){
			int a=pq.top(); pq.pop();
			int b=pq.top(); pq.pop();
			int tmp= a+b;
			pq.push(tmp);
			res += tmp;
		}
		cout << res << endl;
    }
    return 0;
}
