#include<iostream>
#include<cmath>
#include<cstring>
#include<vector>
using namespace std;

bool is_prime(int i) {
	if(i<2)return false;
	if(i==2)return true;
	if(i%2==0)return false;
	int p=(int)sqrt((double)i);
	for(int j=3; j<=p; j++) {
		if(i%j==0)return false;
	}
	return true;
}

int main() {
	vector<int> vs;
	for(int i=1; i<=10000; i++) {
		if(is_prime(i)) {
			vs.push_back(i);
		}
	}
	int m;

	while(cin>>m) {
		int step=10001,start=0,end=0;
		for(int i=0;i<vs.size()&&vs[i]<m;i++){
			for(int j=i;j<vs.size()&&vs[j]<m;j++){
				int sum=vs[i]+vs[j];
				if(sum==m&&(j-i)<step){
					step=j-i;
					start=i;
					end=j;
				}
			}
		}
		
		cout<<vs[start]<<" "<<vs[end]<<endl;
		
	}
	return 0;
}
