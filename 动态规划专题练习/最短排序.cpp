#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class ShortSubsequence {
	public:

		Palindrome() {
		}

//    int findShortest(vector<int> A, int n) {
//        // write code here
//        vector<int> a1(A);
//		sort(a1.begin(),a1.end());
//		int i1=0,j1=n-1;
//		for(int i=0;i<n;i++){
//			if(a1[i]!=A[i])break;
//			i1++;
//		}
//
//		for(int i=n-1;i>=0;i--){
//			if(a1[i]!=A[i])break;
//			j1--;
//		}
//
//		int temp=j1-i1+1;
//		return (-temp==n)?0:temp;
//    }
		
		
		//dp method
		int findShortest(vector<int> A, int n) {
			int** maxvalue = new int*[n];
			int** minvalue = new int*[n];
			bool** records = new bool*[n];
			for (int i = 0; i < n; i++) {
				maxvalue[i] = new int[n];
				minvalue[i] = new int[n];
				records[i] = new bool[n];
			}
			for (int d = 0; d < n; d++) { //子数组长度
				for (int start = 0; start < n - d; start++) {
					int end = start + d;
					if (start == end) {
						maxvalue[start][start] = A[start];
						minvalue[start][start] = A[start];
						records[start][start] = false;
					} else {
						if (maxvalue[start][end - 1] > maxvalue[end][end] && minvalue[start + 1][end] < minvalue[start][start]) {
							records[start][end] = true;
							maxvalue[start][end] = maxvalue[start][end - 1];
							minvalue[start][end] = minvalue[start + 1][end];
						} else {
							records[start][end] = false;
							maxvalue[start][end] = max(maxvalue[start][end - 1], maxvalue[end][end]);
							minvalue[start][end] = min(minvalue[start + 1][end], minvalue[start][start]);
						}
					}
				}
			}
			int minlen = 0;
			for (int i = 0; i < n; i++) {
				for (int j = n - 1; j > i; j--) {
					if (records[i][j] == true) {
						if ((j - i + 1) < minlen || minlen == 0) {
							minlen = j - i + 1;
						}
						i = j;
						break;
					}
				}
			}
			return minlen;
		}
};

int main() {

	ShortSubsequence *p=new ShortSubsequence;
	int arr[]= {1,2,3,4,6,5};
	vector<int> temp(arr,arr+6);
	cout<<p->findShortest(temp,6)<<endl;
	return 0;
}
