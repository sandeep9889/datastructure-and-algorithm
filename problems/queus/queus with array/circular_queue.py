# Circular Queue implementation in Python


class MyCircularQueue():

    def __init__(self, k):
        self.k = k
        self.queue = [None] * k
        self.head = self.tail = -1

    # Insert an element into the circular queue
    def enqueue(self, data):

        if ((self.tail + 1) % self.k == self.head):
            print("The circular queue is full\n")
            print("indices queue is full",self.head,self.tail)
        elif (self.head == -1):
            self.head = 0
            self.tail = 0
            self.queue[self.tail] = data
            print("indeices when 1st element input ",self.head,self.tail)
        else:
            self.tail = (self.tail + 1) % self.k
            self.queue[self.tail] = data
            #print("rashi")
            print("indices when circular motion",self.head,self.tail)

    # Delete an element from the circular queue
    def dequeue(self):
        if (self.head == -1):
            print("The circular queue is empty\n")
            print("deque indices when empty",self.head,self.tail)
        elif (self.head == self.tail):
            temp = self.queue[self.head]
            self.head = -1
            self.tail = -1
            print("deque indices when last element dequed",self.head,self.tail)
            return temp
        else:
            temp = self.queue[self.head]
            self.head = (self.head + 1) % self.k
            print("deque indices",self.head,self.tail)
            return temp

    def printCQueue(self):
        if(self.head == -1):
            print("No element in the circular queue")
            #print(self.head,self.tail)
        elif (self.tail >= self.head):
            for i in range(self.head, self.tail + 1):
                print(self.queue[i], end=" ")
                #print(self.head,self.tail)
            print()
        else:
            for i in range(self.head, self.k):
                #print(self.head,self.tail)
                print(self.queue[i], end=" ")
                #print("rashi")
            for i in range(0, self.tail + 1):
                print(self.queue[i], end=" ")
                #print(self.head,self.tail)
            print()


# Your MyCircularQueue object will be instantiated and called as such:
obj = MyCircularQueue(5)
obj.printCQueue()
obj.dequeue()
obj.enqueue(1)
print("one element queue:")
obj.printCQueue()
obj.enqueue(2)
obj.enqueue(3)
obj.enqueue(4)
obj.enqueue(5)
obj.enqueue(5)
print("Initial queue0:")
obj.printCQueue()
obj.dequeue()
print("Initial queue1:")
obj.printCQueue()
obj.dequeue()
print("Initial queue2:")
obj.printCQueue()
obj.enqueue(5)
print("Initial queue3:")
obj.printCQueue()
obj.dequeue()
print("Initial queue4:")
obj.printCQueue()
obj.enqueue(5)
print("Initial queue5:")
obj.printCQueue()
obj.dequeue()
print("Initial queue6:")
obj.printCQueue()
obj.dequeue()
print("Initial queue7:")
obj.printCQueue()
obj.dequeue()
print("Initial queue8:")
obj.printCQueue()
obj.dequeue()
print("Initial queue9:")
obj.printCQueue()
obj.enqueue(5)
print("Initial queue10:")
obj.printCQueue()
