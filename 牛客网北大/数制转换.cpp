#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int num(char a){
	if(a>='0'&&a<='9')return a-'0';
	else if(a>='A'&&a<='F')return (a-'A')+10;
	else{
		return -1;
	}
}

char chars(long long a){
	if(a>=0&&a<=9)return a+'0';
	else if(a>=10&&a<=15)return (a-10+'A');	
	else{
		return 'A';
	}
}

int main() {
	int m,n;
	string temp;

	while(cin>>n>>temp>>m) {
		transform(temp.begin(), temp.end(), temp.begin(), ::toupper);
		reverse(temp.begin(),temp.end());
		long long result=0;
		for(int i=0;i<temp.size();i++){
			result+=pow(n,i)*num(temp[i]);
		}
		
		vector<char> res;
		//cout<<result<<endl;
		while(result>0){
			char t=chars(result%m);
			res.push_back(t);
			result/=m;
		}
		reverse(res.begin(),res.end());
		
		for(int i=0;i<res.size();i++){
			cout<<res[i];
		} 
		cout<<endl;
	}
	return 0;
}
