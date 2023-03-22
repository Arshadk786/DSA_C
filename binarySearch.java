import java.util.*;
class binarySearch{
    int  binary(int a[],int n,int key){
        int l,h,mid;
        l=0;
        h=n;
        while(l<=h){
            mid = (l+h)/2;
            if(a[mid]<key){
                l=mid+1;
            }
            else if(a[mid]==key){
                return mid;
            }
            else{
                h=mid-1;
            }
        }
        return -1;

    }
    public static void main(String args[]){
        int n,i,key;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Size of Array: ");
        n=sc.nextInt();
        System.out.print("Enter Elements of Array: ");
        int a[]=new int[n];
        for(i=0;i<n;i++){
            a[i]=sc.nextInt();
        }
        System.out.print("Enter Key: ");
        key = sc.nextInt();
        binarySearch ob=new binarySearch();
        int ans = ob.binary(a, n, key);
        System.out.print("Your key is present at "+ans+" Index.");

    }
}