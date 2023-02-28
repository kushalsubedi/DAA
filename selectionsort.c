#include<stdio.h>

void selection_sort(int A[], int n){
    int temp;
    for(int i=0;i<n-1;i++){
        int imin = i;
        for (int j =i+1;j< n-1;j++){
            if (A[imin]>A[j]){
                imin=j;

            }
        }
        temp=A[imin];
        A[imin]=A[i];
        A[i]=temp;

       
    }
}

int main(int argc,char *argv){
    int Arr[]={1,5,8,6,10};
    int size = sizeof(Arr)/sizeof(Arr[0]);
    selection_sort(Arr,size);
    for(int i =0;i<size;i++){
        printf("%d ",Arr[i]);
    }
    printf("\n");
    return 0;

}