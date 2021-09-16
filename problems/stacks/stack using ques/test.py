from queue import LifoQueue
stack =LifoQueue(maxsize=3)
print(stack.qsize)
stack.put('a')
stack.put('b')
stack.put('c')
print('full/:',stack.full())
print("size:",stack.qsize())
#here get menas to pop
stack.get()
stack.get()
stack.get()
print('empty:',stack.empty())
print('size:',stack.qsize())