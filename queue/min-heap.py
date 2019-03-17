class MinHeap:
    def __init__(self):
        self.array = []
    
    def __len__(self):
        return len(self.array)
    
    def extract_min(self):
        if not self.array:
            return None
        if len(self.array) == 1:
            return self.array.pop(0)             
        minimum = self.array[0]
        self.array[0] = self.array.pop(len(self.array)-1)       
        self._bubble_down(index = 0)
        return minimum
    
    def insert(self, key):
        self.array.append(key)
        self._bubble_up(index=len(self.array) - 1)
        
    def peek(self):
        return self.array[0] if self.array else None
    
    def _bubble_up(self, index):
        if(index == 0):
            return 
        parent_index = (index - 1 ) // 2
        if(self.array[index] < self.array[parent_index]):
            self.array[index], self.array[parent_index] = \
                self.array[parent_index], self.array[index]
            self._bubble_up(parent_index)
            
    def _bubble_down(self, index):
        min_child_index = self._find_smaller_child(self)
        if(min_child_index == -1):
            return
        if(self.array[index] > self.array[min_child_index]):
            self.array[index], self.array[min_child_index] = \
                self.array[min_child_index], self.array[index]
            self._bubble_down(min_child_index)
        
    def _find_smaller_child(self, index):
        left_child_index = 2 * index + 1
        right_child_index = 2 * index + 2
        if(right_child_index >= len(self.array)):
            if(left_child_index >= len(self.array)):
                return -1
            else:
                return left_child_index
        else:
            if(self.array[left_child_index] < self.array[right_child_index]):
                return left_child_index
            else:
                return right_child_index
    
    
        
if __name__ == '__main__':
    heap = MinHeap()
    heap.insert(10)
    heap.insert(25)
    heap.insert(5)
    heap.insert(8)
    heap.insert(30)
    heap.insert(7)
    heap.insert(3)

    
    print(heap.array)        
