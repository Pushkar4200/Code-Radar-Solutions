#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int op=1
    for(int i=0;i<n-1;i++){
       if(arr[i]>arr[i+1]){
        op=0;
        break;
       }
}
     if(op){
        printf("Sorted\n");
     }
     else{
        printf("Not Sorted\n");
     }
}