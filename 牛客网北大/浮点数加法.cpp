#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

//返回的数字为小端法
vector<int> addtwo(vector<int> n1,vector<int> n2,int &add,int flag) {
	vector<int> result;
	int length=min(n1.size(),n2.size());
	for(int i=0; i<length; i++) {
		int t=n1[i]+n2[i]+add;
		result.push_back(t%10);
		add=t/10;
	}

	for(int i=length; i<n1.size(); i++) {
		int t=add+n1[i];
		result.push_back(t%10);
		add=t/10;
	}

	for(int i=length; i<n2.size(); i++) {
		int t=add+n2[i];
		result.push_back(t%10);
		add=t/10;
	}

	if(flag==1&&add!=0) {
		result.push_back(add);
	}

	return result;
}

int main() {
	string num1,num2;
	while(cin>>num1>>num2) {
		vector<int> n1_1,n2_1,n1_2,n2_2;
		int flag=0;
		for(int i=0; i<num1.size(); i++) {
			if(num1[i]=='.') {
				flag=1;
			} else {
				int temp=num1[i]-'0';
				if(flag==0) {
					n1_1.push_back(temp);
				} else {
					n1_2.push_back(temp);
				}
			}

		}

		reverse(n1_1.begin(),n1_1.end());

		flag=0;
		for(int i=0; i<num2.size(); i++) {
			if(num2[i]=='.') {
				flag=1;
			} else {
				int temp=num2[i]-'0';
				if(flag==0) {
					n2_1.push_back(temp);
				} else {
					n2_2.push_back(temp);
				}
			}

		}


		reverse(n2_1.begin(),n2_1.end());

		//小数部分补零
		int length2=max(n1_2.size(),n2_2.size());
		int start2=min(n1_2.size(),n2_2.size());
		for(int i=start2; i<length2; i++) {
			if(n1_2.size()<n2_2.size()) {
				n1_2.push_back(0);
			} else {
				n2_2.push_back(0);
			}
		}

//		for(int i=0; i<n1_2.size(); i++)
//			cout<<n1_2[i];
//		cout<<endl;
//		for(int i=0; i<n2_2.size(); i++)
//			cout<<n2_2[i];
//		cout<<endl;
		
		reverse(n1_2.begin(),n1_2.end());
		reverse(n2_2.begin(),n2_2.end());

		int add=0;
		vector<int> small=addtwo(n1_2,n2_2,add,0);


		vector<int> big=addtwo(n1_1,n2_1,add,1);

//		for(int i=0; i<big.size(); i++)
//			cout<<big[i];
//		cout<<endl;

		reverse(small.begin(),small.end());
		reverse(big.begin(),big.end());

		for(int i=0; i<big.size(); i++) {
			cout<<big[i];
		}
		cout<<".";
		for(int i=0; i<small.size(); i++) {
			cout<<small[i];
		}
		cout<<endl;
	}
	return 0;
}
