#include<iostream>

using namespace std;

int main() {
	int n[3];
	string input;
	while(cin>>input) {
		for(int i=0; i<=2; i++) {
			n[i]=0;
		}

		for(int i=0; i<input.size(); i++) {
			if(input[i]=='Z') {
				n[0]++;
			} else if(input[i]=='O') {
				n[1]++;
			} else {
				n[2]++;
			}
		}

		while(1) {
			if(n[0]>0) {
				n[0]--;
				cout<<"Z";
			}
			if(n[1]>0) {
				n[1]--;
				cout<<"O";
			}
			if(n[2]>0) {
				n[2]--;
				cout<<"J";
			}

			if(n[0]==0&&n[1]==0&&n[2]==0) {
				break;
			}
		}
	}
	return 0;
}
