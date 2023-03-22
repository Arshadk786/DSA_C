/*
Name : Khan Arshad Abdulla
Roll No : 20CO24
*/

#include<stdio.h>
void main(){
    int n,j,i;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter elements of array: ");
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[j]<a[i]){
                int temp;
                temp = a[j];
                a[j]= a[i];
                a[i] = temp;
            }
        }
    }
    printf("Sorted Array: ");
    for(i=0;i<n;i++){
        printf("\t%d",a[i]);
    }
}

/*
Output:

Enter size of array: 5
Enter elements of array: 1
9
7
5
3
Sorted Array:   1       3       5       7       9
*/