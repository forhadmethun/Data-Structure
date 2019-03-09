class Node:
    def __init__(self, data = None):
        self.data = data
        self.next = None
class CircularLinkList:
    def __init__(self):
        self.head = None
    
    def insert(self,data):
        self.newNode = Node(data)
        if(self.head == None):
            self.head = self.newNode
            self.head.next = self.head
            return 
        self.newNode.next = self.head.next
        self.head.next = self.newNode 
        self.head = self.newNode 
    def print(self):
        tempNode = self.head.next
        while tempNode.next is not self.head.next:
            print(tempNode.data)
            tempNode = tempNode.next

if __name__ == "__main__":
    c = CircularLinkList()
    c.insert(1)
    c.insert(2)
    c.insert(3)
    c.print()
