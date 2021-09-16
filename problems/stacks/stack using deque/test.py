from collections import deque
stack= deque()
#it isn for appending
stack.append('a')
stack.append('b')
stack.append('c')
print("initial stack")
print(stack)
# for pop
print(stack.pop()) # lifo principle then c will remove
print(stack.pop())#remove b
print(stack.pop())# remove c

