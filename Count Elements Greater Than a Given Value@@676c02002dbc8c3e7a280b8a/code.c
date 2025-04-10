#include<stdio.h>
void main(){
    int n,y,cou=0;
    scanf("%d %d",&n,&y);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>y){
            cou++;
        }
    }printf("%d",cou);
    
}