import java.util.*;
public class Bit {
    public String statement;

    public static void main(String[] args) {
        Scanner p=new Scanner(System.in);

        int n=p.nextInt();
        Bit []k=new Bit[n];
        int i,x=0;

        for (i=0;i<n;i++){
            k[i]=new Bit();
            k[i].statement=p.next();
        }

        for (i=0;i<n;i++){
            if (Objects.equals(k[i].statement, "x++") || Objects.equals(k[i].statement, "++x") || Objects.equals(k[i].statement, "X++") || Objects.equals(k[i].statement, "++X")){
                x++;
            } else if (Objects.equals(k[i].statement, "x--") || Objects.equals(k[i].statement, "--x") || Objects.equals(k[i].statement, "X--") || Objects.equals(k[i].statement, "--X")) {
                x--;
            }
        }
        System.out.println(x);
    }
}
