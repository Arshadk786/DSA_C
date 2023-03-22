#include<stdio.h>

void merge(int a[],int l, int mid , int h){
    int i,j,k,b[50];
    i=l;
    j=mid+1;
    k=l;
    while(i<=mid && j<=h){
        if(a[i]<a[j]){
            b[k]=a[i];
            k++;
            i++;
        }
        else{
            b[k]=a[j];
            k++;
            j++;
        }
    }
    while(i<=mid){
         b[k]=a[i];
            k++;
            i++;
    }

    while(j<=h){
         b[k]=a[j];
            k++;
            j++;
    }
    for(i=l;i<=h;i++){
        a[i]=b[i];
    }
} 

void mergesort(int a[],int l,int h){
    int mid;
    if(l<h){
        mid = (l+h)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,h);
        merge(a,l,mid,h);
    }
}

void main(){
    int i,n;
    printf("Enter No of elements: ");

    scanf("%d",&n);
    int a[n];
    printf("Enter Elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int l=0;
    int h=n-1;
    mergesort(a,l,h);
    printf("Sorted Array: ");
    for(i=0;i<n;i++){
        printf("\t%d",a[i]);
    }
}