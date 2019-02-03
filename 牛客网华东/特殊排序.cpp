#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int num,t;
	while(cin>>num) {
		vector<int> res;
		for(int i=0; i<num; i++) {
			cin>>t;
			res.push_back(t);
		}

		sort(res.begin(),res.end());
		cout<<res[res.size()-1]<<endl;
		res.pop_back();
		if(res.size()>0) {
			for(int i=0; i<res.size(); i++) {
				cout<<res[i]<<" ";
			}
			cout<<endl;
		}else{
			cout<<"-1"<<endl;
		}

	}
	return 0;
}
