# MAX = 10
# class Deque:
# 	def init(self, size):
# 		self.arr = [0] * MAX
# 		self.front = -1
# 		self.rear = 0
# 		self.size = size
	
# 	# Checks whether Deque is full or not.
# 	def isFull(self):
# 		return ((self.front == 0 and self.rear == self.size-1) or self.front == self.rear + 1)
	
# 	# Checks whether Deque is empty or not.
# 	def isEmpty (self):
# 		return (self.front == -1)
	
# 	def insertfront(self, key):
# 		if (self.isFull()):
# 			print("Overflow")
# 			return
# 		if (self.front == -1):
# 			self.front = 0
# 			self.rear = 0
# 		elif (self.front == 0):
# 			self.front = self.size - 1 
# 		else: 
# 			self.front = self.front-1
# 		self.arr[self.front] = key 
	
	
# 	def insertrear(self, key):
# 		if (self.isFull()):
# 			print(" Overflow")
# 			return;
# 		if (self.front == -1):
# 			self.front = 0
# 			self.rear = 0
# 		elif (self.rear == self.size-1):
# 			self.rear = 0
# 		else:
# 			self.rear = self.rear+1
# 		self.arr[self.rear] = key 
	
	
# 	def deletefront(self):
# 		if (self.isEmpty()):
# 			print("Queue Underflow")
# 			return 
# 		if (self.front == self.rear):
# 			self.front = -1
# 			self.rear = -1
# 		else:
# 			if (self.front == self.size -1):
# 				self.front = 0
# 			else: # increment front by '1' to remove current
# 				self.front = self.front+1
	
	
# 	# Delete element at rear end of Deque
# 	def deleterear(self):
# 		if (self.isEmpty()):
# 			print(" Underflow")
# 			return 
# 		if (self.front == self.rear):
# 			self.front = -1
# 			self.rear = -1
# 		elif (self.rear == 0):
# 			self.rear = self.size-1
# 		else:
# 			self.rear = self.rear-1
	
	
# 	# Returns front element of Deque
# 	def getFront(self):
# 		if (self.isEmpty()):
# 			print("-1")
# 			return -1 
# 		return self.arr[self.front]
	
	
# 	# function return rear element of Deque
# 	def getRear(self):
# 		if(self.isEmpty() or self.rear < 0):
# 			print(" Underflow")
# 			return -1 
# 		return self.arr[self.rear]

# d = Deque()
# t = int(input())
# while t>0:
#     choice = int(input())
#     if choice==1:
#         val = int(input())
#         d.insertfront(val)
#     elif choice==2:
#         val = int(input())
#         d.insertrear(val)
#     elif choice==3:
#         d.deletefront()
#     elif choice==4:
#         d.deleterear()
#     elif choice==5:
#         d.getFront()
#     elif choice==6:
#         d.getRear()
#     t-=14



MAX = 10
class Deq:
    def init(self):
        self.arr = [0] * MAX
        self.front = -1
        self.rear = 0
        # self.size = size
	
	# Checks whether Deque is full or not.
    def isFull(self):
        return ((self.front == 0 and self.rear == self.size-1) or self.front == self.rear + 1)
	
	# Checks whether Deque is empty or not.
    def isEmpty (self):
        return (self.front == -1)
        
    def insertfront(self, key):
        if (self.isFull()):
            print("-1")
            return
        if (self.front == -1):
            self.front = 0
            self.rear = 0
        elif (self.front == 0):
            self.front = self.size - 1 
        else: 
            self.front = self.front-1
            self.arr[self.front] = key 
    
    def insertrear(self, key):
        if (self.isFull()):
            print("-1")
            return
        if (self.front == -1):
            self.front = 0
            self.rear = 0
        elif (self.rear == self.size-1):
            self.rear = 0
        else:
            self.rear = self.rear+1
        self.arr[self.rear] = key 
    
    def deletefront(self):
        if (self.isEmpty()):
            print("-1")
            return 
        if (self.front == self.rear):
            self.front = -1
            self.rear = -1
        else:
            if (self.front == self.size -1):
                self.front = 0
            else: # increment front by '1' to remove current
                self.front = self.front+1
	
	
	# Delete element at rear end of Deque
    def deleterear(self):
        if (self.isEmpty()):
            print("-1")
            return 
        if (self.front == self.rear):
            self.front = -1
            self.rear = -1
        elif (self.rear == 0):
            self.rear = self.size-1
        else:
            self.rear = self.rear-1
    
    def getFront(self):
        if (self.isEmpty()):
            print("-1")
            return  
        else:
            print(self.arr[self.front])
    
    def getRear(self):
        if(self.isEmpty() or self.rear < 0):
            print("-1, Underflow")
            return 
        print(self.arr[self.rear])

d = Deq()
choice = int(input(),base =base)
if choice==1:
    val = int(input())
    d.insertfront(val)
elif choice==2:
    val = int(input())
    d.insertrear(val)
elif choice==3:
    d.deletefront()
elif choice==4:
    d.deleterear()
elif choice==5:
    d.getFront()
elif choice==6:
    d.getRear()