import java.util.*;
class Insertion{
    public static void main(String arg[]){
        try {
            int n,i,j;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of array: ");
        n = sc.nextInt();
        long a[]=new long[n];
        System.out.print("Enter the Elements of array: ");
        for(i=0;i<n;i++){
            a[i]=sc.nextInt();
        }
        for(i=1;i<n;i++){
            long current=a[i];
            j=i-1;
            while(a[j]>current && j>=0){
                a[j+1]=a[j];
                j--;
            }
            a[j+1]=current;

        }
        System.out.println("Sorted Array: ");
        for(i=0;i<n;i++){
            System.out.print(a[i]+"\t");
        }

        } 
        catch (Exception e) {
            System.out.println(e);
        }
        
    }
}