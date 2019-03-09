package amazon.data_structures.tree;

public class CheckIfBinarySearchTree {
    static class Node{
        int data;
        Node left;
        Node right;
        Node(int data){this.data = data;}
    }

    static boolean isBST(Node root,int min, int max){
        if(root == null) return true;
        if(root.data> min && root.data <max){
            return isBST(root.left,min, root.data) && isBST(root.right,root.data, max);
        }
        return false;
    }

    public static void main(String[] args){
        Node root = new Node(5);
        Node left = new Node(3);
        Node right = new Node(8);

        root.left = left;
        root.right = right;

        Node ll = new Node(1);
        Node lr = new Node(4);

        root.left.left = ll;
        root.left.right = lr;

        if(isBST(root,Integer.MIN_VALUE, Integer.MAX_VALUE)){
            System.out.println("Binary Search Tree");
        }
        else{
            System.out.println("Not a Binary Search Tree");
        }



    }
}
