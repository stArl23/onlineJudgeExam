#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
	int num;
	while(cin>>num){
		while(num>=10){
			int temp=0;
			string st=to_string(num);
			for(int i=0;i<st.size();i++){
				temp+=(st[i]-'0');
			}	
			num=temp;
		}
		cout<<num<<endl;
	}
	return 0;
}
