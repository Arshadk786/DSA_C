/*
Name : Khan Arshad Abdulla
Roll No : 20CO24
*/


#include<stdio.h>
void Merge(int a[],int l,int mid,int h){
    int i,j,k,b[100];
    i=l;
    j=mid+1;
    k=l;
    while(i<=mid && j<=h){
        if(a[i]>a[j]){
            b[k]=a[j];
            k++;j++;
        }
        else{
            b[k]=a[i];
            k++;i++;
        }
    }
    while(i<=mid){
        b[k]=a[i];
        k++;i++;
    }
    while(j<=h){
        b[k]=a[j];
        k++;j++;
    }
    for(int i=l;i<=h;i++){
        a[i]=b[i];
    }
}
void MergeSort(int a[],int l,int h){
    if(l<h){
        int mid = (l+h)/2;
        MergeSort(a,l,mid);
        MergeSort(a,mid+1,h);
        Merge(a,l,mid,h);
    }
}
void main(){
    int n,i;
    printf("Enter size of Array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter Elements of Array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int l=0,h=n-1;
    MergeSort(a,l,h);
    printf("Sorted List: ");
    for(i=0;i<n;i++){
        printf("\t%d",a[i]);
    }
}

/*
Output:

Enter size of Array: 5
Enter Elements of Array: 9
2
8
5
7
Sorted List:    2       5       7       8       9
*/