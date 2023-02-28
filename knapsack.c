#include <stdio.h>
void knapsack(int n, float weight[], float profit[], float capacity){
    float x[20],tp=0;
    int i,j,u;
    u=capacity;

    for (i=0;i<n;i++)
        x[i]=0.0;

    for (i=0;i<n;i++){
        if (weight[i]>u)
            break;
        else{
            x[i]=1.0;
            tp=tp+profit[i];
            u=u-weight[i];
        }
    }

    if (i<n)
        x[i]=u/weight[i];

    tp=tp+(x[i]*profit[i]);

    printf("The result vector is : ");
    for (i=0;i<n;i++)
        printf("%f\t",x[i]);

    printf("Maximum profit is : %f",tp);

}
int main(){
    float weight[20],profit[20],capacity;
    int num,i,j;
    float ratio [20],temp;

    printf("Enter the no of objects : ");
    scanf("%d",&num);
    printf("\n Enter the weight and profit of each objects :");
    for (i=0;i<num;i++)
    scanf("%f%f",&weight[i],&profit[i]);

    printf("Enter the capacity of knapsack : ");
    scanf("%f",&capacity);

    for (i=0;i<num;i++){
        ratio[i]= profit[i]/weight[i];
    }

    for (i=0;i<num;i++){
        for(j=i+1;j<num;j++){
            if (ratio[i]<ratio[j]){
                temp=ratio[j];
                ratio[j]=ratio[j+1];
                ratio[j+1]=temp;


                temp=weight[j];
                weight[j]=weight[j+1];
                weight[j+1]=temp;

                temp=profit[i];
                profit[i]=profit[j+1];
                profit[j+1]=temp;

            }
        }
    }
    knapsack(num,weight,profit,capacity);
    return 0;

}