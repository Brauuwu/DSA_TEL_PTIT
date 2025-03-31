#include<bits/stdc++.h>
#define ll long long
using namespace std;

int a[505][505];
bool visited[505][505];

int check(int a[][505], int R, int C){
	for(int i=1; i<=R; i++){
		for(int j=1; j<=C; j++){
			if(a[i][j] == 1) return 0;
		}
	}
	return 1;
}

int main(){
    int t; cin >> t;
    while(t--){
    	int R, C;
	    cin >> R >> C;
	    for(int i=1; i<=R; i++){
	    	for(int j=1; j<=C; j++){
	    		cin >> a[i][j];
			}
		}
		for(int i=1; i<=R; i++){
			a[i][0] = 0;
			a[i][C+1] = 0;
		}
		for(int j=1; j<=C; j++){
			a[0][j] = 0;
			a[R+1][j] = 0;
		}
		int	days = 0;
		while(1){
			memset(visited, 0, sizeof(visited));
			bool ok = false;
			for(int i=1; i<=R; i++){
				for(int j=1; j<=C; j++){
					if(a[i][j] == 2 && !visited[i][j]){
						if(a[i-1][j] == 1){
							ok = true;
							visited[i-1][j] = true;
							a[i-1][j]++;
						}
						if(a[i+1][j] == 1 && !visited[i+1][j]){
							ok = true;
							visited[i+1][j] = true;
							a[i+1][j]++;
						}
						if(a[i][j-1] == 1 && !visited[i][j-1]){
							ok = true;
							visited[i][j-1] = true;
							a[i][j-1]++;
						}
						if(a[i][j+1] == 1 && !visited[i][j+1]){
							ok = true;
							visited[i][j+1] = true;
							a[i][j+1]++;
						}
					}
				}
			}
			if(!ok) break;
			days++;
		}
		if(check(a, R, C)) cout << days << endl;
		else cout << -1 << endl;
	}
    return 0;
}
