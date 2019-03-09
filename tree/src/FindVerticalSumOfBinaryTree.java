package amazon.data_structures.tree;

import java.util.HashMap;
import java.util.Iterator;
import java.util.SortedSet;
import java.util.TreeSet;

class FindVerticalSumOfBinaryTree {
    //check horizontal distances(HD) from root for all nodes
    // HD(root) = 0, if go left then -1, if go right then +1 
    // maintain a hashmap for HD corresponding to each vertical line

    public static void main(String[] args) {
        /*
                         1
                      2     3
                    4    5
                         7     6



         */
        Node root = new Node(1);
        root.left = new Node(2);
        root.left.left = new Node(4);
        root.left.right = new Node(5);

        root.right = new Node(3);
        root.right.right = new Node(6);
        root.right.left = new Node(7);

        HashMap<Integer, Integer> horizontalDistanceSumMap = new HashMap<Integer, Integer>();

        findVerticalSumOfBinaryTree(root, horizontalDistanceSumMap, 0);
        SortedSet<Integer> keys = new TreeSet<>(horizontalDistanceSumMap.keySet());
        keys.forEach(e->{
            System.out.printf(" %d",horizontalDistanceSumMap.get(e));
        });
//        horizontalDistanceSumMap.forEach((k,v)->{
//            System.out.printf(" %d",v);
//        });


    }

    static void findVerticalSumOfBinaryTree(Node node, HashMap<Integer, Integer> horizontalDistanceSumMap, int rootHD) {
        if (node == null) return;
        //if exists then add with existing value else just insert to the map
        if(horizontalDistanceSumMap.containsKey(rootHD))
        horizontalDistanceSumMap.put(rootHD, horizontalDistanceSumMap.get(rootHD).intValue() + node.data);
        else{
            horizontalDistanceSumMap.put(rootHD,node.data);
        }
        //check for the left subtree
        if (node.left != null) {
            findVerticalSumOfBinaryTree(node.left,horizontalDistanceSumMap,rootHD-1);
        }
        //check for the right subtree
        if (node.right != null) {
            findVerticalSumOfBinaryTree(node.right,horizontalDistanceSumMap,rootHD+1);

        }

//        horizontalDistanceSumMap.put(-1,2);
//        horizontalDistanceSumMap.put(-1,horizontalDistanceSumMap.get(-1).intValue()+1);
//        System.out.println(horizontalDistanceSumMap.get(-1).intValue());
    }

    static class Node {
        int data;
        Node left;
        Node right;
        Node(int data) {
            this.data = data;
        }
    }
}