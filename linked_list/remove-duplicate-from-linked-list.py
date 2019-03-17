class Node:
    def __init__(self,data):
        self.data = data 
        self.next = None


class LinkedList:

    def __init__(self):
        self.head = None 
    
    def append(self, data):
        new_node = Node(data)
        new_node.next = self.head 
        self.head = new_node

    def print_ll(self):
        print ('===============start================')
        temp_node = self.head
        while temp_node is not None:
            print(temp_node.data)
            temp_node = temp_node.next
        print ('================end===============')

    def remove_duplicate(self):
        s = set()
        temp_node = self.head 
        while temp_node is not None:
            if temp_node.data in s:
                prev_node.next = temp_node.next
                temp_node = prev_node
                # print (temp_node.data)
            s.add(temp_node.data)
            prev_node = temp_node
            temp_node = temp_node.next


if __name__ == '__main__':
    ll = LinkedList() 
    ll.append(1)
    # ll.append(3)
    ll.append(5)
    ll.append(7)
    # ll.append(9)

    ll.append(5)
    ll.append(1)
    ll.print_ll()
    ll.remove_duplicate()
    ll.print_ll()
    # x = 0



