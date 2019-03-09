public class BST {
    static class Node{
        int data;
        Node left;
        Node right;
        Node(int data){
            this.data = data;
        }
    }
    static void inOrder(Node node){
        if(node == null)return;
        inOrder(node.left);
        System.out.printf(" %d",node.data);
        inOrder(node.right);

    }


    static Node insert(Node root, int data){
        if(root == null)root = new Node(data);
        else if(data<=root.data)root.left= insert(root.left,data);
        else root.right =  insert(root.right,data);
        return root;
    }
    static boolean find(Node node,int data){
        if(node == null) return false;
        if(node.data == data)return true;
        else if(data< node.data)return find(node.left,data);
        else if(data>node.data)return find(node.right,data);
        return false;
    }
    static Node findMin(Node root){
        if(root == null){
            System.out.println("Empty tree!");
            return root;
        }
        while(root.left!=null){
            root = root.left;
        }
        return root;
    }
    static int findMinByRecursion(Node root){
        if(root == null){
            System.out.println("Empty tree!");
            return -1;
        }
        else if(root.left==null){
            return root.data;
        }
        return findMinByRecursion(root.left);

    }
    //not so efficient
    static boolean isBST(Node root){
        if(root==null) return true;
        if(isLeftSubTreeBST(root.left,root.data)
        && isRightSubTreeBST(root.right,root.data)
        && isBST(root.left)
        && isBST(root.right)){
            return true;
        }
        return false;
    }
    static boolean isLeftSubTreeBST(Node node,int data){
        if(node==null)return true;
        if(node.data<=data
        && isLeftSubTreeBST(node.left,data)
        && isLeftSubTreeBST(node.right,data)){
            return true;
        }
        return false;
    }
    static boolean isRightSubTreeBST(Node node,int data){
        if(node == null) return true;
        if(node.data>data
        && isRightSubTreeBST(node.left,data)
        && isRightSubTreeBST(node.right,data)){
            return true;
        }
        return false;
    }

    //more efficient
    static boolean isBST(Node root,int min, int max){
        if(root==null) return true;
        if(root.data > min
        && root.data < max
        && isBST(root.left,min,root.data)
        && isBST(root.right,root.data,max)){
            return true;
        }
        return false;
    }
    //another way to check if bst is that
    // call in order traversal and save all value in a list
    // check if the list is sorted
    // in order traversal provides a sorted list

    static Node deleteNode(Node root, int data){
        if(root == null)return root;
        //if to be deleted value is less than the root value then
        // delete the left subtree node and update left child of the
        // tree
        if(data < root.data){
            root.left = deleteNode(root.left,data);
        }
        else if(data > root.data){
            root.right = deleteNode(root.right,data);
        }
        else{
            //if one child
            if(root.left == null && root.right == null){
                root = null;
            }
            //if no left child
            else if(root.left==null){
                root = root.right;
            }
            //if no right child
            else if(root.right == null){
                root = root.left;
            }
            //if multiple child
            // find minimum of right subtree
            // update the root value with that minimum value
            // delete the  node of right subtree which contain minimum value
            else{
                root.data = findMin(root.right).data;
                root.right = deleteNode(root.right,root.data);
            }


        }
        return root;

    }


    public static void main(String[] args){
        Node root = null;
        root  = insert(root,3);
        root = insert(root,2);
        root = insert(root,1);

        if(find(root,2)){
            System.out.println("found " + 2);
        }


        if(find(root,20)){
            System.out.println("found " + 20);
        }else{
            System.out.println("not found " + 20);
        }
        Node minNode = findMin(root);

        int minByRecursion = findMinByRecursion(root);

        if(isBST(root)){
            System.out.println("Is a binary tree");
        }else{
            System.out.println("Not Binary Tree");
        }

        if(isBST(root,Integer.MIN_VALUE,Integer.MAX_VALUE)){
            System.out.println("Is a binary tree");
        }else{
            System.out.println("Not Binary Tree");
        }
        inOrder(root);System.out.println();
        root = deleteNode(root,1);
        inOrder(root);System.out.println();
        root = deleteNode(root,3);
        inOrder(root);System.out.println();


    }

}
