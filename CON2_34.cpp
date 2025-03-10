#include<bits/stdc++.h>
#define ll long long
#define oo 1e9
using namespace std;

int n=8, column[20], cross1[20], cross2[20], score;
int a[20][20], res;

void Queen(int i){
	for(int j=1; j<=n; j++){
		if(!column[j] && !cross1[i-j+n] && !cross2[i+j-1]){
			column[j] = 1;
			cross1[i-j+n] = 1;
			cross2[i+j-1] = 1;
			score += a[i][j];
			if(i==n){
				res=max(res, score);
			}
			else Queen(i+1);
			score -= a[i][j];
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
    	for(int i=1; i<=n; i++){
    		for(int j=1; j<=n; j++){
    			cin >> a[i][j];
			}
		}
		res=-oo;
		score=0;
    	Queen(1);
    	cout << res << endl;
    }
    return 0;
}
