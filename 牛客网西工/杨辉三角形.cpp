#include<iostream>

using namespace std;

long long f[21];
//nÖÐÑ¡m¸ö 
long long cal(long long n,long long m){
	return f[n]/(f[m]*f[n-m]);
}
int main(){
	f[0]=1;
	for(long long i=1;i<21;i++){
		f[i]=f[i-1]*i;
	}
	
	long long n;
	while(cin>>n){
		for(long long i=2;i<=n;i++){
			for(long long k=1;k<=i;k++){
				cout<<cal(i-1,k-1)<<" ";
			}
			cout<<endl;
		}
	} 
	return 0;
}
