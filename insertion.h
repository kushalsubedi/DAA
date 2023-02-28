void insertion_sort(int A[], int n){
    int temp;
    for(int i=1;i<n;i++){
        int j=i-1;
        temp=A[i];
        while(j>=0 && A[j]>temp){
            A[j+1]=A[j];
            j=j-1;
        }
        A[j+1]=temp;
    }
}