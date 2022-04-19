from node import Node

def main():
    lst = Node(20)
    lst.next = Node(25)
    lst.next.next = Node(30)
    lst.next.next.next = Node(35)

    print(lst.data)
    print(lst.next.data)
    print(lst.next.next.data)
    print(lst.next.next.next.data)


if __name__ == "__main__":
    main()