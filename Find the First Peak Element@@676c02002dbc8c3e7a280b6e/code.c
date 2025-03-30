#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int fou=1;
    for(int i=0;i<n-2;i++){
            if(arr[i]<arr[i+1] && arr[i+1]>arr[i+2]&& arr[i]==arr[i+1]){
                fou=1;
                printf("%d",arr[i+1]);
                break;
            }
    }
    if(fou=='0'){
        printf("-1");
    }
}