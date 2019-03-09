package amazon.data_structures.linked_list;

public class FlattenLinkedList {
    static class Node{
        int data;
        Node right, bottom;
        Node(int data){
            this.data = data;
            right = bottom = null;
        }
    }

    static void print(Node head){
        Node tempNode = head;
        while(tempNode!=null){
            System.out.println(tempNode.data);
            tempNode = tempNode.bottom;
        }
    }
    static Node merge(Node a, Node b){
        if(a == null) return b;
        if(b == null) return a;
        Node result = null;
        if(a.data < b.data){
//            result = merge();
//            a.bottom = b;
            result = a;
            result.bottom = merge(a.bottom,b);

        }else{
//            b.bottom = a;
//            result = merge();
            result = b;
            result.bottom = merge(a,b.bottom);
        }
        return result;
    }
    static Node flatten(Node node){
        if(node == null) return null;
        return merge(node, flatten(node.right));
    }


    public static void main(String[] args) {
        Node head = new Node(5);
        head.right = new Node(10);
        head.right.right = new Node(19);

        head.bottom = new Node(7);
        head.bottom.bottom = new Node(8);
        head.right.bottom = new Node(20);

        head.right.right.bottom = new Node(22);

//        print(head);
//
//        System.out.println("========================");
        Node flattenNode = flatten(head);

        print(flattenNode);


    }
}
