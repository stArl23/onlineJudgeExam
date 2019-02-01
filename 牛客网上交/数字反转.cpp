#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int main(){
	string a,b;
	while(cin>>a>>b){
		string sum=to_string(atoi(a.c_str())+atoi(b.c_str()));
		reverse(sum.begin(),sum.end());
		reverse(a.begin(),a.end());
		reverse(b.begin(),b.end()); 
		string sum1=to_string(atoi(a.c_str())+atoi(b.c_str()));
		if(sum==sum1){
			reverse(sum1.begin(),sum1.end());
			cout<<sum1<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
