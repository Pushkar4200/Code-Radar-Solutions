#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d\n",&a[i]);
    }
    int k=0;
    for(int s=1;s<n;s++){
        if(s==(n-1)){
            if(a[s]>a[s-1]){
                printf("%d",a[s]);
                k++;
                break;
            }
        }
        else{
            if(a[s]>a[s-1] && a[s]>a[s+1]){
                printf("%d",a[s]);
                k++;
                break;
            }
        }
    }
    if(k==0){
        printf("-1");
    }
return 0;
}