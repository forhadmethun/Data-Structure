class Node:
    def __init__(self, data = None):
        self.data = data
        self.next = None


class LinkedList:

    def __init__(self):
        self.head = None

    def append(self, data):
        if self.head is None :
            self.head = Node(data)
        else:
            node = Node(data)
            node.next = self.head
            self.head = node


class LinkedListAdd:

    def __init__(self):
        pass

    def add_reverse(self, first_list, second_list):
        if first_list is None or second_list is None:
            return None
        return self._add_reverse(first_list, second_list, 0)

    def _add_reverse(self, first_node, second_node, carry):
        if first_node is None and second_node is None and not carry:
            return None
        value = carry
        value += first_node.data if first_node is not None else 0
        value += second_node.data if second_node is not None else 0
        carry = 1 if value >= 10 else 0
        value %= 10
        node = Node(value)
        node.next = self._add_reverse(
            first_node.next if first_node is not None else None,
            second_node.next if second_node is not None else None,
            carry

        )
        return node


if __name__ == '__main__':
    ll1 = LinkedList()
    ll1.append(5)
    ll1.append(7)
    ll1.append(6)

    ll2 = LinkedList()
    ll2.append(9)
    ll2.append(6)

    lla = LinkedListAdd()

    x = lla.add_reverse(ll1.head, ll2.head)

    print(x)
    """
    576
    +96
    ----
    672
    
    """

