class Node:
    def __init__(self, data, next = None):
        self.data = data
        self.next = next


class Stack:

    def __init__(self, top = None):
        self.top = top

    def push(self, data):
        self.top = Node(data, self.top)

    def pop(self):
        if self.top is None:
            return None
        data = self.top.data
        self.top = self.top.next
        return data

    def peek(self):
        if self.top is None:
            return self.top
        return self.top.data

    def is_empty(self):
        return self.top is None

if __name__ == "__main__":
    stack = Stack()
    stack.push(4)
    stack.push(3)
    peek  = stack.peek()
    stack.pop()
    print( peek )
    peek  = stack.peek()
    print( peek )
