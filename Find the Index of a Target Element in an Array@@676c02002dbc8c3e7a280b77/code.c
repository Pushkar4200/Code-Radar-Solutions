#include<stdio.h>
int ft(int arr[],int n,int h){
    for(int i=0;i<n;i++){
        if(n>=h){
        if(arr[i]==h){
            printf("%d",i);
        }}
    }
    if(n<h){
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
    int y;
    scanf("%d",&y);
    ft(arr,n,y);
}