

#include <stdio.h>
#include <stdlib.h>

    int partition(int a[],int l,int u){
        int v,i,j,temp;
        v=a[l];
        i=l;
        j=u+1;
        while(i<j){
            do
                i++;
            while(a[i]<v);
            do
                j--;
            while(v<a[j]);
            if(i<j){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        a[l]=a[j];
        a[j]=v;
        return(j);
    }
int Select(int a[], int l, int u, int k){
    int j;
   
    if(l==u)
        return a[l];
    j=partition(a,l,u);
  
    if(j==k)
        return a[j];
    else if(k<j)
        return Select(a,l,j-1,k);
    else
        return Select(a,j+1,u,k);
}
int main(){
    int a[10],i,k;
    printf("Enter 10 numbers: ");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    printf("Enter k: ");
    scanf("%d",&k);
    printf("kth smallest element: %d",Select(a,0,9,k-1));
    return 0;
}