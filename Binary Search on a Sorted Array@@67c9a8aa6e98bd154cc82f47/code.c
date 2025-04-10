int binarySearch(int arr[],int n,int y){
    int o=0;
    for(int i=0;i<n;i++){
        if(arr[i]==y){
        o=1;
        }
        if(o){
        return i;
    }
    else{
        printf("-1");
    }
    }
    
}