#include <stdio.h>
int main(){
    int n;
    int b;
    scanf("%d %d",&n,&b);
    int a[n];
    int x=0;
    for(int s=0;s<n;s++){
        scanf("%d",&a[s]);
        if(a[s]==b){
            x++;
        }
    }
    printf("%d",x);

}