#include<bits/stdc++.h>
#define oo 1e9
using namespace std;

struct Point{
	int x, y;
};

double Distance(Point a, Point b){
	return 1.0*sqrt((a.x-b.x)*(a.x-b.x) + (a.y-b.y)*(a.y-b.y));
}

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		Point point[n];
		for(Point &p:point){
			cin >> p.x >> p.y;
		}
		double minDistance = 1.0*oo;
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				if(i==j) continue;
				double d = Distance(point[i], point[j]);
				minDistance = min(minDistance, d);
			}
		}
		cout << fixed << setprecision(6) << minDistance << endl;
	}
    return 0;
}
