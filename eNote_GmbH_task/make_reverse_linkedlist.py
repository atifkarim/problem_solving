# Node class  
class Node: 
  
    # Constructor to initialize the node object 
    def __init__(self, data):
        self.data = data
        self.next = None
  
class LinkedList: 
  
    # Function to initialize head 
    def __init__(self): 
        self.head = None

    # fucntion to add node at the beginning

    def push(self, new_data):
        new_node = Node(new_data)
        new_node.next = self.head
        self.head = new_node
  
    # helper function to display the LinkedList
    def printList(self): 
        temp = self.head 
        while(temp): 
            print (temp.data)
            temp = temp.next

llist = LinkedList()

# test code to check the above class

def make_list(given_range, llist):
    given_list = []
    a=0
    b=0
    c=1
    d=0

    given_list.append(b)
    given_list.append(c)
    while (a<(given_range-2)):
        d = b+c
        given_list.append(d)
        # llist.push(d)
        b=c
        c=d
        a+=1
    
    for i in given_list:
        llist.push(i)
    
    return llist

print("please give the highest limit to make fibonacci series: ")
limit = int(input())
llist = make_list(limit, llist)
print ("Reverse Linked List")
llist.printList()