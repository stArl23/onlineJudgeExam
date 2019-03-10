#include<iostream>
#include<algorithm>
#include<cstdlib>
using namespace std;

int main(){
	int i=0;
	string s;
	while(i<10){
		cin>>s;
		if(s=="0")break;
		cout<<atoi(s.c_str())<<" ";
		reverse(s.begin(),s.end());
		cout<<atoi(s.c_str())<<endl;
		
		i++;
	}
	return 0;
}
