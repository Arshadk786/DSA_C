import java.util.*;
class Prim_Algo {
    public static void main(String ar[]){
        int i,j,n;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter No of Edges: ");
        n=sc.nextInt();
        int a[][]=new int[n][n];
        System.out.print("Enter Elements of Matrix:  ");
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                a[i][j]=sc.nextInt();
            }
        }

        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                System.out.print(a[i][j]+"\t");
            }
            System.out.println();

        }

    }
}
