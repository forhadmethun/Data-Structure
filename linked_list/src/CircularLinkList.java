class Node {
    int data;
    Node next = null;

    Node(int data) {
        this.data = data;
    }
};

class CircularLinkList {
    Node head = null;

    CircularLinkList() {
    }

    void insert(int data) {
        Node newNode = new Node(data);
        if (head == null) {
            head = newNode;
            head.next = head;
            return;
        }

        newNode.next = head.next;
        head.next = newNode;
        head = newNode;
        // head = head.next;
    }

    void print() {
        Node tempNode = head.next;
        while (tempNode.next != head.next) {
            // cout << " " << tempNode.data << endl
            System.out.println(tempNode.data);
            tempNode = tempNode.next;
        }
        System.out.println(tempNode.data);
    }

    public static void main(String[] args) {
        // System.out.println("Hello Forhad!");
        CircularLinkList ll = new CircularLinkList();
        ll.insert(1);
        ll.insert(2);
        ll.insert(5);
        ll.print();
    }
}
