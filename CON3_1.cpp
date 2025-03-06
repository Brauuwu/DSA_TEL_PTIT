#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int cost[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    int t; cin >> t;
    while(t--){
    	int n; cin >> n;
    	int cnt=0;
    	for(int i=0; i<10; i++){
    		cnt += n/cost[i];
    		n %= cost[i];
		}
		cout << cnt << endl;
    }
    return 0;
}
