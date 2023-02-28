// write a quick sort program
#include <stdio.h>
#include <stdlib.h>
void quicksort(int a[], int low, int high);
int partition(int a[], int low, int high);

    int main(){
        int a[10],i;
        printf("Enter 10 numbers: ");
        for(i=0;i<10;i++)
            scanf("%d",&a[i]);
        quicksort(a,0,9);
        printf("Sorted array: ");
        for(i=0;i<10;i++)
            printf("%d ",a[i]);
        return 0;
    }
    void quicksort(int a[],int l,int u){
        int j;
        if(l<u){
            j=partition(a,l,u);
            quicksort(a,l,j-1);
            quicksort(a,j+1,u);
        }
    }
    int partition(int a[],int l,int u){
        int v,i,j,temp;
        v=a[l];
        i=l;
        j=u+1;
        do{
            do
                i++;
            while(a[i]<v&&i<=u);
            do
                j--;
            while(v<a[j]);
            if(i<j){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }while(i<j);
        a[l]=a[j];
        a[j]=v;
        return(j);
    }

