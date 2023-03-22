import java.util.*;
class demo{
    int Linear(int a[],int n,int key){
        for(int i=0;i<n;i++){
            if(a[i]==key){
                return i;
            }
        }return -1;
    }
}
public class LinearSearch {

   
    public static void main(String arg[]){
        int n,i,key,ans;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of array: ");
        n=sc.nextInt();
        int a[] = new int[n];
        System.out.print("Enter the Elements of array: ");
        for(i=0;i<n;i++){
            a[i]=sc.nextInt();
        }
        System.out.print("Enter key Element: ");
        key = sc.nextInt();
        demo obj = new demo();
        ans = obj.Linear(a, n, key);
        System.out.print("Your Key is at "+ans);


    }
}
