#include<stdio.h>
#define PEO 50
#define PRO 5
int peo[PEO];
float pro[PEO][PRO];
int x,y;
int calc(int x,int y);
int main()
{
	int m,n;
	int i,j,t,r
	int sum[PEO]=0;// ���˳ɼ��ĺ� 
	int aver[PRO]=0;//���Ƴɼ��� 
	
	while(~scanf("%d%d",&m,&n)){
		for(i=0; i<m; i++){
			for(j=0; j<n; j++){
				scanf("%f",&pro[i][j]);//���гɼ����浽��ά������ 
			}
		}
		
		t=0;
		for(i=0,t=0; i<m; i++,t++){
			for(j=0,r=0; j<n; j++,r++){
				sum[t]+=calc(i,n); 
				aver[r]+=calc(n,r);
			}
		}
		for(i=0,t=0; i<m; i++,t++){
			for(j=0,r=0; j<n; j++,r++){
				printf("%f %f",sum[t],aver[j]);
			}
		}
	}
}


int calc(int x,int y){
	float num;
	for(i=0,num=0; i<=x; i++){
			for(j=0; j<=y; j++){
				num+=pro[x][y];
				
			}
		}
		return num;
}


