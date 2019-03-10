#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	string x1,x2,x3,x4,res;
	int index=0;
	while(cin>>x1>>x2>>x3>>x4) {
		vector<string> ress[10];
		res=x1+x2+x3+x4;
		if(res=="0000") {
			break;
		}
		if(index!=0)cout<<endl;
		index++;
		sort(res.begin(),res.end());
		do {
			if(res[0]=='0')continue;
			else {
				int index=res[0]-'0';
				ress[index].push_back(res);
			}
		} while(next_permutation(res.begin(),res.end()));

		int time=0;
		for(int i=1; i<=9; i++) {
			if(ress[i].size()>0) {
				cout<<ress[i][0];
			}
			for(int j=1; j<ress[i].size(); j++) {
				cout<<" "<<ress[i][j];
			}
			if(ress[i].size()>0) {
				cout<<endl;
			}

		}
	}
	return 0;
}
