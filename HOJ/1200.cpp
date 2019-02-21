#include<iostream>
#include<string>
#include<algorithm>
// Õ¤À¸±àÂë
using namespace std;

int main() {
	int n;
	string input;
	while(cin>>n) {
		if(n==0)break;
		cin>>input;

		int t=0;
		for(; t<(input.size()/n); t++) {
			if(t%2==1) {
				reverse(input.begin()+t*n,input.begin()+t*n+n);
			}
		}

		if(t%2==1) {
			reverse(input.begin()+t*n,input.end());
		}
		
		
		for(int i=0; i<n; i++) {
			t=0;
			int index=i+t*n;
			while(index<input.size()) {
				cout<<input[index];
				t++;
				index=i+t*n;
			}
		}
		cout<<endl;
	}

	return 0;
}
