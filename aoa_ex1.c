// Insertion

/*#include<stdio.h>
void main(){
    int i,j,n;
    printf("Enter No of elements: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        int cur=a[i];
        j=i-1;
        while(j>=0 && a[j]>cur){
            a[j+1]= a[j];
            j--;
        }
        a[j+1]=cur;
    }

    printf("Sorted Array : ");
    for(i=0;i<n;i++){
        printf("\t%d",a[i]);
    }
}*/

// Selection 

#include<stdio.h>
void main(){
    int i,j,n;
    printf("Enter No of elements: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter Elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            int temp;
            if(a[j]<a[i]){
                temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Sorted Array: ");
    for(i=0;i<n;i++){
        printf("\t%d",a[i]);
    }
}