#include<iostream>
#include<map>
#include<string>
using namespace std;

//char of substring can be repeated 
int main() {
	int n;
	while(cin>>n) {
		for(int k=0; k<n; k++) {
			string input;
			cin>>input;
			int t=1;
			for(int i=1; i<input.size(); i++) {
				if(input[i-1]==input[i]) {
					t++;
				} else {
					if(t>1)
						cout<<t<<input[i-1];
					else
						cout<<input[i-1];
					t=1;
				}
			}

			if(t>1)
				cout<<t<<input[input.size()-1]<<endl;
			else
				cout<<input[input.size()-1]<<endl;

		}
	}
	return 0;
}
