#include<cstring>
#include<iostream>
#include<cstdio>
#include<cstdlib>
/*
* @authon:biechuyangwang
*/
int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        char proxy[1000][16];
        char server[2000][16];
        for(int i=0;i<n;i++){
            scanf("%s",proxy[i]);
        }
        int m;
        scanf("%d",&m);
        for(int i=0;i<m;i++){
            scanf("%s",server[i]);
        }//���϶������������
        int index=0,count=0,flag=1;  //flag������־����ʧ�ܵ�״��
        while(flag&&index!=m){  //���α�index������mʱ��ʾ��������
            int max=0;
            for(int i=0;i<n;i++){  //���for����ÿ����������������ܴ�ı���������
                int j=index;  //ÿ�δ��α꿪ʼ����������
                while(strcmp(proxy[i],server[j])&&j<m)  //�����ܵķ��ʷ�����
                    j++;
                if(j-maxindex>max)
                    max=j-maxindex;  //�����ʷ���������
            }
            if(max==0)  //����ʧ��
                flag=0;
            count++;
            index+=max;
        }
        if(flag)
            printf("%d\n",count-1);  //��Ϊ��һ�β���ת��
        else printf("-1\n");
    }
}
