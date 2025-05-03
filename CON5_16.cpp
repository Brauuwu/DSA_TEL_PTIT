#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<int> a(n), sum(n);
		for(int i=0; i<n; i++){
			cin >> a[i];
			sum[i] = a[i];
		}
		int res = 0;
		for(int i=0; i<n; i++){
			int max_sum=0;
			for(int j=0; j<i; j++){
				if(a[i]>a[j]) max_sum = max(max_sum, sum[j]);
			}
			sum[i] += max_sum;
			res = max(res, sum[i]);
		}
		cout << res << endl;
	}
    return 0;
}
