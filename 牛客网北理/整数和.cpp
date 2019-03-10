#include<iostream>
using namespace std;

int n;
int main() {
	cin>>n;
	for(int j=0; j<n; j++) {
		int sum=0,x;
		cin>>x;
		if(x>=0) {
			for(int i=x; i<=2*x; i++) {
				sum+=i;
			}
		} else {
			for(int i=2*x; i<=x; i++) {
				sum+=i;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}
