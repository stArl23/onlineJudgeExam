#include<iostream>
#include<deque>
#include<vector>
using namespace std;

int main() {

	string temp;
	int k1,k2,k3;
	while(cin>>k1>>k2>>k3&&(k1!=0|k2!=0|k3!=0)) {
		cin>>temp;
		vector<int> first_num,second_num,third_num;
		deque<char> first,second,third;
		int length=temp.size();
		for(int i=0; i<length; i++) {
			if(temp[i]>='a'&&temp[i]<='i') {
				first_num.push_back(i);
				first.push_back(temp[i]);
			} else if(temp[i]>='j'&&temp[i]<='r') {
				second_num.push_back(i);
				second.push_back(temp[i]);
			} else {
				third_num.push_back(i);
				third.push_back(temp[i]);
			}
		}
		
		

		for(int i=0; i<k1; i++) {
			char t=first[first.size()-1];
			first.pop_back();
			first.push_front(t);
		}

		for(int i=0; i<k2; i++) {
			char t=second[second.size()-1];
			second.pop_back();
			second.push_front(t);
		}

		for(int i=0; i<k3; i++) {
			char t=third[third.size()-1];
			third.pop_back();
			third.push_front(t);
		}
		
		int i1=0,i2=0,i3=0;
		for(int i=0; i<length; i++) {
			char t='a';
			if(i1<first_num.size()&&first_num[i1]==i) {
				t=first[i1];
				i1++;
			} else if(i2<second_num.size()&&second_num[i2]==i) {
				t=second[i2];
				i2++;
			} else {
				t=third[i3];
				i3++;
			}
			cout<<t;
		}
		cout<<endl;
	}
	return 0;
}
