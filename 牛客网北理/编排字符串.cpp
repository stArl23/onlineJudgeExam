#include<iostream>
#include<vector>

using namespace std;

int main(){
	int n;
	cin>>n;
	vector<string> q;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		if(q.size()<4){
			q.push_back(s);
		}else{
			q.erase(q.begin(),q.begin()+1);
			q.push_back(s);
		}
		
		int x=1;
		for(int j=(q.size()-1);j>=0;j--){
			cout<<x<<"="<<q[j];
			if(j!=0){
				cout<<" ";
			}else{
				cout<<endl;
			}
			x++;
		}
		
	}
	return 0;
}
