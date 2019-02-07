#include<iostream>
using namespace std;

//注意溢出 
long long n1[21];
long long result;

//组合 C m,n 即n中挑m个的挑法
long long cal(int n,int m) {
	return n1[n]/(n1[m]*n1[n-m]);
}


void solve(string prev,string post,int num) {
	int count=0;
	prev=prev.substr(1,prev.size()-1);
	post=post.substr(0,post.size()-1);
	while(prev.size()>=1) {
		int i=0;
		while(prev[0]!=post[i]&&i<prev.size())i++;
		string new_prev=prev.substr(0,i+1);
		string new_post=post.substr(0,i+1);
		//注意等于的那段也要包括 
		prev=prev.substr(i+1,prev.size()-i-1);
		post=post.substr(i+1,post.size()-i-1);
		count++;	
		solve(new_prev,new_post,num);
	}
	result=result*cal(num,count);
}

int main() {
	n1[0]=1;
	for(int i=1; i<=20; i++) {
		n1[i]=n1[i-1]*i;
	}

	string prev,post;
	
	int num;
	while(cin>>num>>prev>>post) {
		result=1;
		solve(prev,post,num);
		cout<<result<<endl;
	}
	return 0;
}
