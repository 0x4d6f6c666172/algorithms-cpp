#include <cstdlib>
#include <iostream>
#include <memory>

#include "adt/singly_linked_list/singly_linked_list.hpp"



int main() {
    auto sll = new SinglyLinkedList<int>();
    sll->append(24);
    sll->append(35);
    std::cout << "Works!" << "\n";
    sll->toString();
    std::cout << "\n";
    std::cout << sll->value() << "\n";
    std::cout << sll->getNext()->value() << "\n";
    delete sll;
    return 0;
}
