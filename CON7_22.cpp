#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int height[n];
        for(int &x:height) cin >> x;
        stack<int> st;
        ll maxArea = 0;
        for(int i=0; i<n; i++){
        	while(!st.empty() && height[i] < height[st.top()]){
        		int h = height[st.top()];
        		st.pop();
        		int w = st.empty() ? (i) : (i-st.top()-1);
        		maxArea = max(maxArea, 1ll*h*w);
			}
			st.push(i);
		}
		while(!st.empty()){
			int h = height[st.top()];
    		st.pop();
    		int w = st.empty() ? (n) : (n-st.top()-1);
    		maxArea = max(maxArea, 1ll*h*w);
		}
		cout << maxArea << endl;
    }
    return 0;
}
