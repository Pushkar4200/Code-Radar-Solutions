int selectionSort(str arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
        if(str arr[j]>str arr[j+1]){
            int temp=str arr[j];
            str arr[j]=str arr[j+1];
            str arr[j+1]=temp;
        }
        }
    }
}
int printArray(str arr[],int n){
    for(int i=0;i<n;i++)
    printf("%s\n",str arr[i]);
}