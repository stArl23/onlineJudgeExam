#include<iostream>
#define MAXSIZE 1000001
using namespace std;
//main ������ֻ�ֵܷ�52W ��С������ 
//ת�Ʒ��� f(2m+1)=f(2m) f(2m)=f(2m-1)+f(m)
//����ʹ�ñ����������� 
long long f[MAXSIZE];
int main() {
	int num;
	
	f[0]=f[1]=1;
	for(long long i=2; i<MAXSIZE;i++) {
		if(i%2==0) {
			f[i]=(f[i-1]+f[i/2])%1000000000;
		} else {
			f[i]=f[i-1]%1000000000;
		}
	}
	
	while(cin>>num) {
		cout<<f[num]<<endl;

	}
	return 0;
}
