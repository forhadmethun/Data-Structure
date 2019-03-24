"""
Algorithm:

if node has right subtree, return the left-most node of the right subtree
else, go up until find parent that's data greater than child

"""

class BSTSuccessor:
    def get_next(self, node):
        if node is None:
            raise TypeError("node cannot be None")
        if node.right is not None:
            return self._left_most(node.right)
        else:
            return self._next_ancestor(node)
    
    def _left_most(self, node):
        if node.left is not None:
            return self._left_most(node.left)
        else:
            return node.data
    def _next_ancestor(self, node):
        if node.parent is not None:
            if node.parent.data > node.data:
                return node.parent.data
            else:
                return self._next_ancestor(node.parent)
        return None 


    
