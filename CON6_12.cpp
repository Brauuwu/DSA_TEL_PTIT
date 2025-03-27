#include<bits/stdc++.h>
#define ll long long
#define oo 1e9
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
    	int n, k;
    	cin >> n >> k;
    	priority_queue<int> pq;
    	while(n--){
    		int x; cin >> x;
    		pq.push(x);
		}
		while(!pq.empty() && k--){
			cout << pq.top() << " ";
			pq.pop();
		}
		cout << endl;
	}
    return 0;
}
