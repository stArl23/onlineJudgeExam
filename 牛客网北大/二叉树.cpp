#include<iostream>
#include<set>
#include<vector>
using namespace std;

int main() {
	int x,y;
	while(cin>>x>>y) {
		set<int> y1;
		vector<int> x1;
		int parent=x;
		if(x!=y) {
			while(x>=1) {
				x1.push_back(x);
				x=x>>1;
			}

			while(y>=1) {
				y1.insert(y);
				y=y>>1;
			}

			for(int i=0; i<x1.size(); i++) {
				if(y1.count(x1[i])==1) {
					parent=x1[i];
					break;
				}
			}
		}

		cout<<parent<<endl;
	}
	return 0;
}
