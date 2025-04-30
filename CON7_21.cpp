#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n], nge[n], res[n];
		for(int &x:a) cin >> x;
		memset(nge, -1, sizeof(nge));
		memset(res, -1, sizeof(res));
		stack<int> st;
		for(int i=n-1; i>=0; i--){
			while(!st.empty() && a[st.top()]<=a[i]){
				st.pop();
			}
			if(!st.empty()) nge[i] = st.top();
			st.push(i);
		}
		for(int i=0; i<n; i++){
			if(nge[i]!=-1){
				for(int j=nge[i]+1; j<n; j++){
					if(a[j] < a[nge[i]]){
						res[i] = a[j];
						break;
					}
				}
			}
		}
		for(int i=0; i<n; i++){
			cout << res[i] << " ";
		}
		cout << endl;
	}
    return 0;
}
