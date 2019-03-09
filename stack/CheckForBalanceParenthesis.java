package amazon.data_structures.stack;
import java.util.*;

public class CheckForBalanceParenthesis {
    public static void main(String[] args){
        String expr = "{()}[]()";
        if(areParenthesisBalanced(expr)){
            System.out.println("Balanced");
        }
        else{
            System.out.println("Not Balanced");
        }
    }

    private static boolean areParenthesisBalanced(String expr) {
        Stack<Character> stack = new Stack();
        boolean isBalanced = true;
        int length = expr.length();
        for(int i=0;i<length;i++){
            if(
                    expr.charAt(i) == '('
                    || expr.charAt(i) == '{'
                    || expr.charAt(i) == '['
            ){
                stack.push(expr.charAt(i));
            }
            else if(
                    expr.charAt(i) == ')'
                            || expr.charAt(i) == '}'
                            || expr.charAt(i) == ']'
            ){
                if(stack.isEmpty()){
//                    return false;
                    isBalanced = false;
                    break;
                }
                char stackTop = stack.pop(),top = expr.charAt(i);
                if(!(
                        stackTop == '(' && top == ')' ||
                        stackTop == '{' && top == '}' ||
                        stackTop == '[' && top == ']'
                )){
                    isBalanced = false;
                    break;
                }

            }
        }
        if(stack.size()>0)isBalanced = false;

        return isBalanced;
    }
}
