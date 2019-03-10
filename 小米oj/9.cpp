#include<iostream>
#include<queue>
using namespace std;
//bfs dosen't work very well
struct Node{
	string s;
	int k;
};

string res;

//void bfs(string s,int k){
//	queue<Node> nodes;
//	Node node;
//	node.s=s;
//	node.k=k;
//	nodes.push(node);
//	while(!nodes.empty()){
//		node=nodes.front();
//		nodes.pop();
//		if(node.k==0){
//			if(node.s<res){
//				res=node.s;
//			}
//			continue;
//		}	
//		
//		string s2=node.s;
//		for(int i=0;i<s2.size();i++){
//			string s1=s2;
//			s1.erase(i,1);
//			if(s1[0]>res[0])continue;
//			Node node1;
//			node1.s=s1;
//			node1.k=node.k-1;
//			nodes.push(node1);	
//		}
//	}
//}

int main(){
	string num;
	int k;
	while(cin>>num>>k){
		res="";
		//bfs(num,k);
		int end=k;
		int start=0,t=num.size()-k;
		while(t>0){
			char p=num[start];
			int temp=start;
			for(int i=start+1;i<=end&&end<num.size();i++){
				if(num[i]<p){
					temp=i;
					p=num[i];
				}
			}
			start=temp+1;
			res+=p;
			end++;
			t--;//pick t times;
		}
		
		while(res.size()>1&&res.front()=='0'){
			res.erase(0,1);
		}
		cout<<res<<endl;
	}
	return 0;
}
