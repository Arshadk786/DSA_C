// N-Queen

// #include<stdio.h>
// #include<math.h>
// int board[100];
// int count;

// void print_B(int n){
//     int i,j;
//     printf("Solution %d:\n",++count);
//     for(i=1;i<=n;i++){
//         for(j=1;j<=n;j++){
//             if(board[i]==j){
//                 printf("Q\t");
//             }
//             else{
//                 printf("-\t");
//             }
//         }printf("\n");
//     }
// }

// int place(int row, int column){
//     int i;
//     for(i=1;i<=row-1;i++){
//         if(board[i]==column){
//             return 0;
//         }
//         else if(abs(board[i]-column)==abs(i-row)){
//             return 0;
//         }
//     }
//     return 1;
// }

// void Queen(int row,int n){
//     int column;
//     for(column=1;column<=n;column++){
//         if(place(row,column)){
//             board[row]=column;
//             if(row==n){
//                 print_B(n);
//             }
//             else{
//                 Queen(row+1,n);
//             }
//         }
//     }
// }

// void main(){
//     int n;
//     printf("Enter No of Queens: ");
//     scanf("%d",&n);
//     Queen(1,n);
// }

// Naive String Matching:
// #include<stdio.h>
// #include<string.h>

// int match(char *text, char *pat,int m, int n){
//     int c,d,e,pos;
//     for(c=0;c<=m-n;c++){
//         pos=e=c;
//         for(d=0;d<n;d++){
//             if(pat[d]==text[e]){
//                 e++;
//             }
//             else{
//                 break;
//             }
//         }
//         if(d==n){
//             return pos;
//         }
//     }return -1;
// }

// void main(){
//     char text[200],pat[200];
//     int m,n;
//     printf("Enter Text: ");
//     scanf("%s",&text);
//     printf("Enter Pat: ");
//     scanf("%s",&pat);

//     m=strlen(text);
//     n=strlen(pat);

//     int ans = match(text,pat,m,n);
//     if(ans>=0){
//         printf("Your Pattern is present at %d Index.",ans);
//     }
//     else{
//         printf("Pattern Not Found.");
//     }
// }


// All Shortest Path

// #include<stdio.h>

// int min(int a ,int b){
//     if(a<b){
//         return a;
//     }
//     else{
//         return b;
//     }
// }

// void all(int m[20][20],int n){
//     int a[10][10][10],i,j,k;
//     for(i=1;i<=n;i++){
//         for(j=1;j<=n;j++){
//             a[0][i][j]=m[i][j];
//         }
//     }

//     for(k=1;k<=n;k++){
//         for(i=1;i<=n;i++){
//             for(j=1;j<=n;j++){
//                 a[k][i][j]=min((a[k-1][i][j]),(a[k-1][i][k]+a[k-1][k][j]));
//             }
//         }
//     }

//     for(k=0;k<=n;k++){
//         printf("\nA(%d):\n",k);
//         for(i=1;i<=n;i++){
//             for(j=1;j<=n;j++){
//                 printf("%d\t",a[k][i][j]);
//             }printf("\n");
//         }
        
//     }
// }

// void main(){
//     int m[20][20],i,j,n;

//     printf("enter No of Vertices: ");
//     scanf("%d",&n);

//     printf("Enter Matrix: ");
//     for(i=1;i<=n;i++){
//         for(j=1;j<=n;j++){
//             scanf("%d",&m[i][j]);
//         }
//     }

//     all(m,n);
// }



// Longest Common Subsequence:
// #include<stdio.h>
// #include<string.h>
// int max(int a, int b){
//     if(a>b){
//         return a;

//     }
//     else{
//         return b;
//     }
// }

