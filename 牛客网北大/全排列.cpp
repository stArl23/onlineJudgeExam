#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	string temp;
	while(cin>>temp){
		sort(temp.begin(),temp.end());
		do{
			cout<<temp<<endl;
		}while(next_permutation(temp.begin(),temp.end()));
		
	}
	cout<<endl;
	return 0;
}
