class SetOfStacks:

    def __init__(self, capacity):
        self.stacks = []
        if capacity < 1:
            raise NameError("Capacity need to be positive number.")
        self.capacity = capacity

    def push(self, data):
        if not self.stacks:
            self.stacks.append([data])
        else:
            if len(self.stack[-1]) >= self.capacity:
                self.stacks.append([data])
            else:
                self.stacks[-1].append(data)

    def pop(self):
        if not self.stacks:
            raise NameError("Cannot pop from empty stack. ")
        else:
            data = self.stacks[-1][-1]
            if len(self.stacks[-1]) == 1:
                del self.stacks[-1]
            else:
                del self.stacks[-1][-1]

        return data

    #need to check this method
    #i think it should work
    def popAt(self, index):
        if not self.stacks:
            raise NameError("Cannot pop from empty stack. ")
        else:
            popped_data = self.stacks[index][-1]
            if len(self.stacks[index]) == 1:
                del self.stacks[index]
            else:
                for i in range(index, len(self.stacks) - 1):
                    #set the last item from next stacks
                    self.stacks[index][self.capacity-1] = self.stacks[index+1][0]
                    #after setting the last item from next stack
                    #shift all items by one
                    for j in range(1, self.capacity):
                        self.stacks[index+1][j-1] = self.stacks[index+1][j]
                del self.stacks[-1][-1]
                if not self.stacks[-1]:
                    del self.stacks[-1]

        return popped_data

