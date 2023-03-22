/*
    Name : Khan Arshad Abdulla
    Roll No : 20CO24
*/

import java.util.*;
class knapsack{

    void greedy(int n, double wt[],double pr[],double cap){
        int i;
        double u = cap;
        double total = 0;
        double x[]=new double[n];
        // for(i=0;i<n;i++){lcs using dynamic programming code in c
        //     x[i]=0.0;
        // }
        for(i=0;i<n;i++){
            if(wt[i]>u){
                break;
            }
            else{
                x[i]=1.0;
                total = total + pr[i];
                u = u - wt[i];
            }
        }
        if(i<n){
            x[i] = u/wt[i]; 
            total = total + (x[i]*pr[i]);
        }
        System.out.print("The Resultant Vector: ");
        for(i=0;i<n;i++){
            System.out.print("\t"+x[i]);
        }
        System.out.print("\nTotal Profit: "+total);
    }
    public static void main(String arg[]){
        int i,j,n;
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter No of objects: ");
        n=sc.nextInt();
        double wt[]=new double[n];
        double pr[]=new double[n];
        System.out.print("Enter Weights & Profit: ");
        for(i=0;i<n;i++){
            wt[i]=sc.nextFloat();
            pr[i]=sc.nextFloat();
        }
        System.out.print("Enter Capacity of Sack: ");
        double cap=sc.nextFloat();
        double ratio[]=new double[n];
        for(i=0;i<n;i++){
            ratio[i] = pr[i] / wt[i];
        }

        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(ratio[j]>ratio[i]){
                    double temp;
                    temp = ratio[j];
                    ratio[j] = ratio[i];
                    ratio[i]=temp;
                }
                if(pr[j]>pr[i]){
                    double temp = pr[j];
                    pr[j] = pr[i];
                    pr[i]=temp;
                }
                if(wt[j]>wt[i]){
                    double temp = wt[j];
                    wt[j] = wt[i];
                    wt[i]=temp;
                }
            }
        }
        knapsack ob = new knapsack();
        ob.greedy(n, wt, pr, cap);
        // for(i=0;i<n;i++){
        //     System.out.print(wt[i]+"\t");
        // }
        // for(i=0;i<n;i++){
        //     System.out.print("\t"+pr[i]);
        // }
    }
}