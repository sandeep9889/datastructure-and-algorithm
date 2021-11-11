# Given a Singly Linked List of integers, delete all the alternate nodes in the list.
# Example:
# List: 10 -> 20 -> 30 -> 40 -> 50 -> 60 -> null
# Alternate nodes will be:  20, 40, and 60.

# Hence after deleting, the list will be:
# Output: 10 -> 30 -> 50 -> null

class node:
    def __init__(self,data):
        self.data = data
        self.next  = None

class linkedlist:
    def __init__(self,):

        self.head =None

if __name__ =="__main__":
    llist = linkedlist()
    llist.head = node(56)
    second = node(65)
    third = node(63)
    
    llist.head.next = second
    second.next =third
    print(linkedlist(llist))
