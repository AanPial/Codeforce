import java.util.Arrays;
import java.util.Scanner;
public class Verify_Password {
    public static int serialTest(String st, String sd, String sch) {
        if ((sd + sch).equals(st)) {
            return 1;
        } else {
            return 0;
        }
    }
    public static int testCase(String sch) {
        String sp = sch.toLowerCase();
        if (sp.equals(sch)) {
            return 1;
        } else {
            return 0;
        }
    }
    public static int chekDigitOrder(String sd) {
        int n = sd.length();
        char temp;
        char[] ch1 = new char[n];
        for (int i = 0; i < n; i++) {
            ch1[i] = sd.charAt(i);
        }
        char[] ch = new char[n];
        for (int i = 0; i < n; i++) {
            ch[i] = sd.charAt(i);
        }
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (ch[i] > ch[j]) {
                    temp = ch[i];
                    ch[i] = ch[j];
                    ch[j] = temp;
                }
            }
        }
        if (Arrays.equals(ch, ch1)) {
            return 1;
        } else {
            return 0;
        }
    }
    public static int checkCharOrder(String sch) {
        int n = sch.length();
        char temp;
        char[] ch1 = new char[n];
        for (int i = 0; i < n; i++) {
            ch1[i] = sch.charAt(i);
        }
        char[] ch = new char[n];
        for (int i = 0; i < n; i++) {
            ch[i] = sch.charAt(i);
        }
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (ch[i] > ch[j]) {
                    temp = ch[i];
                    ch[i] = ch[j];
                    ch[j] = temp;
                }
            }
        }
        if (Arrays.equals(ch, ch1)) {
            return 1;
        } else {
            return 0;
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int M = sc.nextInt();
        sc.nextLine();
        for (int k = 0; k < M; k++) {
            int n = sc.nextInt();
            sc.nextLine();
            char[] str = new char[n];
            str = sc.next().toCharArray();
            sc.nextLine();
            String st = "";
            for (int i = 0; i < n; i++) {
                st += str[i];
            }
            String sd = "";
            String sch = "";
            for (int i = 0; i < st.length(); i++) {
                char c = st.charAt(i);
                if (Character.isDigit(c)) {
                    sd = sd + c;
                } else if (Character.isAlphabetic(c)) {
                    sch = sch + c;
                }
            }
            int ser = serialTest(st, sd, sch);
            int cas = testCase(sch);
            int cdo = chekDigitOrder(sd);
            int cco = checkCharOrder(sch);
            if (ser == 1 && cas == 1 && cdo == 1 && cco == 1) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }
}


