#include<stdio.h>

int Binary(int a[],int n,int key){
    int l=0,h=n-1;
    while(l<=h){
        int mid = (l+h)/2;
        if(a[mid]==key){
            return mid;
        }
        else if(a[mid]>key){
            h=mid-1;
        }
        else{
            l=mid+1;
        }
    }return -1;
}

void main(){
    int i,n,key;
    printf("Enter No of elements: ");
    scanf("%d",&n);
    printf("Enter Elements: ");
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter key: ");
    scanf("%d",&key);
    int ans = Binary(a,n,key);
    printf("Your Key is Present at Index %d ",ans);

}