#include<iostream>
#include<algorithm>
#include<sstream>
using namespace std;

string intToString(int i) {
	ostringstream temp;
	temp<<i;
	return temp.str();
}
//7¸öÊý×Ö 
string ten2two(int i,int &num) {
	string res="";
	while(i>0) {
		res.append(intToString(i%2));
		i/=2;
	}
	
	for(int i=res.size();i<7;i++){
		res.append("0");
	} 
	
	int n=0;
	for(int i=0;i<res.size();i++){
		if(res[i]=='1')n++;
	}
	num=n;
	reverse(res.begin(),res.end());
	return res;
}
int main(){
	string temp;
	while(cin>>temp){
		for(int i=0;i<temp.size();i++){
			int t=(int)temp[i];
			int num=0;
			string res=ten2two(t,num);
			if(num%2==0)res="1"+res;
			else{
				res="0"+res;
			}
			cout<<res<<endl;
		}
	} 
	return 0;
}
