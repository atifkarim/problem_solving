'''
a=0
b=0
c=1
d=0

my_list = []
my_list.append(b)
my_list.append(c)
while (a<98):
    d = b+c
    my_list.append(d)
    b=c
    c=d
    a+=1

print(len(my_list))

for i in my_list:
    print(i)

'''

# Python program to reverse a linked list  
# Time Complexity : O(n) 
# Space Complexity : O(1) 
  
# Node class  
class Node: 
  
    # Constructor to initialize the node object 
    def __init__(self, data):
        # print("from init Node: ", data)
        self.data = data 
        # print("self.data: ",self.data)
        self.next = None
  
class LinkedList: 
  
    # Function to initialize head 
    def __init__(self): 
        self.head = None
  
    # Function to reverse the linked list 
    def reverse(self): 
        prev = None
        current = self.head 
        while(current is not None): 
            next = current.next
            current.next = prev
            prev = current
            current = next
        self.head = prev
          
    # Function to insert a new node at the beginning 
    def push(self, new_data):
        # print("new_data: ", new_data)
        new_node = Node(new_data)
        # print(new_node)
        # print("new_node data: ",new_node.data)
        new_node.next = self.head
        # print("new_node_next: ", new_node.next)
        self.head = new_node
        print("self.head: ", self.head.data)
  
    # Utility function to print the linked LinkedList 
    def printList(self): 
        temp = self.head 
        print("temp.data:-- ",temp.data)
        while(temp): 
            print (temp.data)
            temp = temp.next

    def printList_1(self):
        print("Now printing here")
        elems = []
        cur_node = self.head
        # print("printing cur node outside while: ",cur_node.data)
        while cur_node.next!=None:
            cur_node = cur_node.next
            # print("value: ",cur_node.data)
            elems.append(cur_node.data)
        print(elems)
  
  
# Driver program to test above functions 
llist = LinkedList() 
# llist.push(20) 
# llist.push(4) 
# llist.push(15) 
# llist.push(85)

a=0
b=0
c=1
d=0
llist.push(b)
llist.push(c)
given_range = 10
while (a<(given_range-2)):
    d = b+c
    llist.push(d)
    b=c
    c=d
    a+=1
  
print ("Given Linked List")
llist.printList()
llist.reverse()
print ("\nReversed Linked List")
llist.printList()
