#include<stdio.h>
int gt(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }}
        }}
void pri(int arr[],int n){
    printf("%d\n",arr[n-2]);
}
void main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    if(n>1){
    gt(arr,n);
    pri(arr,n);}
    else{
        printf("-1");
    }
}