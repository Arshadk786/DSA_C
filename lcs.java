import java.util.*;
class lcs{

    int max(int a ,int b){
        if(a>b){
            return a;
        }
        else{
            return b;
        }
    }

    int longest(char[] X,char[] Y,int m,int n){
        int i,j;
        int l[][]=new int [m+1][n+1];
        lcs ob = new lcs();

        for(i=0;i<m;i++){
            l[i][0]=0;
        }
        for(j=0;j<n;j++){
            l[0][j]=0;
        }

        for(i=1;i<m;i++){
            for(j=1;j<m;j++){
                if(X[i-1]==Y[j-1]){
                    l[i][j]= l[i-1][j-1]+1;
                }
                else{
                    l[i][j]=ob.max(l[i-1][j],l[i][j-1]);
                }
            }
        }
        return l[m][n];
    }
    public static void main(String arg[]){
        int m,n;
        String s1;
        String s2;
        
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Sequence 1: ");
        s1 = sc.nextLine();

        System.out.println("Enter Sequence 2: ");
        s2 = sc.nextLine();

        char X[]= new char[20];
        X = s1.toCharArray();
        char Y[]= new char[20];;
        Y= s2.toCharArray();

        m = s1.length();
        n = s2.length();
        
        lcs ob= new lcs();
        System.out.println("The Longest Common Subsequence : "+ob.longest(X, Y, m, n));

    }
}