/*
Name : Khan Arshad Abdulla
Roll No : 20CO24
*/
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

int LongestCommonSequence(char *s1,char *s2,int m,int n){
    int i,j,l[m+1][n+1];

    for(i=0;i<m;i++){
        l[i][0]=0;
    }

    for(j=0;j<n;j++){
        l[0][j]=0;
    }

    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            // if(i==0 || j==0){
            //     l[i][j]=0;
            // }
            if(s1[i-1]==s2[j-1]){
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

    printf("Enter Sequence 1: ");
    scanf("%s",&s1);

    printf("Enter Sequence 2: ");
    scanf("%s",&s2);

    int m=strlen(s1);
    int n=strlen(s2);

    printf("Length of Longest Common Subsequence : %d",LongestCommonSequence(s1,s2,m,n));
}

/*
Output:

Enter Sequence 1: abc
Enter Sequence 2: jkl
Length of Longest Common Subsequence : 0

Enter Sequence 1: abcd
Enter Sequence 2: abcd
Length of Longest Common Subsequence : 4

Enter Sequence 1: abcdef
Enter Sequence 2: abdec
Length of Longest Common Subsequence : 4
*/