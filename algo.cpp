#include <iostream>
#include <memory>

#include "binary_tree/binary_tree.hpp"

int main() {
    auto tree = std::make_unique<BinaryTree<int>>(10);
    std::cout << tree->getRootValue() << std::endl;
    return 0;
}
