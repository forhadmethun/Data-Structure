package amazon.data_structures.tree;
import java.util.Queue;
import java.util.LinkedList;
//idea: level order traversal
public class MaximumWidthOfBinaryTree {
    // node which contain's left side & right subtree

    static class Node{
        int data;
        Node left,right;
        Node(int data){this.data = data;}
    }
    static int maxWidth(Node root){
        // we maintained a queue
        Queue<Node> queue = new LinkedList();
        int width = 0;
//        push the root in the queue
        queue.add(root);
//        until queue is empty push all the children inside the queue
        while(!queue.isEmpty()){
            //find maximum width with checking maximum elements of queue
            width = Math.max(queue.size(),width);
            Node current = queue.poll();
            if(current.left!=null)queue.add(current.left);
            if(current.right!=null)queue.add(current.right);
        }
        //return width
        return width;
    }
    public static void main(String[] args){
               /*
               The following tree is used for demonstration purpose-


                           1
                      2        3
                    4    5    7     6 ( max width is 4)



         */

               //insert data inside the tree
        Node root = new Node(1);
        root.left = new Node(2);
        root.left.left = new Node(4);
        root.left.right = new Node(5);

        root.right = new Node(3);
        root.right.right = new Node(6);
        root.right.left = new Node(7);

        // the following maxWidth method is just modified version of level order traversal of tree
        int width = maxWidth(root);
        System.out.println(width);

    }
}
