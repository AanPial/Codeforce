import java.util.*;
public class String_Task {
    public static void main(String []args){
        Scanner p=new Scanner(System.in);
        String str=p.next();
        str=str.toLowerCase();
        int n=str.length();

        StringBuilder strub = new StringBuilder(str);
        for(int i=0;i<n;i++)
        {
            char c= strub.charAt(i);
            if(c=='a' || c=='e'|| c=='i'||c=='o'|| c=='u'|| c=='y'||
                    c=='A' || c=='E'|| c=='I'||c=='O'|| c=='U'|| c=='Y')
            {
                strub.deleteCharAt(i);
                n--;
                i--;
            }

        }
        String s="";
        for (int i=0;i<n;i++){
            s+=".";
            s+=strub.charAt(i);
        }
        System.out.println(s);
    }
}
