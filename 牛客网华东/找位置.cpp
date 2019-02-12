#include<iostream>
#include<map>
#include<algorithm>

using namespace std;

int main() {
	string input;
	while(cin>>input) {
		map<char,int> chars;
		for(int i=0; i<input.size(); i++) {
			if(chars.count(input[i])>0) {
				chars[input[i]]=chars[input[i]]+1;
			} else {
				chars.insert(make_pair(input[i],1));
			}
		}

		string orders="";
		for(int i=0; i<input.size(); i++) {
			if(chars[input[i]]>1&&(orders.find(input[i])==string::npos)) {
				orders+=input[i];
			}
		}

		for(int i=0; i<orders.size(); i++) {
			char symbol=orders[i];
			size_t pos=input.find(symbol);
			if(chars[symbol]>1) {
				while(pos!=string::npos) {
					cout<<symbol<<":"<<pos;
					if(pos==input.size()-1) {
						break;
					}
					pos=input.find(symbol,pos+1);
					if(pos!=string::npos){
						cout<<",";
					}
				}
				cout<<endl;
			}
		}
	}
	return 0;
}
