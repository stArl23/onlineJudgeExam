#include<iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;

int main() {
	string temp;
	while(getline(cin,temp)) {
		for(int i=1;i<temp.size();i++){
			if((temp[i-1] == ' ' || temp[i-1] == '\t')&&temp[i]>='a'&&temp[i]<='z'){
				temp[i]-=32;
			}
		}
		
		if(temp[0]>='a'&&temp[0]<='z'){
			temp[0]-=32;
		}
		cout<<temp<<endl;
	}
	return 0;
}
