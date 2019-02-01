#include<iostream>
#include<deque>
#include<vector>
using namespace std;

int main(){
	int m,n;
	while(cin>>m>>n){
		deque<int> queue;
		queue.push_back(m);
		vector<int> total;
		total.push_back(m);
		int now=m;
		while(!queue.empty()&&now<=n){
			int now=queue.front();
			queue.pop_front();
			int left=now*2,right=now*2+1;
			if(left<=n){
				total.push_back(left);
				queue.push_back(left);
			}else{
				break;
			}
			if(right<=n){
				total.push_back(right);
				queue.push_back(right);
			}else{
				break;
			}
		}
		cout<<total.size()<<endl;
	}
	return 0;
}
