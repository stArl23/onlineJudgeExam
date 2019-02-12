#include<iostream>
#include<vector>
using namespace std;

int main(){
	int n;
	while(cin>>n&&n>0){
		string operation;
		int num;
		vector<int> s1;
		for(int i=0;i<n;i++){
			cin>>operation;
			if(operation=="A"){
				if(s1.empty()){
					cout<<"E"<<endl;
				}else{
					//使用 stack[stack.size()-1]  可能会数组越 
					cout<<(int)s1.back()<<endl;
				}
			}else if(operation=="O"){
				if(!s1.empty()){
					s1.pop_back();
				}
			}else{
				cin>>num;
				cin.ignore();
				s1.push_back(num);
			}
		}
		cout<<endl;
	}
	return 0;
}
