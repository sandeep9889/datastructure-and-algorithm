
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
