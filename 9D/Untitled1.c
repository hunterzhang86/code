#include<stdio.h>
int main(){
    freopen("1473.in","r",stdin);
    int n,temp,a[35];
    int i,j,k;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&temp);
        j=0;
        a[j++]=temp%2;
        while(temp/2>0){
            temp=temp/2;
            a[j++]=temp%2;
        }
        for(k=0;k<j;k++){
            printf("%d",a[j-1-k]);
        }
        printf("\n");
    }
    return 0;
}
