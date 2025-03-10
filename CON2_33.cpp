#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n, column[20], cross1[20], cross2[20], cnt;

void Queen(int i){
	for(int j=1; j<=n; j++){
		if(!column[j] && !cross1[i-j+n] && !cross2[i+j-1]){
			column[j] = 1;
			cross1[i-j+n] = 1;
			cross2[i+j-1] = 1;
			if(i==n) cnt++;
			else Queen(i+1);
			column[j] = 0;
			cross1[i-j+n] = 0;
			cross2[i+j-1] = 0;
		}
	}
}

int main(){
    int t; cin >> t;
    while(t--){
    	memset(column, 0, sizeof(column));
    	memset(cross1, 0, sizeof(cross1));
    	memset(cross2, 0, sizeof(cross2));
    	cin >> n;
    	cnt = 0;
    	Queen(1);
    	cout << cnt << endl;
    }
    return 0;
}
