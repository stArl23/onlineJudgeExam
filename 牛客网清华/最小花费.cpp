#include<iostream>
#include <limits.h>
#define N 500
#define INF  2211686018427387940
using namespace std;
//两种解法，dp和弗洛伊德算法 
int l1,l2,l3,c1,c2,c3;
int dist[N],cost[N]; 
int Price(int l) {
	if(l<=l1)return c1;
	else if(l<=l2)return c2;
	else
		return c3;
}

int main() {
	int start,end,n;

	while(cin>>l1>>l2>>l3>>c1>>c2>>c3) {
		cin>>start>>end>>n;

		//出发前没花没钱

		dist[1]=0;
		for(int i=2; i<=n; i++) {
			cin>>dist[i];
		}

		for(int i=start;i<=end;i++){
			cost[i]=INT_MAX;
		}
		cost[start]=0;
		for(int i=start+1; i<=end; i++) { //前进！！！
			//先假设到i站需要花无数的钱
			for(int j=start; j<i; j++) { //到i站的票可能是从j站买的
				int L=dist[i]-dist[j];//j站到i站的距离
				if(L<=l3&&cost[j]+Price(L)<cost[i]) {
					//如果从j站买票能比以往的方案更省钱，那就从j买票
					cost[i]=cost[j]+Price(L);
				}
			}
			
		}

		cout<<cost[end]<<endl;
	}
	return 0;
}



