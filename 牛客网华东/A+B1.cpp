#include<string>
#include<sstream>
#include<iostream>
using namespace std;

int main() {
	string input;
	while(getline(cin,input)) {
		size_t pos;
		while((pos=input.find(","))&&pos!=string::npos) {
			input.replace(pos,1,"");
		}

		//cout<<input<<endl;
		istringstream iss(input);
		int t,sum=0;
		while(iss>>t) {
			sum+=t;
		}
		cout<<sum<<endl;
	}
	return 0;
}
