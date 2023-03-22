#include<stdio.h>
int Linear(int a[],int n,int key){
    for(int i=0;i<n;i++){
        if(a[i]==key){
            return i;
        }
    }return -1;;
}
void main(){
    // INSERTION SORT
    /*int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter Elements of array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<n;i++){
        int current = a[i];
        int j=i-1;
        while(a[j]>current){
            a[j+1]=a[j];
            j--;
        }
        a[j+1] = current;
    }
    printf("Sorted List: ");
    for(int i=0;i<n;i++){
        printf("\t%d",a[i]);
    }*/

    // SELECTION SORT
    /*int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter Elements of array: ");
    for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]<a[i]){
                int temp = a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    printf("Sorted List: ");
    for(int i=0;i<n;i++){
        printf("\t%d",a[i]);
    }*/

    //LINEAR SEARCH
    int n,i,key;
    printf("Enter size of array:  ");
    scanf("%d",&n);
    int a[n];
    printf("Enter Elements of array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter key: ");
    scanf("%d",&key);
    printf("%d",Linear(a,n,key));

}