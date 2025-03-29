#include<stdio.h>
#include<string.h>
void insertionArray(char arr[][34],int n){
    char temp[34];
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(strcmp(arr[j],arr[j+1])>0){
                strcpy(temp,arr[j]);
                strcpy(arr[j],arr[j+1]);
                strcpy(arr[j+1]temp);
            }
        }
    }
}
void printArray(char arr[][32],int a){
    for(int i=0;i<a;i++){
        printf("%s ",arr[i]);
    }
}