#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

string do_cmd(string s,string cmd){
	int num=cmd.at(0)-'0',start_i=cmd.at(1)-'0',len=cmd.at(2)-'0';
	
	if(num==0){
		reverse(s.begin()+start_i,s.begin()+start_i+len);
	}else{
		string replace=cmd.substr(3,cmd.size()-1);
		s.replace(start_i,len,replace);
	}
	return s;
	
}

int main(){
	string start="",cmd="";
	int n;
	cin>>start>>n;
	while(n--){
		cin>>cmd;
		start=do_cmd(start,cmd);
		cout<<start<<endl;
	}
	
}
