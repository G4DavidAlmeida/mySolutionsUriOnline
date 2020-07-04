import java.io.IOException;
import java.util.*;
 
public class Main {
    
    public static void main(String[] args) throws IOException {
        Stack<Character> s = new Stack<>();

        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        while (sc.hasNext()) {
            String exp = sc.next();
            boolean crash = false;

            for (int i = 0; i < exp.length(); i++) {
                if (exp.charAt(i)=='(') { s.push(exp.charAt(i)); }
                if (exp.charAt(i)==')') {
                    if (s.isEmpty()) {
                        crash = true;
                        break;
                    } else s.pop(); 
                }
            }
            if (crash || !s.isEmpty()) System.out.println("incorrect");
            else System.out.println("correct");
            s.clear();
        }
        
        sc.close();
    }
 
}
/*

a+(b*c)-2-a 
(a+b*(2-c)-2+a)*2 
(a*b-(2+c)
2*(3-a))
)3+b*(2-c)(

*/