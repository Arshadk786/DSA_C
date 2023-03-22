import java.util.*;
class MergeSort{

    void Combine(int a[],int l,int mid,int h){
        int i=l;
        int j=mid+1;
        int k=l;
        int b[] = new int[100]; 
        while(i<=mid && j<=h){
            if(a[i]>a[j]){
                b[k]=a[j];
                k++;
                j++;
            }
            else{
                b[k]=a[i];
                k++;
                i++;
            }
            while(i<=mid){
                b[k]=a[i];
                k++;
                i++;
            }
            while(j<=h){
                b[k]=a[j];
                k++;
                j++;
            }
        }
        for(i=l;i<=h;i++){
            a[i]=b[i];
        }
    }

    void Divide(int a[],int l,int h){
        if(l<h){
          int mid = (l+h)/2;
          Divide(a, l, mid);
          Divide(a, mid+1, h);
          Combine(a, l, mid, h);
        }
    }

    public static void main(String ar[]){
        int n,i,l=0;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter size of Array: ");
        n = sc.nextInt();
        int a[] = new int[n];
        System.out.print("Enter Elements of Array: ");
        for(i=0;i<n;i++){
            a[i]=sc.nextInt();
        }
        MergeSort ms = new MergeSort();
        ms.Divide(a, l, n-1);
        System.out.print("Sorted List: ");
        for(i=0;i<n;i++){
            System.out.print("\t"+a[i]);
        }
    }
}