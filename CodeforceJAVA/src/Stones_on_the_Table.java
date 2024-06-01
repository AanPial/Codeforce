import java.util.Scanner;

public class Stones_on_the_Table {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int c = 0;
        String stones = sc.next();
        if(stones.length()>n)
        {
            throw new RuntimeException();
        }

        for (int i = 0; i < n - 1; i++) {
            if (stones.charAt(i) == stones.charAt(i + 1)) {
                c++;
            }
        }

        System.out.printf("%d", c);
    }
}
