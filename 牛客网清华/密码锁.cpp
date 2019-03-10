#include<iostream>
#include<algorithm>
#include<queue>
#include<set>
using namespace std;

bool flag;
int time1;
set<string> ss;

struct Node{
	int time;
	string value;
	Node(int time,string value){
		this->time=time;
		this->value=value;
	}
};

void bfs(string s) {
	queue<Node> sq;
	ss.insert(s);
	Node node(0,s);
	sq.push(node);
	while(!sq.empty()&&!flag) {
		Node node1=sq.front();
		sq.pop();
		string now=node1.value;
		
		if(now.find("2012")!=string::npos){
			flag=true;
			time1=node1.time;
			break;
		}
		for(int i=0; i<(now.size()-1); i++) {
			char t=now[i];
			now[i]=now[i+1];
			now[i+1]=t;
			if(ss.count(now)==0) {
				ss.insert(now);
				Node node2(node1.time+1,now);
				sq.push(node2);
			}
			now=node1.value;
		}
	}
}
int main() {
	string s;
	int n;
	while(cin>>n) {
		ss.clear();
		flag=false;
		time1=0;
		cin>>s;
		if(s.size()>=4) {
			bfs(s);
		}
		if(flag){
			cout<<time1<<endl;
		}else{
			cout<<"-1"<<endl;
		}
	}
	return 0;
}
