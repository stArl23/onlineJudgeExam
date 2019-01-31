#include<iostream>

using namespace std;

int main(){
	int n1,n2;
	while(cin>>n1>>n2){
		double sum=n1;
		double price=200;
		int flag=22;
		for(int i=1;i<=21;i++){
			//cout<<sum<<" "<<price<<endl;
			if(sum>=price){
				flag=i;
				break;
			}
			sum+=n1;
			price*=(1+(double)n2/100);
			
		}
		
		if(flag<22){
			cout<<flag<<endl;
		}else{
			cout<<"Impossible"<<endl;
		}
	} 
	return 0;
}
