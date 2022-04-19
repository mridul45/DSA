from node import Node

def main():
    start,finish = 2,5
    lst = Node(1)
    current = lst
    
    for i in range(start,finish):
        current.next = Node(i**3)
        current = current.next


def __str__(self):
    current = self.head
    result = ''
    if current != None:
        while current.next != None:
            result += str(current.data)+'->'
            current = current.next
        result += str(current.data)
    else:
        result = 'Empty List'
    return result

if __name__ == "__main__":
    main()