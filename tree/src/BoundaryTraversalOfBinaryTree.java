package amazon.data_structures.tree;

public class BoundaryTraversalOfBinaryTree {

    // tree node contains left side and right side child reference
    static class Node{
        int data;
        Node left,right;
        Node(int data){
            this.data = data;
        }

    }
    public static void main(String[] args) {
        /*
                      20
                   /       \
                  8           22
                 / \         /  \
               4     12     24   25
                    / \    /  \
                    10 14  4   11

         */

        Node root = new Node(20);
        Node l = new Node(8);

        Node ll = new Node(4);
        Node lr = new Node(12);

        Node lrl = new Node(10);
        Node lrr = new Node(14);

        Node r = new Node(22);
        Node rr = new Node(25);

        Node rl = new Node(24);
        Node rll = new Node(4);
        Node rlr = new Node(11);

        root.left = l;

        l.left = ll;
        l.right = lr;

        lr.left = lrl;
        lr.right = lrr;

        root.right = r;

        r.left = rl;
        r.right = rr;

        rl.left = rll;
        rl.right = rlr;


        printBoundaryOfTreeAntiClockWise(root);




    }

    private static void printBoundaryOfTreeAntiClockWise(Node root) {
        printLeftPortion(root);
        printMiddlePortion(root);
        printRightPortion(root);
    }

    //right portion is almost same as left portion
    // but the recursion call will be called first
    // as the numbers should be in reverse order
    // to maintain the anti-clockwise condition
    private static void printRightPortion(Node root) {
        if(root == null) return;
        if(root!=null)if(root.left == null && root.right == null) return;
        printRightPortion(root.right);
        System.out.printf(" %d",root.data);
    }

    //two recursive call
    // one for left subtree
    // another for right subtree
    // print the data which doesn't have any child (these are the leaves)
    private static void printMiddlePortion(Node root) {
        if(root == null) return;
        if(root.left == null && root.right == null){
            System.out.printf(" %d",root.data);
            return;
        }
        printMiddlePortion(root.left);
        printMiddlePortion(root.right);
    }

    //left portion
    // print first
    //then recursively call left subtree
    private static void printLeftPortion(Node root) {
        if(root == null) return;
        if(root!=null)if(root.left == null && root.right == null) return;
        System.out.printf(" %d",root.data);
        printLeftPortion(root.left);
    }
}
