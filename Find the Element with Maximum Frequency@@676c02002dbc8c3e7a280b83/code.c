#include<stdio.h>
void main(){
    int n,mx,uo=poi;
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
                uo=arr[i];
            }
            else if(count==mx || arr[i]<uo) {
            uo=arr[i];
            }
            if(mx==1){
                printf("-1");
            }
            else{
                printf("%d",uo);
            }
        }
    }
}