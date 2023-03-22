#include<stdio.h>
int min(int a,int b){
    if(a<b){
        return a;
    
    }
    else{
        return b;
    }
}

void all(int m[20][20],int n){
    int i,j,k,a[10][10][10];

    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            a[0][i][j]=m[i][j];
        }
    }

    for(k=1;k<=n;k++){
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                a[k][i][j]=min((a[k-1][i][j]),(a[k-1][i][k]+a[k-1][k][j]));
            }
        }
    }

    for(k=0;k<=n;k++){
        printf("\nA(%d):\n",k);
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                printf("%d\t",a[k][i][j]);
            }
            printf("\n");
        }
    }

    
    
}

void main(){
    int i,j,n,m[20][20];
    printf("Enter No of Vertices: ");
    scanf("%d",&n);
    printf("Enter Matrix: ");
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf("%d",&m[i][j]);
        }
    }
    all(m,n);
}