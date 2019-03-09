package amazon.data_structures.linked_list;

public class LoopDetectInLinkedList {
    static class Node{
        Node next;
        int data;
        Node(int data){
            this.data = data;
        }
    }

    static boolean hasLoop(Node node){
        if(node == null) return false;
        if(node.next == null) return false;
        Node slowNode = node;
        Node fastNode = node.next;
        while(true){

            if(slowNode == fastNode) return true;
            if(slowNode == null || fastNode == null) return false;
            if(slowNode.next ==null) return false;
            if(fastNode.next == null) return false;
            if(fastNode.next.next == null) return false;

            slowNode = slowNode.next;
            fastNode = fastNode.next.next;
        }
    }

    public static void main(String[] args) {
        Node head = new Node(1);
        Node node1 = new Node(2);
        Node node2 = new Node(3);
        Node node3 = new Node(5);

        head.next = node1;
        node1.next = node2;
        node2.next = node3;
        node3.next = node1;


        if(hasLoop(head)){
            System.out.println("The List contains loop");
        }else{
            System.out.println("The List doesn't contain loop.");
        }

    }
}
