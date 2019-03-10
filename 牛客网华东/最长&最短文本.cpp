#include<iostream>
#include<string>
#include<vector>
using namespace std;

int max1=-1,min1=101;
int main() {
	string s;
	vector<string> maxs,mins;
	while(getline(cin,s)) {
		if(s.size()==0)break;
		int l=s.size();
		if(l>max1) {
			max1=l;
			maxs.clear();
			maxs.push_back(s);
		} else if(l==max1) {
			maxs.push_back(s);
		}

		if(l<min1) {
			min1=l;
			mins.clear();
			mins.push_back(s);
		} else if(l==min1) {
			mins.push_back(s);
		}
	}

	for(int i=0; i<mins.size(); i++) {
		cout<<mins[i]<<endl;
	}
	for(int i=0; i<maxs.size(); i++) {
		cout<<maxs[i]<<endl;
	}


	return 0;
}