// int lcs(char *s1, char *s2,int m, int n){
//     int i,j,l[m+1][n+1];
//     for(i=0;i<=m;i++){
//         for(j=0;j<=n;j++){
//             if(i==0 || j==0){
//                 l[i][j]=0;
//             }
//             else if(s1[i-1]==s1[j-1]){
//                 l[i][j]=l[i-1][j-1]+1;
//             }
//             else{
//                 l[i][j]=max(l[i-1][j],l[i][j-1]);
//             }
//         }
//     }return l[m][n];
// }


// void main(){
//     char s1[50],s2[50];
//     int m,n;

//     printf("Enter Sequence 1: ");
//     scanf("%s",&s1);
//     printf("Enter Sequence 2: ");
//     scanf("%s",&s2);

//     m=strlen(s1);
//     n=strlen(s2);

//     int ans = lcs(s1,s2,m,n);
//     printf("Length of LCS : %d",ans);
// }


// Knapsack
// #include<stdio.h>

// void knapsack(int n,float p[], float w[],float cap){
//     int i;
//     float tp=0;
//     float x[n];
//     for(i=0;i<n;i++){
//         if(w[i]>cap){
//             break;
//         }
//         else{
//             x[i]=1.0;
//             cap = cap-w[i];
//             tp=tp + p[i];
//         }
//     }
//     if(i<n){
//         x[i]=cap/w[i];
//         tp = tp + (p[i]*x[i]);
//     }

//     printf("Total Profit: %f\n",tp);
//     printf("Vectors of Objects: ");
//     for(i=0;i<n;i++){
//         printf("%f\t",x[i]);
//     }
// }

// void main(){
//     int n,i,j;


//     printf("Enter No of Objects: ");
//     scanf("%d",&n);
    
//     float p[n],w[n],r[n],cap;

//     printf("Enter Profits and Its Weight: ");
//     for(i=0;i<n;i++){
//         scanf("%f%f",&p[i],&w[i]);
//         r[i]=p[i]/w[i];
//     }

//     printf("Enter Capacity: ");
//     scanf("%f",&cap);

//     for(i=0;i<n;i++){
//         for(j=i+1;j<n;j++){
//             float temp;
//             if(r[i]<r[j]){
//                 temp = r[i];
//                 r[i]=r[j];
//                 r[j]=temp;

//                 temp = w[i];
//                 w[i]=w[j];
//                 w[j]=temp;

//                 temp = p[i];
//                 p[i]=p[j];
//                 p[j]=temp;
//             }
//         }
//     }
//     printf("Ratios:\n");
//     for(i=0;i<n;i++){
//         printf("%f\t",r[i]);
//     }
//     knapsack(n,p,w,cap);
// }


// Merge Sort

// #include<stdio.h>

// int merge(int a[],int l,int mid,int h){
//     int i,j,k,b[100];
//     i=l;
//     j=mid+1;
//     k=l;
//     while(i<=mid && j<=h){
//         if(a[i]>a[j]){
//             b[k]=a[j];
//             k++;
//             j++;
//         }
//         else{
//             b[k]=a[i];
//             k++;
//             i++;
//         }
//     }
//     while(i<=mid){
//         b[k]=a[i];
//         k++;
//         i++;
//     }
//     while(j<=h){
//         b[k]=a[j];
//         k++;
//         j++;
//     }
//     for(i=l;i<=h;i++){
//         a[i]=b[i];
//     }

// }

// void mergesort(int a[],int l, int h){
//     int mid;
//     if(l<h){
//         mid= (l+h)/2;
//         mergesort(a,l,mid);
//         mergesort(a,mid+1,h);
//         merge(a,l,mid,h);
//     }
// }

// void main(){
//     int n,i;

//     printf("Enter Size of Array: ");
//     scanf("%d",&n);

//     int a[n];
//     printf("Enter elements  of Array: ");
//     for(i=0;i<n;i++){
//     scanf("%d",&a[i]);
//     }
//     int l=0;
//     int h=n-1;
//     mergesort(a,l,h);
//     printf("Sorted Array: ");
//     for(i=0;i<n;i++){
//         printf("%d\t",a[i]);
//     }
// }

