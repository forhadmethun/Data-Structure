class Stack:

    def __init__(self):
        self.array = []

    def push(self, data):
        self.array.append(data)

    def pop(self):
        return self.array.pop()

    def shift(self, from_stack, to_stack):
        while len(from_stack.array) != 0:
            to_stack.array.append(from_stack.array.pop())


class QueueFromStack:

    def __init__(self):
        self.left_stack = Stack()
        self.right_stack = Stack()

    def enqueue(self, data):
        self.left_stack.push(data)

    def dequeue(self):
        self.left_stack.shift(self.left_stack, self.right_stack)
        peek_data = self.right_stack.pop()
        self.left_stack.shift(self.right_stack, self.left_stack)
        return peek_data


if __name__ == "__main__":
    queue = QueueFromStack()
    queue.enqueue(1)
    queue.enqueue(2)
    queue.enqueue(3)

    queue.dequeue()
    queue.enqueue(4)
