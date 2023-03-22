#include<stdio.h>
void main(){
    int i,j,n;
    printf("Enter No of Edges: ");
    scanf("%d",&n);
    int a[n][n];
    printf("Enter Elements of Matrix: ");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d\t",&a[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
