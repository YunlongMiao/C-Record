#include<stdio.h>

int Judge(int *A,int n);

int n = 0;
long long int a[100000];
int B[1000];
int i = 0,num = 0;
int C[10] = {1,2,3,4,5,6,7,8,99,99};

int main(){

    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    
    for(i=0; i<n-2; i++)
        if(a[i+1]<a[i] && a[i+1]<a[i+2]){
            B[num] = a[i+1];
            num++;
        }

    printf("%d\n",Judge(B,num));

    
    
}


int Judge(int *A,int n){
    int i = 0;
    int max = 0;
    for(i =0; i<n; i++){
        if(A[i]>max)
            max = A[i];
    }

    return max;
}