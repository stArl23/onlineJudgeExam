#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int a,b,c;
	while(cin>>a>>b>>c){
		vector<int> res;
		res.push_back(a);
		res.push_back(b);
		res.push_back(c);
		
		sort(res.begin(),res.end());
		
		int judge=res[2]*res[2]-res[1]*res[1]-res[0]*res[0];
		if(judge>0){
			cout<<"�۽�������"<<endl;
		} else if(judge==0){
			cout<<"ֱ��������"<<endl;
		}else{
			cout<<"���������"<<endl;
		}
	}
	return 0;
}
