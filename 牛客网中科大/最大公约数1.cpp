#include<iostream>
#include<climits>
using namespace std;

int gcd(int a,int b) {
	if(a%b>0)
		return gcd(b,a%b);
	else
		return b;
}

int min1=INT_MAX,max1=-1,n,temp;
int main() {
	while(cin>>n) {
		min1=INT_MAX;
        max1=-1;
		for(int i=0; i<n; i++) {
			cin>>temp;
			if(max1<temp) {
				max1=temp;
			}

			if(min1>temp) {
				min1=temp;
			}
		}

		cout<<min1<<" "<<max1<<" "<<gcd(max1,min1)<<endl;
	}

	return 0;
}
