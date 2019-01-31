#include<iostream>
#include<vector>
#include<cstdio>
#include<cmath>
#define INF 999999.99
using namespace std;

struct Node {
	double x;
	double y;
};

int main() {
	int num;
	while(cin>>num) {
		vector<Node> un_visited,is_visited;
		double sum=0;
		for(int i=0; i<num; i++) {
			Node node;
			cin>>node.x>>node.y;
			un_visited.push_back(node);
		}

		Node node=un_visited[0];
		un_visited.erase(un_visited.begin());
		is_visited.push_back(node);

		for(int i1=0; i1<num; i1++) {
			double temp=INF;
			int index=0;
			for(int i=0; i<is_visited.size(); i++) {
				for(int j=0; j<un_visited.size(); j++) {
					Node node1=is_visited[i],node2=un_visited[j];
					double x1=node1.x-node2.x,y1=node1.y-node2.y;
					double distance=sqrt(x1*x1+y1*y1);
					if(distance<temp) {
						temp=distance;
						index=j;
					}
				}
			}
			if(!un_visited.empty()) {
				sum+=temp;
				is_visited.push_back(un_visited[index]);
				un_visited.erase(un_visited.begin()+index);
			}
		}

		printf("%.2lf\n",sum);

	}
	return 0;
}
