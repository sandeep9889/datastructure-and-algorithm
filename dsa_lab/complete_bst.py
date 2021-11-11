
class Node:
    def __init__(self, key):
        self.left = None
        self.right = None
        self.val = key
 
 

def insert(root, key):
    if root is None:
        return Node(key)
    else:
        if root.val == key:
            return root
        elif root.val < key:
            root.right = insert(root.right, key)
        else:
            root.left = insert(root.left, key)
    return root
def printInorder(root):
 
    if root:
 
       
        printInorder(root.left)
 
        
        print( root.val ),
        
 
      
        printInorder(root.right)
 
 
    #      70
    #   /     \
    #  50        80
    #   /\      /  \
    #   30 60   75  85
# Driver code
# root = Node(70)
# root.left = Node(50)
# root.right = Node(80)
# root.left.left = Node(30)
# root.left.right = Node(60)
# root.right.left = Node(75)


r = Node(70)
r = insert(r, 50)
r = insert(r, 80)
r = insert(r, 30)
r = insert(r, 60)
r = insert(r, 75)
r = insert(r, 85)
printInorder(r)


 

 
