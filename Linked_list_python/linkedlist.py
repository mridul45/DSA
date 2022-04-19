from node import Node

class LinkedList:

    '''  Initially the linked list is empty so the head is initialised 
    to none..  '''

    def __init__(self):
        self.head = None

    def insertBegin(self,value):
        ''' To insert nodes at the begining of the linked list  '''
        if self.head is None:
            self.head = Node(value)

        else:
            temp = Node(value)
            temp.next = self.head
            self.head = temp

    def delBegin(self):
        if self.head is None:
            print("Empty List!!!")
            return None
        else:
            temp = self.head
            value = self.head.data
            self.head = self.head.next
            del temp
            return value