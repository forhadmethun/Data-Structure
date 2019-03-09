package amazon.data_structures.tree;

//import static jdk.nashorn.internal.objects.Global.print;

public class ConvertBinaryTreeToDLL {
    static Node head = null;
    static Node prev = null;

    public static void main(String[] args) {
        Node root = new Node(12);
        root.left = new Node(25);
        root.right = new Node(30);

        convertBinaryTreeToDLL(root);
        print(head);
        int x= 0;

    }

    private static void convertBinaryTreeToDLL(Node root) {
        if(root == null) return;
        convertBinaryTreeToDLL(root.left);
        if(prev == null){
            head = root;
        }else{
            root.left = prev;
            prev.right = root;
        }
        prev = root;
        convertBinaryTreeToDLL(root.right);
    }
    static void print(Node head){
        Node tempNode = head;
        while(tempNode!=null){
            System.out.println(" " + tempNode.data);
            tempNode = tempNode.right;
        }
    }

    static class Node {
        int data;
        Node left, right;

        Node(int data) {
            this.data = data;
        }
    }
}
