import java.util.Queue;
import java.util.LinkedList;

public class TreeTraversal {
    static Node root;
    static class Node{
        int data;
        Node left;
        Node right;
        Node(int data){
            this.data = data;
        }
    }

    static void preOrder(Node node){
        if(node == null)return;
        System.out.printf(" %d",node.data);
        preOrder(node.left);
        preOrder(node.right);

    }
    static void postOrder(Node node){
        if(node == null)return;
        postOrder(node.left);
        postOrder(node.right);
        System.out.printf(" %d",node.data);

    }

    //inorder traversal of bst provides a sorted list
    static void inOrder(Node node){
        if(node == null)return;
        inOrder(node.left);
        System.out.printf(" %d",node.data);
        inOrder(node.right);

    }
    //# of link from that node to the leaf node
    static int height(Node node){
        if(node == null) return 0;
        else{
            int leftSubtreeHeight = height(node.left);
            int rightSubtreeHeight = height(node.right);
//            if(leftSubtreeHeight>rightSubtreeHeight){
//                return leftSubtreeHeight + 1;
//            }else{
//                return rightSubtreeHeight + 1;
//            }
            return Math.max(leftSubtreeHeight,rightSubtreeHeight)+1;
        }
        /*
                   1
                  /
                 2
                /
               3

             height(1):
                left = height(2)
                .            left = height(3)
                .            .          left = height(null)
                .            .          .     = 0
                .            .          right = height(null)
                .            .                = 0
                .            .     = 0 + 1
                .            .     =1
                .            right = height(null)
                .                  =0
                .    = 1+ 1
                .    = 2
                right = height(null)
                    = 0
                => 2+1
                => 3
         */

    }

    static void printByLevel(Node node, int level){
        if(node == null) return;
        if(level == 1){
            System.out.printf(" %d",node.data);
        }else{
            printByLevel(node.left,level-1);
            printByLevel(node.right,level-1);
        }
        /*
                    1
                   /
                  2
                 / \
                3  4

          printByLevel(n1,1)
          .  *print -> 1* as level == 1
          printByLevel(n1,2)
          .  printByLevel(n2, 1)
          .      *print -> 2*
          .  printByLevel(null,1)
          printByLevel(n1,3)
          .  printByLevel(n2,2)
          .  .    printByLevel(n3, 1)
          .  .    .    *print -> 3*
          .  .    printByLevel(n4, 1)
          .  .        *print -> 4*
          .  printByLevel(null,2)
          printByLevel(null,3)


         */
    }
    static void printLevelOrder(){
        int height = height(root);
        for(int i=1;i<=height;i++){
            printByLevel(root,i);
        }
    }
    static void printLevelOrderByQueue(){
        Queue<Node> queue = new LinkedList<Node>();
        queue.add(root);
        while(!queue.isEmpty()){
            Node currentNode = queue.poll();
            System.out.printf(" %d",currentNode.data);
            if(currentNode.left!=null)queue.add(currentNode.left);
            if(currentNode.right!=null)queue.add(currentNode.right);
        }
    }

    public static void main(String[] args) {
        root = new Node(1);
        root.left = new Node(2);
        root.right = new Node(3);

        root.left.left = new Node(4);
        root.left.right = new Node(5);

        root.right.left = new Node(6);
        root.right.right = new Node(7);
        /*
                    1
                  2   3
                4  5 6  7



         */

        preOrder(root);System.out.println();
        inOrder(root); System.out.println();
        postOrder(root);System.out.println();
        printLevelOrder();System.out.println();

        printLevelOrderByQueue();System.out.println();




    }
}
