from linkedlist import LinkedList

def main():
    lst = LinkedList()
    while 1:
        choice = int(input("1: Insert at the begining \n2: Deleate from begining \n3: Quit\n"))
        if choice == 1:
            value = eval(input("Enter values to be inserted : "))
            lst.insertBegin(value)
        elif choice == 2:
            value = lst.delBegin()
            print("Value Deleted!!", value)
        elif choice == 3:
            break

if __name__ == "__main__":
    main()