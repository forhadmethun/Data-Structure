package amazon.data_structures.tree;

public class BinaryTreeLeavesToDLL {
    static class Node{
        int data;
        Node prev;
        Node next;
        Node(int data){this.data = data;}
    }
    public static void main(String[] args) {
        Node root = new Node(7);
        Node l = new Node(4);
        Node ll = new Node(7);
        Node r = new Node(5);
        Node lr = new Node(8);

        root.prev = l;
        l.prev = ll;

        l.next = lr;

        root.next = r;

        Node head = allTreeNodeToDLL(root);

        printDLL(head);

    }

    private static void printDLL(Node head) {
        Node tempNode = head;
        while(tempNode!=null){
            System.out.println(tempNode.data);
            tempNode = tempNode.prev;
        }
    }

    private static Node allTreeNodeToDLL(Node root) {
        if(root == null) return root;
        if(root.prev == null && root.next == null){
            return createNewNode(root.data);
        }

        Node tempLeft = allTreeNodeToDLL(root.prev);
        Node tempRight = allTreeNodeToDLL(root.next);

        if(tempLeft == null) return tempRight;
        if(tempRight == null) return tempLeft;

        tempLeft.next = tempRight;
        tempRight.prev = tempLeft;

        return tempRight;
    }

    private static Node createNewNode(int data) {
        return new Node(data);
    }
}
