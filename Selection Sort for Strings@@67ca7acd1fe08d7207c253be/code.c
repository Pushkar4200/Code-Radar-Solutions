int selectionSort(char arr[][20],int n){
    char temp[32];
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
        if(strcmp( arr[j],arr[j+1])){
            
            strcpy(temp,arr[j]);
            strcpy(arr[j],arr[j+1]);
            strcpy(arr[j+1],temp);
        }
        }
    }
}
int printArray(char arr[][20],int n){
    for(int i=0;i<n;i++)
    printf("%s\n",arr[i]);
}