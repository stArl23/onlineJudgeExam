#include<iostream>
using namespace std;

int **mul(int **a,int **b,int n) {
	int **result;
	result=new int*[n];
	for(int i=0; i<n; i++) {
		result[i]=new int[n];
	}


	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			result[i][j]=0;
			for(int k=0; k<n; k++) {
				result[i][j]+=a[i][k]*b[k][j];
			}
		}
	}

	return result;

}

int main() {
	int n,k,temp;
	int **a,**b;

	while(cin>>n>>k) {
		a=new int*[n];
		b=new int*[n];
		//cout<<n<<" "<<k<<endl;
		for(int i=0; i<n; i++) {
			a[i]=new int[n];
			b[i]=new int[n];
		}


		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++) {
				cin>>temp;
				a[i][j]=temp;
				b[i][j]=temp;
			}
		}

		for(int m=1; m<k; m++) {
			a=mul(a,b,n);
		}

		for(int i=0; i<n; i++) {
			cout<<a[i][0];
			for(int j=1; j<n; j++) {
				cout<<" "<<a[i][j];

			}
			cout<<"\n";
		}
	}

}
