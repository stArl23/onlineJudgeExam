#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

struct Node{
	int x;
	int y;
};

bool cmp(Node n1,Node n2){
	if(n1.x==n2.x){
		return n1.y<n2.y; 
	} else{
		return n1.x<n2.x;
	}
}

int main(){
	int n,x,y;
	while(cin>>n){
		vector<Node> nodes;
		for(int i=0;i<n;i++){
			Node n;
			cin>>n.x>>n.y;
			nodes.push_back(n);
		}
		
		sort(nodes.begin(),nodes.end(),cmp);
		cout<<nodes[0].x<<" "<<nodes[0].y<<endl;
	}
	return 0;
}
