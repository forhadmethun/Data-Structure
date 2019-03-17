class Stacks:
    def __init__(self, num_stacks, stack_size):
        self.num_stacks = num_stacks
        self.stack_size = stack_size 
        self.stack_pointers = [-1] * num_stacks 
        self.stack_array = [None] * num_stacks * stack_size
    
    def abs_index(self, stack_index):
        return stack_index * self.stack_size +self.stack_pointers[stack_index]

    def push(self, stack_index, data):
        if self.stack_pointers[stack_index] == self.stack_size - 1:
            raise Exception("Stack is Full")
        self.stack_pointers[stack_index] += 1
        array_index = self.abs_index(stack_index)
        self.stack_array[array_index] = data

    def pop(self, stack_index):
        if self.stack_pointers[stack_index] == -1:
            raise Exception("Stack is Empty!") 
        array_index = self.stack_pointers[stack_index] 
        data = self.stack_array[array_index]
        self.stack_array[array_index] = None 
        self.stack_pointers[stack_index] -=1 
        return data


if __name__ == '__main__':
    stacks = Stacks(num_stacks=3, stack_size=3)
    stacks.push(0,0)
    stacks.push(0,2)
    
    # stacks.push(0,2)

    print(stacks.stack_array)

    stacks.push(2,2)
    print(stacks.stack_array)

    # stacks.push(0,2)


    # print ( array )
