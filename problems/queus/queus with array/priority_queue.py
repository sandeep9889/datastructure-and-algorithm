# Priority Queue implementation in Python


# Function to heapify the tree
def heapify(arr, n, i):
    # Find the largest among root, left child and right child
    largest = i
    l = 2 * i + 1
    r = 2 * i + 2
    #print("print l r",l,r)
    if l < n and arr[i] < arr[l]:
        #print("left node",arr[l])
        largest = l

    if r < n and arr[largest] < arr[r]:
        #print("right node",arr[r])
        largest = r

    # Swap and continue heapifying if root is not largest
    if largest != i:
        arr[i], arr[largest] = arr[largest], arr[i]
        heapify(arr, n, largest)


# Function to insert an element into the tree
def insert(array, newNum):
    size = len(array)
    if size == 0:
        array.append(newNum)
    else:
        array.append(newNum)
    for i in range((size // 2) - 1, -1, -1):
            heapify(array, size, i)


# Function to delete an element from the tree
def deleteNode(array, num):
    size = len(array)
    #i = 0
    for i in range(0, size):
        if num == array[i]:
            break
    #print(i)
    array[i], array[size - 1] = array[size - 1], array[i]

    del array[size - 1]

    for i in range((len(array) // 2) - 1, -1, -1):
        heapify(array, len(array), i)
def rootnode(array):
 print(array[0])
arr = []

insert(arr, 3)
insert(arr, 4)
# insert(arr, 9)
# insert(arr, 5)
# insert(arr, 2)
print("max heap",arr)
# deleteNode(arr,9)
# print("After deleting an element: ", arr)
# print("root node is:")
# rootnode(arr)

# Deque implementaion in python

class Deque:
    def __init__(self):
        self.items = []

    def isEmpty(self):
        return self.items == []

    def addRear(self, item):
        self.items.append(item)

    def addFront(self, item):
        self.items.insert(0, item)

    def removeFront(self):
        return self.items.pop(0)

    def removeRear(self):
        return self.items.pop()

    def size(self):
        return len(self.items)
    def printd(self):
      arr=[]
      for i in self.items:
        arr.append(i)
      print(arr)  



d = Deque()
print(d.isEmpty())
d.addRear(8)
d.addRear(5)
d.addFront(7)
d.addFront(10)
print(d.size())
print(d.isEmpty())
d.addRear(11)
print(d.removeRear())
print(d.removeFront())
d.addFront(55)
d.addRear(45)
print(d.items)