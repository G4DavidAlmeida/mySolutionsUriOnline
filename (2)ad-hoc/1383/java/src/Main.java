import java.io.IOException;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {

    Scanner sc = new Scanner(System.in);

    int times = sc.nextInt();

    for (int repeat = 0; repeat < times; repeat++) {
        boolean test = true;
        Main game = new Main();

        for (int i = 0; i < 9; i++)
            for (int j = 0; j < 9; j++)
                game.matrix[i][j] = sc.nextInt();
        
        System.out.println("Instância " + (repeat + 1));
            if(!game.verifyAll()) test = false;

        if(!test) System.out.println("NAO");
        else System.out.println("SIM");

        System.out.println();
    }
        sc.close();
}

    public int[][] matrix = new int[9][9];

    public boolean verifyAll () {
        for (int i = 0; i < 9; i++)
            for (int j = 0; j < 9; j++) {
                if (!this.verifyAllColluns(i, j)) return false;
        
                if (!this.verifyAllRows(i, j)) return false;
            }

        if (!this.verifyIndividualTable()) return false;

        return true;
    }

    public boolean verifyAllColluns(int l, int c) {
        int aux = this.matrix[l][c];
        for (int i = l+1; i < 9; i ++) {
            if(aux == matrix[i][c]) return false;
        }
        return true;
    } 

    public boolean verifyAllRows (int l, int c) {
        int aux = matrix[l][c];
        for (int j = c+1; j < 9; j ++){
            if(aux == matrix[l][j]) return false;
        }
        
        return true;
    }
    public boolean verifyIndividualTable () {
        for (int i = 0; i < 9; i += 3)
            for (int j = 0; j < 9; j+= 3)
                if (!verify3x3(i, j)) return false;

        return true;
    }
    public boolean verify3x3 (int i0, int j0) {
        ArrayList<Integer> arr = new ArrayList<>();

        for (int i = i0; i < i0 + 3; i++)
            for (int j = j0; j <j0 + 3; j++) {
                if (arr.contains(this.matrix[i][j])) return false;
                else arr.add(this.matrix[i][j]);
            }
        return true;
    }
}