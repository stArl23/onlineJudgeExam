#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
using namespace std;

int main() {
	int temp;
	string input;
	while(getline(cin,input)) {
		size_t pos=0;
		while((pos=input.find("."))&&pos!=string::npos) {
			input.replace(pos,1," ");
		}
		
		istringstream iss(input);
		bool flag=true;
		while(iss>>temp) {
			if(temp>255||temp<0) {
				flag=false;
				break;
			}
		}

		if(flag) {
			cout<<"Yes!"<<endl;
		} else {
			cout<<"No!"<<endl;
		}

	}
	return 0;
}
