#include <iostream>
#include "SinglyLinkedList.cpp"

int main() {
    SinglyLinkedList<int> l1;

   
    l1.addATFront(5);
    l1.addATFront(10);
    l1.addAtEnd(20);
    l1.addATFront(30);

  
    l1.removeFirst(); // Removes 30
    l1.removeLast();  // Removes 20

  
    std::cout << "Current List: ";
    l1.displayList();

  
    std::cout << "Size of the list: " << l1.size() << std::endl;

 
    std::cout << "Enter the number to find: ";
    int val;
    std::cin >> val;

    Node<int>* foundNode = l1.find(val);
    if (foundNode != nullptr) {
        std::cout << "Entered value " << val << " is in the list." << std::endl;
    }
    else {
        std::cout << "Entered value " << val << " is not in the list." << std::endl;
    }

    return 0;
}
