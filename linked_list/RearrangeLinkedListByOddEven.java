package amazon.data_structures.linked_list;

public class RearrangeLinkedListByOddEven {
    static class Node{
        int data;
        Node next;
        Node(int data){
            this.data = data;
        }
    }

    static void printList(Node head){
        Node tempNode = head;
        while(tempNode!=null){
            System.out.printf("%d ",tempNode.data);
            tempNode = tempNode.next;
        }
        System.out.println();
    }

    static Node getIntervalNode(Node node){
        if(node == null){
            return null;
        }
        else if(node.next == null) {
            return new Node(node.data);
        }
        Node newNode = new Node(node.data);
        newNode.next = getIntervalNode(node.next.next);
        return newNode;
    }

    static Node returnListByIntervalOne(Node oddNode,Node evenNode){
//        if(oddNode == null || oddNode.next == null) return oddNode;
//        oddNode.next = returnListByIntervalOne(oddNode.next.next);
        Node odd = getIntervalNode(oddNode);
        Node even = getIntervalNode(evenNode);

        Node tempOddNode = odd;
        while(tempOddNode.next!=null){
            tempOddNode = tempOddNode.next;
        }
        tempOddNode.next = even;

        return odd;
    }

    public static void main(String[] args) {
        Node head = new Node(1);
        head.next = new Node(2);
        head.next.next = new Node(3);
        head.next.next.next = new Node(4);
        head.next.next.next.next = new Node(5);
        head.next.next.next.next.next = new Node(6);

        printList(head);

        Node result = returnListByIntervalOne(head,head.next);

        printList(result);

//        Node oddNode = returnListByIntervalOne(head);
//        Node evenNode = returnListByIntervalOne(head.next);

//        printList(result);
//        printList(oddNode);
//        printList(evenNode);




    }
}
