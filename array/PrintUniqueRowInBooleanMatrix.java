package amazon.data_structures.array;
import java.util.*;

public class PrintUniqueRowInBooleanMatrix {
    public static void main(String[] args) {
        int arr[][] = { {0, 1, 0, 0, 1},
                {1, 0, 1, 1, 0},
                {0, 1, 0, 0, 1},
                {1, 1, 1, 0, 0} };
        printUniqueRow(arr);
    }

    private static void printUniqueRow(int[][] arr) {
        HashSet<String> set = new HashSet();
        for(int i=0;i<arr.length;i++){
            String str = "";
            for(int j=0;j<arr[i].length;j++){
                str+=arr[i][j];
            }
            if(!set.contains(str)){
                set.add(str);
                System.out.println(str);
            }
        }
    }
}
