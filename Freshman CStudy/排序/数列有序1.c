#include<stdio.h>
int main() {
    int i,j,k,m,n;
    while(scanf("%d %d",&n,&m),n!=0||m!=0) {
        int a[101];
        for(i=0; i<n; i++)
            scanf("%d",&a[i]);
        a[n]=m;
        for(j=n-1; j>=0; j--) {
            if(a[j]>a[j+1]) {
                k=a[j];
                a[j]=a[j+1];
                a[j+1]=k;
            } else
                break;
        }
        for(i=0; i<=n; i++) {
            if(i==0)
                printf("%d",a[i]);
            else
                printf(" %d",a[i]);
        }
        printf("\n");
    }
    return 0;
}
