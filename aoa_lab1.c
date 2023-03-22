// #include<stdio.h>
// // void main(){
// //     int n,i,j;
// //     printf("Enter No of elements: ");
// //     scanf("%d",&n);
// //     int a[n];
// //     printf("Enter Elements of Array: ");
// //     for(i=0;i<n;i++){
// //         scanf("%d",&a[i]);
// //     }
// //     for(i=1;i<=n;i++){
// //         int cur=a[i];
// //         j=i-1;
// //         while(j>=0 && a[j]>cur){
// //             a[j+1]=a[j];
// //             j--;
// //         }
// //         a[j+1]=cur;
// //     }
// //     printf("Sorted Array : ");
// //     for(i=0;i<n;i++){
// //         printf("%d\t",a[i]);
// //     }
// // }


// // void main(){
// //     int n,i,j;
// //     printf("Enter No of elements: ");
// //     scanf("%d",&n);
// //     int a[n];
// //     printf("Enter Elements of Array: ");
// //     for(i=0;i<n;i++){
// //         scanf("%d",&a[i]);
// //     }
// //     for(i=0;i<n;i++){
// //         for(j=i+1;j<n;j++){
// //             if(a[i]>a[j]){
// //                 int temp;
// //                 temp=a[i];
// //                 a[i]=a[j];
// //                 a[j]=temp;
// //             }
// //         }
// //     }
// //     printf("Sorted Array : ");
// //     for(i=0;i<n;i++){
// //         printf("%d\t",a[i]);
// //     }
// // }


// // int BTS(int a[],int key,int n){
// //     int i;
// //     for(i=0;i<n;i++){
// //         if(a[i]==key){
// //             return i;
// //         }
// //     }return -1;
// // }
// // void main(){
// //     int i,j,n,key;
// //     printf("Enter No of elements: ");
// //     scanf("%d",&n);
// //     int a[n];
// //     printf("Enter Elements of Array: ");
// //     for(i=0;i<n;i++){
// //         scanf("%d",&a[i]);
// //     }
// //     printf("Enter key: ");
// //     scanf("%d",&key);
// //     printf("%d",BTS(a,key,n));
// // }



// // int merge(int a[],int l,int mid,int h){
// //     int i=l;
// //     int j=mid+1;
// //     int k=l;
// //     int b[50];
// //     while(i<=mid && j<=h){
// //         if(a[i]>a[j]){
// //             b[k]=a[j];
// //             k++;
// //             j++;
// //         }
// //         else{
// //             b[k]=a[i];
// //             k++;
// //             i++;
// //         }

// //     }
// //     while(i<=mid){
// //         b[k]=a[i];
// //         k++;
// //         i++;
// //     }
// //     while(j<=h){
// //         b[k]=a[j];
// //         k++;
// //         j++;
// //     }
// //     for(i=l;i<=h;i++){
// //         a[i]=b[i];
// //     }
// // return 0;
// // }

// // int mergesort(int a[],int l,int h){
// //     int mid;
// //     if(l<h){
// //         mid=(l+h)/2;
// //         mergesort(a,l,mid);
// //         mergesort(a,mid+1,h);
// //         merge(a,l,mid,h);
// //     }
// //     return 0;
// // } No of elements: ");
// //     scanf("%d",&

// // void main(){
// //     int n,i,l,h;
// //     printf("Entern);
// //     int a[n];
// //     printf("Enter Elements of Array: ");
// //     for(i=0;i<n;i++){
// //         scanf("%d",&a[i]);
// //     }
// //     l=0;
// //     h=n-1;
// //     mergesort(a,l,h);
// //     printf("Sorted Array: ");
// //     for(i=0;i<n;i++){
// //         printf("\t%d",a[i]);
// //     }

// // }

// //Binary Search
// // int Binary(int a[],int n,int key){
// //     int l=0,h=n-1;
// //     while(l<=h){
// //         int mid = (l+h)/2;
// //         if(a[mid]==key){
// //             return mid;
// //         }
// //         else if(a[mid]>key){
// //             h=mid-1;
// //         }
// //         else{
// //             l=mid+1;
// //         }
// //     }return -1;
// // }

// // void main(){
// //     int i,n,key;
// //     printf("Enter No of Elements: ");
// //     scanf("%d",&n);
// //     int a[n];
// //     printf("Enter elements: ");
// //     for(i=0;i<n;i++){
// //         scanf("%d",&a[i]);
// //     }
// //     printf("Enter Key: ");
// //     scanf("%d",&key);
// //     int ans = Binary(a,n,key);
// //     printf("Your Key  is found at Index %d",ans);
// // }

// //Knapsack

// void knapsack(int n,float w[],float p[],int cap){
//     int i,tp=0;
//     float x[n];
//     for(i=0;i<n;i++){
//         x[i]=0.0;
//     }

//     for(i=0;i<n;i++){
//         if(w[i]>cap){
//             break;
//         }
//         else{
//             x[i]=1.0;
//             cap = cap - w[i];
//             tp = tp + p[i];
//         }
//     }
//     if(i<n){
//         x[i]=cap/w[i];
//         tp = tp + (p[i]*x[i]);
//     }
//     printf("The Ratios are\t");
//     for(i=0;i<n;i++){
//         printf("%d\t",x[i]);
//     }
//     printf("Total Profit: %d",tp);

// }

// void main(){
//     int i,n,j;
//     float cap;
//     printf("Enter No of Objects: ");
//     scanf("%d",&n);
//     float w[n],p[n];
//     float ratio[n];
//     printf("Enter Weight and Its Profits: ");
//     for(i=0;i<n;i++){
//         scanf("%f%f",&w[i],&p[i]);
//         ratio[i]= p[i]/w[i];
//     }
//     printf("Enter Capacity: ");
//     scanf("%f",&cap);

//     for(i=0;i<n;i++){
//         for(j=i+1;j<n;j++){
//             if(ratio[j]>ratio[i]){
//                 int temp;
//                 temp=ratio[i];
//                 ratio[i]=ratio[j];
//                 ratio[j]=temp;

//                 temp=w[i];
//                 w[i]=w[j];
//                 w[j]=temp;

//                 temp=p[i];
//                 p[i]=p[j];
//                 p[j]=temp;
//             }
           
//         }
//     }
//     knapsack(n,w,p,cap);
    
// }

