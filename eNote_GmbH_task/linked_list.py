class node:
    def __init__(self,data=None):
        self.data = data
        self.next = None
        
    
        
class linked_list:
    def __init__(self):
        self.head = node() #callled only once during object declaration
        self.checkList=[]
        self.i=0
    
    def append(self,data):
        # print("data: ", data)
        new_node = node(data) #object is re-created by destroying the previous bcoz of same naming
        print("appending val: ",new_node.data)
        # print("printing class node content with initialization: ", new_node.data)
        cur = self.head
        # print("cur: ", cur, "---, head: ", self.head, " --- head.next: ",self.head.next)
        # print(cur.next)
        while cur.next!=None:  #[1,0,None] [0,1,2,None]
            # print("hshshs")
            cur=cur.next

        self.i=self.i+1
        
        # self.checkList.append(cur.next)
        # print("printing the list of class:", self.checkList)
        # print("#"*60)
        
        cur.next=new_node
        
        #self.checkList.append(cur.next)
        # print("printing the list of class:", self.checkList)
    
    # def reverse(self):
    #     prev = None
    #     current = self.head
    #     while current!=None: 
    #         next = current.next
    #         current.next = prev
    #         prev = current
    #         current = next
    #     self.head = prev
        # return prev
    
    # def reverse(self):
    #     prev = None
    #     current = self.head
    #     while current:
    #         temp = current
    #         current = current.next
    #         temp.next = prev
    #         prev=temp
    #     self.head = prev

        #     next = current.next
        #     current.next = prev
        #     prev = current
        #     current = next
        # self.head = prev
        # return prev
    
    def reverse(self):
        prev = None
        current = self.head
        while current:
            nxt= current.next
            current.next = prev
            prev = current
            current = nxt
        self.head = prev

    def length(self):
        cur = self.head
        total = 0
        while cur.next!=None:
            total += 1
            cur = cur.next
        return total

    def display(self):
        elems = []
        cur_node = self.head
        print("printing cur node outside while: ",cur_node.data)
        while cur_node.next!=None:
            cur_node = cur_node.next
            print("value: ",cur_node.data)
            elems.append(cur_node.data)
        print(elems)



llist = linked_list()
a=0
b=0
c=1
d=0
llist.append(b)
llist.append(c)
given_range = 10
while (a<(given_range-2)):
    d = b+c
    llist.append(d)
    b=c
    c=d
    a+=1

llist.display()
# # print(llist.length())
# #llist.reverse()
# llist.display()