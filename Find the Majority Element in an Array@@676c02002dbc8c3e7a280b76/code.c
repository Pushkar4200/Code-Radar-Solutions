#include<stdio.h>
void main(){
    int n,mx=0,ju;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count+=1;
            }
        if(count>mx){
           mx=count;
           ju=arr[i];
        }
        }

    }printf("%d\n",ju);
}