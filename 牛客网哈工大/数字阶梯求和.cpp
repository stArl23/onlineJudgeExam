#include<iostream>
#include<algorithm>

using namespace std;
struct BigInt{
	int num[3000];
	int size;
}; 
void print(BigInt res){
	for(int i=res.size-1;i>=0;i--){
		printf("%d",res.num[i]);
	}
	printf("\n");
}

BigInt getBigInt(string num){
	BigInt result=BigInt();
	int size=num.size();
	result.size=size;
	reverse(num.begin(),num.end());
	for(int i=0;i<num.size();i++){
		result.num[i]=num[i]-'0';
	}
	return result;
}

BigInt Add(BigInt& A,BigInt& B){
	int length=(A.size>B.size)?B.size:A.size;
	int i=0,add=0,size=0;
	BigInt result=BigInt();
	for(;i<length;i++){
		int t=A.num[i]+B.num[i]+add;
		add=t/10;
		result.num[size]=t%10;
		size++;
	}
	
	for(;i<A.size;i++){
		int t=A.num[i]+add;
		add=t/10;
		result.num[size]=t%10;
		size++;
	}
	
	for(;i<B.size;i++){
		int t=B.num[i]+add;
		add=t/10;
		result.num[size]=t%10;
		size++;
	}
	
	while(add){
		result.num[size]=add%10;
		add/=10;
		size++;
	}
	result.size=size;
	return result;
}

int main(){
	string a;
	int n;
	while(cin>>a>>n){
		BigInt sum=getBigInt("0");
		string temp=a;
		for(int i=0;i<n;i++){
			BigInt t=getBigInt(temp);
			sum=Add(t,sum);
			temp+=a;
		}
		
		print(sum);
	}
	return 0;
}
