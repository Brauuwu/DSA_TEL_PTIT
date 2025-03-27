#include<bits/stdc++.h>
#define ll long long
#define oo 1e9
using namespace std;

struct Point{
	int x, y, cost;
};

struct cmp{
	bool operator()(const Point& a, const Point& b){
		return a.cost > b.cost;
	}
};

bool check(int x, int y, int m, int n){
	if(0<=x && x<m && 0<=y && y<n) return true;
	return false;
} 

int Path(int a[][105], int m, int n, int x1, int y1, int x2, int y2){
	int dist[m][n];
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			dist[i][j] = oo;
		}
	}
	dist[x1][y1] = a[x1][y1];
	vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
	priority_queue<Point, vector<Point>, cmp> pq;
	pq.push({x1, y1, a[x1][y1]});
	while(!pq.empty()){
		Point p = pq.top();
		pq.pop();
		for(auto dir:directions){
			int xx = p.x + dir.first;
			int yy = p.y + dir.second;
			if(check(xx, yy, m, n)){
				int newCost = p.cost + a[xx][yy];
				if(newCost < dist[xx][yy]){
					dist[xx][yy] = newCost;
					pq.push({xx, yy, newCost});
				}
			}
		}
	}
	return dist[x2][y2];
}

int main(){
    int t; cin >> t;
    while(t--){
    	int m, n;
    	cin >> m >> n;
    	int a[105][105];
    	for(int i=0; i<m; i++){
    		for(int j=0; j<n; j++){
    			cin >> a[i][j];
			}
		}
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		x1--; y1--; x2--; y2--;
		cout << Path(a, m, n, x1, y1, x2, y2) << endl;
	}
    return 0;
}
