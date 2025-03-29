void insertionArray(char arr[][34],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j+){
            if(strcmp(arr[j],arr[j+1])>0){
                char temp[][20]=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void printArray(char arr[][32],int a){
    for(int i=0;i<a;i++){
        printf("%s ",arr[i]);
    }
}