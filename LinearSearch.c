#include<stdio.h>
int LinearSearch(int a[],int n,int key){
    for(int i=0;i<n;i++){
        if(a[i]==key){
            return i;
        }
    }return -1;
}
void main(){
    int n,key;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter Elements of array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter key: ");
    scanf("%d",&key);
    printf("%d",LinearSearch(a,n,key));
}