#include<iostream>
#include<cstdio> 
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

BigInt getBigInt(int i){
	BigInt result=BigInt();
	int size=0;
	if(i==0){
		size=1;
	}
	for(;i>0;i/=10){
		int temp=i%10;
		result.num[size++]=temp;
	}
	result.size=size;
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

BigInt Mul(BigInt& A,BigInt& B){
	if(A.size==1&&A.num[0]==0|B.size==1&&B.num[0]==0){
		return getBigInt(0);
	}
	
	
	BigInt result=getBigInt(0);
	int off=-1,size=0;
	for(int i=0;i<A.size;i++){
		off++;
		int r=0,k=0;
		for(int j=0;j<B.size;j++){
			if(result.num[off+k]==0){
				result.num[off+k]=(A.num[i]*B.num[j]+r)%10;
				r=(A.num[i]*B.num[j]+r)/10;
			}else{
				int temp=result.num[k+off];
				result.num[k+off]=(result.num[k+off]+(A.num[i]*B.num[j]+r))%10;
				r=(temp+A.num[i]*B.num[j]+r)/10;
			}
			k++;
		}
		
		size=k+off;
		if(r!=0)
        {
            result.num[k+off]=r;
            size++;
        }
        
	}	
	
	result.size=size;
//	for(int i=0;i<A.size;i++){
//		BigInt temp=BigInt();
//		int size=0;
//		//½øÎ» 
//		for(int k=0;k<i;k++)
//			size++;
//		for(int j=0;j<B.size;j++){
//			int t=A.num[i]*B.num[j]+add;
//			temp.num[size]=t%10;
//			size++;
//			add=t/10; 
//		}
//		while(add){
//			temp.num[size]=add%10;
//			size++;
//			add/=10;
//		}
//		
//		temp.size=size;
//		result=Add(result,temp);
//	}
	
	return result;
}


int main(){
	int num;
	while(scanf("%d",&num)!=EOF){
		BigInt result=getBigInt(1);
		if(num==0|num==1){
			cout<<"1"<<endl;
		}
		else{
			for(int i=2;i<=num;i++){
				BigInt temp=getBigInt(i);
				//print(temp);
				result=Mul(result,temp);
				//print(result);
			}
			print(result);
		}
	}
	return 0;
} 
