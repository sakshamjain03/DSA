GFG-
void rotateArr(int arr[], int d, int n){
       int temparr[n]={};
       int k=0;
       while(d>n){
           d=d-n;
       }
       for(int i=d;i<=n-1;i++){
           temparr[k]=arr[i];
           k++;
       }
       for(int j=0;j<=d-1;j++){
           temparr[k]=arr[j];
           k++;
       }
       for(int a=0;a<=n-1;a++){
           arr[a]=temparr[a];
       }
    }

