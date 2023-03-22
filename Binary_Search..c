/*
Name : Khan Arshad Abdulla
Roll No : 20CO24
*/

int BinarySearch(int a[],int n,int key){
    int l=0,h=n-1;
    while(l<=h){
        int mid=(l+h)/2;
        if(a[mid]==key){
            return mid;
        }
        else if(a[mid]>key){
            h=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return -1;
}
#include<stdio.h>
void main(){
    int n,i;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements of array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int key;
    printf("Enter key: ");
    scanf("%d",&key);
    printf("Your key is present at %d index",BinarySearch(a,n,key));
}

/*
Output:

Enter the size of array: 5
Enter elements of array: 10
20
30
40
50
Enter key: 30
Your key is present at 2 index

*/