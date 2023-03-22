#include<stdio.h>
void knapsack(int n, float wt[],float pr[],float cap){
    float x[n];
    float total=0;
    int u=cap,i;

    for(i=0;i<n;i++){
        x[i]=0.0;
    }
    for(i=0;i<n;i++){
        if(u < wt[i]){
            break;
        }
        else{
            x[i]=1.0;
            total = total + pr[i];
            u= u - wt[i];

            if(i<n){
            x[i] = u/wt[i];
            }
            total=total + (x[i]*pr[i]);
        }
    }
    printf("The Resultant Vector: \t");
    for(i=0;i<n;i++){
        printf("%f\t",x[i]);
    }

    printf("\nTotal Profit: %f ",total);

}
void main(){
    int i,j,n;
    printf("Enter no of objects: ");
    scanf("%d",&n);
    float pr[n],wt[n],temp,cap,ratio[n];
    printf("Enter Weights & Profits: ");
    for(i=0;i<n;i++){
        scanf("%f %f",&wt[i],&pr[i]);
    }
    printf("Enter Capacity of Sack: ");
    scanf("%f",&cap);

    for(i=0;i<n;i++){
        ratio[i]= pr[i] / wt[i];
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(ratio[i]<ratio[j]){
                temp=ratio[j];
                ratio[j]=ratio[i];
                ratio[i]=temp;
            }
            if(wt[i]<wt[j]){
                temp=wt[j];
                wt[j]=wt[i];
                wt[i]=temp;
            }
            if(pr[i]<pr[j]){
            
                temp=pr[j];
                pr[j]=pr[i];
                pr[i]=temp;


            }
        }
    }
    // printf("Ratios\n");
    // for(i=0;i<n;i++){
    //    printf("\t%f",ratio[i]);
    // }
    // printf("\nWeights\n");
    // for(i=0;i<n;i++){
    //    printf("\t%f",wt[i]);
    // }
    // printf("\nProfits\n");
    // for(i=0;i<n;i++){
    //    printf("\t%f",pr[i]);
    // }
    knapsack(n,wt,pr,cap);

}