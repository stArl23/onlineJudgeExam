#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main(){
	int num,t;
	while(cin>>num){
		for(int i=0;i<num;i++){
			cin>>t;
			int n=0,r=sqrt(1.0*t);//ȥ�� 
			if(r*r==t){
				n++;
				r--;
			}
			for(int j=1;j<=r;j++){
				if(t%j==0)n+=2;//����Ϊʲô��2����Ϊs=a*b,s%a==0,a,b��Ϊ����
			}
			cout<<n<<endl;
		}
	}
	return 0;
}
