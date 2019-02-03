#include<iostream>
#include<set>
using namespace std;

int main(){
	int n,t;
	while(cin>>n){
		set<int> s;
		for(int i=0;i<n;i++){
			cin>>t;
			s.insert(t);
		}
		
		for(set<int>::iterator it=s.begin();it!=s.end();it++){
			cout<<*it<<" ";
		}
		cout<<endl;
	}
	return 0;
}
