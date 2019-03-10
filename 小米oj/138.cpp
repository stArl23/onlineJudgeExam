#include <bits/stdc++.h>

using namespace std;

int main(){
	long long l,r;
	cin>>l>>r;
	l%=15;
	r%=15;
	r+=15;
	long long sum=(r+l)*(r-l+1)/2;
	cout<<sum%15<<endl;
	return 0;
}
