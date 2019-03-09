package amazon.data_structures.linked_list;

public class FindMiddleOfLinkedList {
    static class Node{
        int data;
        Node next;
        Node (int data){
            this.data = data;
        }
    }

    static void print(Node head){
        Node tempNode = head;
        while(tempNode!=null){
            System.out.printf(" %d",tempNode.data);
            tempNode = tempNode.next;
        }
    }

    public static void main(String[] args) {
        Node head = new Node(1);
        Node child1 = new Node(2);
        Node child2 = new Node(3);
        Node child3 = new Node( 4);
        Node child4 = new Node(5);

        head.next = child1;
        child1.next = child2;
//        child2.next = child3;
//        child3.next = child4;

//        print(head);
        int middle = middleOfLinkedList(head);
        System.out.println(middle);
    }

    // I didn't check few corner cases
    // Those cases should be checked
    // for example, if the list contains only one element or two element
    // those cases should be checked!!
    private static int middleOfLinkedList(Node head) {
        Node slow = head;
        Node fast = head;
        while(fast!=null){
            if(fast.next == null) break;
            slow = slow.next;
            fast = fast.next.next;
        }
        return slow.data;
    }
}
