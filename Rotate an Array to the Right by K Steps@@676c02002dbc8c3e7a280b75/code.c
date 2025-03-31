#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int t;
    scanf("%d",&t);
    int tr;
    tr=(n-t);
    t=t%n;
    if(n>t){
    for(int i=tr;i<tr;i++){
        printf("%d ",arr[i]);
    }
    for(int j=0;j<tr;j++){
        printf("%d ",arr[j]);
    }}
    else{
        printf("")
    }
}