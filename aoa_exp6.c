#include<stdio.h>
#include<string.h>

int max(int a , int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int LCS(char *s1, char *s2, int m, int n){
    int i,j,l[m+1][n+1];
    for(i=0;i<=m;i++){
        for(j=0;j<=n;j++){
            if(i==0 || j==0){
                l[i][j]=0;
            }
            else if(s1[i-1]==s2[j-1]){
                l[i][j]=l[i-1][j-1]+1;
            }
            else{
                l[i][j]=max(l[i-1][j],l[i][j-1]);
            }
        }
    }
    return l[m][n];
}

void main(){
    char s1[20],s2[20];
    int m,n;
    printf("Enter Sequence 1: ");
    scanf("%s",&s1);
    printf("Enter Sequence 2: ");
    scanf("%s",&s2);

    m = strlen(s1);
    n = strlen(s2);

    printf("Length of LCS is %d",LCS(s1,s2,m,n));
}