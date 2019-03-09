package amazon.data_structures.string;

public class ReverseStringByWords {
    public static void main(String[] args) {
        String str ="My name is Khan";
        reverse(str);
    }

    public static void reverse(String str){
        String[] tempString = str.split(" ");
        for(int i = tempString.length-1; i >= 0; i--){
            System.out.printf("%s ",tempString[i]);
        }
    }
}
