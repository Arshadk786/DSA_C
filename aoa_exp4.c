#include<stdio.h>

void knnapsack(int n,float p[],float w[],float cap){
    int i;
    float tp=0;
    float x[n];
    for(i=0;i<n;i++){
        if(w[i]>cap){
            break;
        }
        else{
            x[i]=1.0;
            cap = cap - w[i];
            tp = tp + p[i];
        }
    }
    if(i<n){
        x[i]= cap/w[i];
        tp = tp+(p[i]*x[i]);
    }

    printf("Total Profit: %f\n",tp);
    printf("vector of Objects: ");
    for(i=0;i<n;i++){
        printf("\t%f",x[i]);
    }
}

void main(){
    int n,i,j;
    printf("Enter no of objects: ");
    scanf("%d",&n);
    float p[n],w[n],r[n],cap;

    printf("Enter Profits and Its Weights: ");
    for(i=0;i<n;i++){
        scanf("%f%f",&p[i],&w[i]);
        r[i]=p[i]/w[i];
    }
    printf("Enter Capacity: ");
    scanf("%f",&cap);

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            int temp;
            if(r[i]<r[j]){
                temp = r[i];
                r[i]=r[j];
                r[j]=temp;

                temp = w[i];
                w[i]=w[j];
                w[j]=temp;
                
                temp = p[i];
                p[i]=p[j];
                p[j]=temp;
            }
        }
    }

    // for(i=0;i<n;i++){
    //     printf("\t%f",p[i]);
    // }
    knnapsack(n,p,w,cap);
}