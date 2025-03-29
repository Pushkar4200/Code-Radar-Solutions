void findOccurance(int arr[],int n,int y,char q){
        if(q=='F'){
            for(int i=0;i<n;i++){
            if(arr[i]==y){
                return i;
            }
        }return -1;
        }
        else if(q=='L'){
            for(int i=n-1;i>=0;i--){
            if(arr[i]==y){
                return i;
            }
            }return -1;

        }
    }