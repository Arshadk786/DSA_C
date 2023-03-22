#include<stdio.h>
#include<string.h>

int match(char *text, char *pattern,int m, int n){
    int c,d,e,pos=-1;
    for(c=0;c<=m-n;c++){
        pos=e=c;
        for(d=0;d<n;d++){
            if(pattern[d]==text[e]){
                e++;
            }
            else{
                break;
            }
        }
        if(d==n){
            return pos;
        }
    }return -1;
}


void main(){
    char text[200],pattern[200];
    int m,n;
    printf("Enter Text : ");
    scanf("%s",&text);

    printf("Enter Pattern : ");
    scanf("%s",&pattern);
    m= strlen(text);
    n=strlen(pattern);

    int ans = match(text,pattern,m,n);
    if(ans>=0){
        printf("Your Pattern is found at %d Index",ans);
    }
    else{
        printf("Pattern Not Found");
    }
}