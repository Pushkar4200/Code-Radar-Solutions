#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&n);
    }
    int t;
    scanf("%d",&t);
    int tr;
    tr=(n-t);
    for(int i=tr;i<n;i++){
        printf("%d ",arr[i]);
    }
    for(int j=0;j<tr;j++){
        printf(" %d ",arr[j]);
    }
}