#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
using namespace std;

int nums[100001];
int main() {
	int n;
	scanf("%d",&n);
	int l,start,end,start1,end1;
	for(int j=0; j<n; j++) {
		scanf("%d",&l);
		for(int i=1; i<=l; i++) {
			scanf("%d",&nums[i]);
		}

		start=1,end=1;
		start1=1,end1=1;
		int sum_f=nums[1],sum=0;
//		�κθ���������Ҳ�����������������е�ǰ׺��ԭ����ͬ����
//		�������ѭ���м�⵽��a[i]��a[j]�������еĺ��Ǹ�����
//		��ô��������ƽ�j+1 
		for(int i=1; i<=l; i++) {
			sum+=nums[i];
			end1=i;
			if(sum_f<sum) {
				start=start1;
				end=end1;
				sum_f=sum;
			} 
			
			if(sum<0) {
				start1=i+1;
				sum=0;
			}


		}

		printf("Case %d:\n",j+1);
		printf("%d %d %d\n",sum_f,start,end);
		if((j+1)!=n) {
			printf("\n");
		}
	}
	return 0;
}
