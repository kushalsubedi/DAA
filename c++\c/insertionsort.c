
#include<stdio.h>
#include "insertion.h"
int main(int argc,char *argv){
    int Arr[]={1,8,5,10,6};
    int size = sizeof(Arr)/sizeof(Arr[0]);
    insertion_sort(Arr,size);
    for(int i =0;i<size;i++){
        printf("%d ",Arr[i]);
    }
    printf("\n");
    return 0;

}
