import java.util.*;
public class Helpful_Maths {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String str=sc.next();
        int n = str.length();
        char temp;
        char []ch=new char[n];
        for (int i = 0; i < n; i++)
        {
            ch[i]=str.charAt(i);
        }
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                for (int j = i + 2; j < n; j=j+2)
                {
                    if (ch[i] > ch[j])
                    {
                        temp = ch[i];
                        ch[i] = ch[j];
                        ch[j] = temp;
                    }
                }
            }
        }
        System.out.println(ch);
    }
}
