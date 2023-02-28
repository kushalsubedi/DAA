#include<stdio.h>
void bubblesort(int A[],int size){
    int temp;
    for (int i =0; i<size-1;i++){
        for (int j = 0; j<size-i-1;j++){
            if (A[j]>A[j+1]){
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
  
}
int main(){
    int Arr[] ={1,5,6,8,10};
    
    int size =sizeof(Arr)/sizeof(Arr[0]) ;
    int sortedlist[size];
    bubblesort(Arr,size);
    printf("[");
    for (int i = 0; i<size;i++){
        printf("%d ",Arr[i]);
        
        
    }
    printf("]");
return 0;

}