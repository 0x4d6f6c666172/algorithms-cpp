#include <cstdlib>
#include <iostream>
#include <memory>

#include "adt/doubly_linked_list/doubly_linked_list.hpp"



int main() {
    auto sll = new DoublyLinkedList<int>();
    std::cout << "Works!" << "\n";
    return 0;
}
