#include <stdio.h>

#include <sys/time.h>
#include <math.h>
#include <stdlib.h>
//void display(int*, int);
void bubblesort(int*, int);
void insertionsort(int*, int);
void init(int*,int);
void listcopy(int*,int*,int);
void merge(int*,int,int,int);
void mergesort(int*,int,int);
int main()
{
    int *A, *B, n;
    struct timeval start, stop;
    double secs = 0;
    printf("\nEnter list size:\n"); scanf("%d", &n);
    A = (int*) malloc(n*sizeof(int));
    init(A,n);
    printf("\nList before bubblesort:\n");
    //display(A,n);
    B = (int*) malloc(n*sizeof(int));
    listcopy(B,A,n);
    gettimeofday(&start, NULL);
    bubblesort(A,n);
    gettimeofday(&stop, NULL);
    printf("\nList after bubblesort:\n");
    //display(A,n);
    secs = (double)(stop.tv_usec - start.tv_usec) / 1000000 + (double)(stop.tv_sec - start.tv_sec);
    printf("time taken by bubblesort %lf\n",secs);
 
    listcopy(A,B,n);
    gettimeofday(&start, NULL);
    insertionsort(A,n);
    gettimeofday(&stop, NULL);
    printf("\nList after insertionsort:\n");
    //display(A,n);
    secs = (double)(stop.tv_usec - start.tv_usec) / 1000000 + (double)(stop.tv_sec - start.tv_sec);
    printf("time taken by insertionsort %lf\n",secs);
    listcopy(A,B,n);
    gettimeofday(&start, NULL);
    mergesort(A,0,n-1);
    gettimeofday(&stop, NULL);
    printf("\nList after mergesort:\n");
    //display(A,n);
    secs = (double)(stop.tv_usec - start.tv_usec) / 1000000 + (double)(stop.tv_sec -start.tv_sec);
    printf("time taken by mergesort %lf\n",secs);
 return 0;
}
void bubblesort(int *A, int n)
{
    int i,j, tmp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(A[j]>A[j+1])
            {
                tmp=A[j];
                A[j]=A[j+1];
                A[j+1]=tmp;
            }
        }
    }
}
void insertionsort(int *A, int n)
{
    int i,j,tmp;
    for(i=1;i<n;i++)
    {
        tmp=A[i];
        j=i-1;
        while(j>=0&&A[j]>tmp)
        {
                A[j+1]=A[j];
                j--;
        }
        A[j+1] = tmp;
    }
}
void mergesort(int* A, int l, int u)
{
    int mid;
    if(l<u)
    {
       mid = (l+u)/2;
       mergesort(A,l,mid);
       mergesort(A,mid+1,u);
       merge(A,l,mid,u);
    }
}
void merge(int* A, int low, int mid, int upp)
{
   int i,j,k,n1,n2;
   int *L, *R;
   n1= mid-low+1;
   n2= upp-mid;
   L=(int*) malloc((n1+1)*sizeof(int));
   R=(int*) malloc((n2+1)*sizeof(int));
   for(i=0;i<n1;i++)
   {
      L[i] = A[low+i];
   }
   L[i] = 99999;
   for(j=0;j<n2;j++)
   {
      R[j] = A[mid+j+1];
   }
   R[j] = 99999;
   i=0; j=0;
   for(k=low;k<=upp;k++)
   {
        if(L[i]<=R[j]){
           A[k] = L[i];
           i++;
        }
        else
        {
            A[k] = R[j];
            j++;
        }
   }
}
void listcopy(int *dest, int *src, int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        dest[i]=src[i];
    }
}
void init(int* A, int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        A[i]=rand();
    }
}
// void display(int* A, int n)
// {
//     int i;
//     printf("\n\n");
//     for(i=0;i<n;i++)
//     {
//         printf("%d ",A[i]);
//     }
//     printf("\n\n");
// }