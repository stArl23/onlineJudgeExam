#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int n,m,temp;
	while(cin>>n>>m){
		vector<int> res;
		int m1=n;
		while(m1>0){
			cin>>temp;
			res.push_back(temp);
			m1--;
		}
		
		sort(res.begin(),res.end());
		reverse(res.begin(),res.end());
		
		int m2=res.size();
		int l=min(m,m2);
		for(int i=0;i<l;i++){
			cout<<res[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
