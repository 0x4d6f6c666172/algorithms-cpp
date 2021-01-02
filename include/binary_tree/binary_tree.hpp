#ifndef BINARY_TREE_HPP
#define BINARY_TREE_HPP

#include "binary_tree_node.hpp"

template<typename Value>
class BinaryTree {
    private:
        BinaryTreeNode<Value>* root;

    public:
        BinaryTree() : root { nullptr } {};

        BinaryTree(Value value) {
            root = new BinaryTreeNode<Value>(value);
        }

        Value getRootValue() {
            return root->value;
        }

        ~BinaryTree() {
            delete root;
        }
};

#endif
