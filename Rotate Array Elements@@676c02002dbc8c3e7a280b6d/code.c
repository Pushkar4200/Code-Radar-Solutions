#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d\n",&arr[i]);
    }
    int r;
    scanf("%d",&r);
    int re=n-r;
    for(int i=re;i<=n;i++){
        printf("%d\n",arr[i]);
    }
    for(int i=1;i<re;i++){
        printf("%d\n",arr[i]);
    }
}