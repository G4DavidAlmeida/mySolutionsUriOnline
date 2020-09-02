import java.util.Scanner;
import java.util.ArrayList;
import java.util.Locale;
import java.util.Collections;

public class App {

    public static void main(String[] args) {

        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);
        
        while (sc.hasNext()) {
            int n = sc.nextInt();

            ArrayList<Integer> arr = new ArrayList<>();

            int x, y;

            for(int i = 0; i < n; i++) {
                x = sc.nextInt();
                y = sc.nextInt();

                for (int j = x; j <= y; j++) arr.add(j);
            }

            Collections.sort(arr);

            int num = sc.nextInt();
            int start = 0, end = 0;
            boolean find = false;

            for (int i = 0; i < arr.size(); i++) {
                if(arr.get(i) == num) { 
                    start = i;
                    find = true; 
                    break;
                }
            }
            for (int i = arr.size()-1; i >= 0; i--) { 
                if(arr.get(i) == num) { 
                    end = i;
                    break;
                }
            }

            if(find) System.out.printf("%d found from %d to %d%n", num, start, end);
            else System.out.printf("%d not found%n", num);

        }
        
        sc.close();
    }
}