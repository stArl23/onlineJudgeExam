#include<iostream>
using namespace std;

int main(){
	
	int a[5][5],ox,oy,x,y;
	//init
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cin>>a[i][j];
		}
	}
	
	cin>>ox>>oy>>x>>y;
	
	if(ox==1&&oy==2){
		//逆时针翻转90度 
		int temp[2][2];
		for(int i=0;i<2;i++){
			for(int j=0;j<2;j++){
				temp[i][j]=a[x+i-1][y+j-1];
			}
		}
		
		for(int i=0;i<2;i++){
			for(int j=0;j<2;j++){
				a[x+i-1][y+j-1]=temp[1-j][i];
			}
		} 
		
	}else if(ox==1&&oy==3){
		int temp[3][3];
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				temp[i][j]=a[x+i-1][y+j-1];
			}
		}
		
		
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				a[x+i-1][y+j-1]=temp[2-j][i];
			}
		}
		
	
	}else if(ox==2&&oy==2){
		int temp[2][2];
		for(int i=0;i<2;i++){
			for(int j=0;j<2;j++){
				temp[i][j]=a[x+i-1][y+j-1];
			}
		}
		
		//顺时针翻转90度 
		for(int i=0;i<2;i++){
			for(int j=0;j<2;j++){
				a[x+i-1][y+j-1]=temp[j][1-i];
			}
		}
		
		
		
	}else{
		int temp[3][3];
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				temp[i][j]=a[x+i-1][y+j-1];
			}
		}
		
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				a[x+i-1][y+j-1]=temp[j][2-i];
			}
		}
		
	}
	
	//print
	for(int i=0;i<5;i++){
		cout<<a[i][0];
		for(int j=1;j<5;j++){
			cout<<" "<<a[i][j];
		}
		cout<<"\n";
	}
	
}
