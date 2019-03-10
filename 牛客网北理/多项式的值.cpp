#include<iostream>
using namespace std;

int values[12];
int main() {
	int m,high,temp,x;
	cin>>m;
	for(int i=0; i<m; i++) {
		cin>>high;

		for(int j=0; j<=high; j++) {
			cin>>values[j];
		}

		cin>>x;
		temp=1;
		int res=0;
		for(int j=0; j<=high; j++) {
			res+=(values[j]*temp);
			temp*=x;
		}
		cout<<res<<endl;
	}
	return 0;
}
