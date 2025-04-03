#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n, S, a[100];
int cnt, sum, ok;

int cmp(int a, int b){
	return a>=b;
}

void Try(int i){
	if(ok) return;
	for(int j=1; j>=0; j--){
		sum += a[i]*j;
		cnt += j;
		if(sum == S){
			ok = 1;
			cout << cnt << endl;
			return;
		}
		if(sum < S && i < n-1) Try(i+1);
		sum -= a[i]*j;
		cnt -= j;
	}
}

int main(){
    int t; cin >> t;
    while(t--){
    	cnt = 0; sum = 0; ok = 0;
    	cin >> n >> S;
    	for(int i=0; i<n; i++) cin >> a[i];
    	sort(a, a + n, cmp);
    	Try(0);
    	if(!ok) cout << -1 << endl;
	}
    return 0;
}
