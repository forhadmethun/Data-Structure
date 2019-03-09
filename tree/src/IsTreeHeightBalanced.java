package amazon.data_structures.tree;

public class IsTreeHeightBalanced {
    public static void main(String[] args) {
        /*
                    1

                  2     3

               4            5

            6                   7
         */
        Node root = new Node(1);
        root.left = new Node(2);
        root.left.left = new Node(4);
        root.left.left.left = new Node(6);

        root.right = new Node(3);
        root.right.right = new Node(5);
//        root.right.right.right = new Node(7);

        if (isTreeHeightBalancedNaive(root)) {
            System.out.println("Naive Solution: Tree is height balanced!!");
        } else {
            System.out.println("Tree is not height balanced!!!");
        }

        if (isTreeHeightBalancedEfficient(root)) {
            System.out.println("Efficient: Tree is height balanced!!!");
        } else {
            System.out.println("Tree is not height balanced!!!");
        }
    }

    private static int height(Node root) {
        return (root == null) ? 0 : 1 + Math.max(height(root.left), height(root.right));
    }


    private static boolean isTreeBalanced(Node root, Height height) {
        if (root == null) {
            height.height = 0;
            return true;
        }
        Height leftSubtreeHeight = new Height();
        Height rightSubtreeHeight = new Height();

        boolean balanced = isTreeBalanced(root.left, leftSubtreeHeight)
                        && isTreeBalanced(root.right, rightSubtreeHeight);
        height.height = Math.max(leftSubtreeHeight.height, rightSubtreeHeight.height) + 1;
        return balanced && Math.abs(leftSubtreeHeight.height- rightSubtreeHeight.height)<=1;
    }

    private static boolean isTreeHeightBalancedEfficient(Node root) {
        Height height = new Height();
        return isTreeBalanced(root, height);
//        return false;
    }

    private static boolean isTreeHeightBalancedNaive(Node root) {
        return (root == null) ||
                (
                        (isTreeHeightBalancedNaive(root.left) && isTreeHeightBalancedNaive(root.right)) &&
                                (height(root.left) - height(root.right)) <= 1
                );
    }

    static class Height {
        int height;

        Height(int height) {
            this.height = height;
        }

        public Height() {
            this.height = 0;
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
