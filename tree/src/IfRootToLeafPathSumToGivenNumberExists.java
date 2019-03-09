package amazon.data_structures.tree;

import java.util.ArrayList;

public class IfRootToLeafPathSumToGivenNumberExists {
    // node of tree
    static class Node{
        int data;
        Node left;
        Node right;
        Node(int data){
            this.data = data;
        }
    }
    public static void main(String[] args) {
        /*
        // we'll use the following tree for demonstration
                10
               /    \
              8       2
             / \     /
            3    5   2
                 /
                7

         */

        // create the tree with the following values
        Node root = new Node(10);
        Node l = new Node(8);
        Node ll = new Node (3);
        Node lr = new Node(5);

        Node lrl = new Node(7);
        lr.left = lrl;

        Node r = new Node(2);
        Node rl = new Node(2);

        root.left = l;
        l.left = ll;
        l.right = lr;

        root.right = r;
        r.left = rl;

        if(isRootToLeafPathSumToGivenNumberExists(root,30)){
            System.out.println("Exists");
        }else{
            System.out.println("Not Exists!!");
        }
    }

    private static boolean isRootToLeafPathSumToGivenNumberExists(Node root, int sum) {
        boolean ans = false;

        int currentSum = sum - root.data;
        if(currentSum == 0 && root.left == null && root.right == null) return true;
        if(root.left!=null) ans = ans || isRootToLeafPathSumToGivenNumberExists(root.left,currentSum);
        if(root.right!=null) ans = ans || isRootToLeafPathSumToGivenNumberExists(root.right,currentSum);

        return ans;

    }
}
