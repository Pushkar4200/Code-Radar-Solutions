#include<stdio.h>
int ft(int arr[],int n,int h,int f){
    for(int i=0;i<n;i++){
        if(n>h){
        if(arr[i]==h){
            printf("%d",i);
        }}
    }
    if(n<=h){
        printf("-1");
    }
}
void main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int f=sizeof(arr)/sizeof(arr[0]);
    int y;
    scanf("%d",&y);
    ft(arr,n,y,f);
}