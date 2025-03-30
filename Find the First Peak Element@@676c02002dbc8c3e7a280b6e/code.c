#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int fou=1
    for(int i=0;i<n-1;i++){
            if(arr[i]<=arr[i+1] && arr[i+1]>arr[i+2]){
                fou=1;
                printf("%d",arr[i+1]);
                break;
            }
    }
}