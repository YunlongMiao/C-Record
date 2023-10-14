#include <stdio.h>

void JudgeJO(int *a,int *J,int *O,int n);

int t;
int n;
int a[100]={0};
int i = 0;

int J[100]={0};
int O[100]={0};

int main(){
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(i=0; i<n; i++)
            scanf("%d",&a[i]);
        
        JudgeJO(a,J,O,n);

        for(i=1; i<=O[0]; i++)
            printf("%d\n",O[i]);
        for(i=1; i<=J[0]; i++)
            printf("%d\n",J[i]);
    }
}


void JudgeJO(int *a,int *J,int *O,int n){
    int t=0;
    int j=0,o=0;
    for(t=0; t<n; t++)
        if(a[t] % 2 == 0){
            o++;
            O[o] = a[t];
        }else{
            j++;
            J[j] = a[t];
        }

    O[0] = o;
    J[0] = j;

}