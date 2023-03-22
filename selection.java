import java.util.*;
public class selection {
    public static void main(String args[]){
        int n,i,j;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter size of Array: ");
        n = sc.nextInt();
        int a[]=new int[n];
        System.out.println("Enter Elements of Array: ");

        for(i=0;i<n;i++){
            a[i] = sc.nextInt();
        }
        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                if(a[j]<a[i]){
                    int temp;
                    temp = a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        System.out.print("Sorted Array: ");
        for(i=0;i<n;i++){
            System.out.print("\t"+a[i]);
        }

    }
}
