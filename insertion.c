/*
Name : Khan Arshad Abdulla
Roll No : 20CO24
*/

#include<stdio.h>
void main(){
    int n,i,j;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int ar[n];
    printf("Enter Elements of Array: ");
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    for(i=1;i<n;i++){
        int cur=ar[i];
        j=i-1;
        while(j>=0 && ar[j]>cur){
            ar[j+1]=ar[j];
            j--;
        }
        ar[j+1]=cur;
    }
    printf("Sorted  Array:: ");
    for(i=0;i<n;i++){
        printf("%d\t",ar[i]);
    }
}
/*
Output:

Enter size of array: 5
Enter Elements of Array: 9
2
8
5
7
Sorted  Array:: 2       5       7       8       9
*/