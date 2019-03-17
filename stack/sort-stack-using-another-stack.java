/**
 * Sort a stack with another stack
 */
import java.util.Stack;
class Q3_5{
    public static Stack<Integer> sortStackWithOnlyOneTemporaryStack(Stack<Integer> stack){
        Stack temporaryStack = new Stack<Integer>();

        while(!stack.isEmpty()){
            int temp = stack.pop();
            while(!temporaryStack.isEmpty()){
                if(temp < (int)temporaryStack.peek()){

                    stack.push((Integer)temporaryStack.pop());
                }else{
                    break;
                }
            }
            temporaryStack.push(temp);
        }
        return temporaryStack;
    }
    public static void main(String[] args){
        Stack stack  = new Stack<Integer>();
        stack.push(5);
        stack.push(7);
        stack.push(0);
        stack.push(3);
        stack.push(2);
        stack.push(1);

        Stack sortedStack = sortStackWithOnlyOneTemporaryStack(stack);
        sortedStack.stream().forEach(System.out::println);
    }
}
