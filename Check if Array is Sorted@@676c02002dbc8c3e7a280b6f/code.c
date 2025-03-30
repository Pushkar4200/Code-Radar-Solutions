#include<stdio.h>
int fort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
        }
    }
}
void main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int tem[n];
    for(int i=0;i<n;i++){
    tem[i]=arr[i];}
    fort(arr,n);
    int siu=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=tem[i]){
            printf("Not Sorted");
        }
        else{
            printf("Sorted");
        }
    }
}