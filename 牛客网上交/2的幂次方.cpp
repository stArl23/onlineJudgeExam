#include<iostream>
#include<sstream>
#include<string>
#include<algorithm>
using namespace std;

//good method
int pos[32];
inline int GetBit(int n,int i) {
	return (n>>i)&1;
}
void print(int n) {
	bool first=true;
	for(int i=15; i>=0; --i) {
		if(GetBit(n,i)) {
			if(!first)cout<<"+";
			else first=false;
			if(!i)cout<<"2(0)";
			else if(i==1)cout<<"2";
			else {
				cout<<"2(";
				print(i);
				cout<<")";
			}
		}
	}
}
int main() {
	int n;
	while(cin>>n) {
		print(n);
		cout<<endl;
	}
	return 0;
}

//string intToString(int i) {
//	ostringstream temp;
//	temp<<i;
//	return temp.str();
//}
//
//string ten2two(int i) {
//	string res="";
//	while(i>0) {
//		res.append(intToString(i%2));
//		i/=2;
//	}
//
//	reverse(res.begin(),res.end());
//	return res;
//}
//
////num<16
//string intTo2Exp(int num) {
//	string nums[4]= {"2(0)","2","2(2)","2(2+2(0))"};
//	string hex=ten2two(num);
//	string res="";
//	reverse(hex.begin(),hex.end());
//	for(int i=hex.size()-1; i>=0; i--) {
//		int t=hex[i]-'0';
//		if(t==1) {
//			res.append(nums[i]);
//			res.append("+");
//		}
//	}
//
//	return res.substr(0,(res.size()-1));
//
//}
//
//int main() {
//	int num;
//	//cout<<intTo2Exp(7)<<endl;
//	while(cin>>num) {
//		string temp=ten2two(num);
//		string res="";
//		reverse(temp.begin(),temp.end());
//		for(int i=(temp.size()-1);i>=0;i--){
//			int t=temp[i]-'0';
//			if(i>=2){
//				if(t==1){
//					res.append("2(");
//					res.append(intTo2Exp(i));
//					res.append(")+");
//				}
//			}else if(i==1){
//				if(t==1){
//					res.append("2+");
//				}
//			}else{
//				if(t==1){
//					res.append("2(0)");
//				}
//			}
//			//cout<<i<<endl;
//			//cout<<res<<endl;
//		}
//
//		if(res.back()=='+'){
//			res=res.substr(0,(res.size()-1));
//		}
//		cout<<res<<endl;
//	}
//
//	return 0;
//}
