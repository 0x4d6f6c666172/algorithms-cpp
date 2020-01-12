#include <cstdlib>
#include <iostream>
#include <memory>

#include "adt/singly_linked_list/singly_linked_list.hpp"



int main() {
    auto sll = new SinglyLinkedList<int>();
    std::cout << "Works!" << "\n";
    return 0;
}
