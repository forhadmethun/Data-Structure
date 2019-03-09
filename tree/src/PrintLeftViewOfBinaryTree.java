package amazon.data_structures.tree;

public class PrintLeftViewOfBinaryTree {
    static class Node{
        int data;
        Node left, right;
        Node(int data){
            this.data = data;
        }
    }

    public static void main(String[] args) {
        /*
             4
           /  \
         5    2
             / \
            3   1
           / \
          6  7

         */
        Node root = new Node(4);
        Node l = new Node(5);
        Node r = new Node(2);

        Node rl = new Node(3);
        Node rr = new Node(1);

        Node rll = new Node(6);
        Node rlr = new Node(7);

        root.left = l;
        root.right = r;

        r.left = rl;
        r.right = rr;


        rl.left = rll;
        rl.right = rlr;

        printLeftViewOfBinaryTree(root,1);


    }
    static int maxNode = 0;
    private static void printLeftViewOfBinaryTree(Node root,int level) {
        if(root == null) return;
        if(maxNode < level){
            System.out.printf(" %d",root.data);
            maxNode = level;// here we update the maxNode as only one node need to be printed for each level
        }
        // now call left subtree and right subtree recursively
        printLeftViewOfBinaryTree(root.left,level+1);
        printLeftViewOfBinaryTree(root.right,level+1);

    }
}
