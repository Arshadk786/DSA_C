/*
Adnan Sulaiman
20CO13
*/

#include<stdio.h>
void knapsack();
int main()
{
    int n,cap;
    printf("Enter the number of weights");
    scanf("%d",&n);
    printf("Enter the capacity");
    scanf("%d",&cap);
    float wt[n],prof[n],ratio[n];
    printf("Enter the weights and its profit");
    for(int i=0;i<n;i++)
    {
        scanf("%f %f",&wt[i],&prof[i]);
        ratio[i]=prof[i]/wt[i];
    }
    float temp=0;

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(ratio[i]<ratio[j])
            {
                temp=ratio[i];
                ratio[i]=ratio[j];
                ratio[j]=temp;

                temp=wt[i];
                wt[i]=wt[j];
                wt[j]=temp;

                temp=ratio[i];
                prof[i]=prof[j];
                prof[j]=temp;

                
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%f\n",ratio[i]);
    }


    knapsack(n,wt,prof,cap);

    return 0;
}

void knapsack(int n,float WT[],float PROF[],int cap)
{
    int i;
    float x[n],tp=0,c;
    c=cap;

    for(i=0;i<n;i++)
    {
        if(WT[i]>c)
        break;

        else{
            c=c-WT[i];
            tp=tp+PROF[i];
            x[i]=1;
        }
    }
    if(i<n)
    {
        x[i]=c/WT[i];
        tp=tp+PROF[i]*x[i];
    }
    
    printf("The ratios are \n");
    for(int i=0;i<n;i++)
    {
        printf("%f\n",x[i]);
    }

    printf("The total profit is %f", tp);
    
}