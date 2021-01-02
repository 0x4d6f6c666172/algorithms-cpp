#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest.h"

#include <iostream>
#include <memory>


#include "binary_tree/binary_tree.hpp"


TEST_CASE("test binary tree creanup") {
    auto tree = std::make_unique<BinaryTree<int>>(10);
    std::cout << tree->getRootValue() << std::endl;
}

int main(int argc, char** argv) { 
    return doctest::Context(argc, argv).run();
}
