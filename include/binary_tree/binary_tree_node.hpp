#ifndef BINARY_TREE_NODE_HPP
#define BINARY_TREE_NODE_HPP

template<typename Value>
struct BinaryTreeNode {
    Value value;
    BinaryTreeNode* leftNode;
    BinaryTreeNode* rightNode;

    BinaryTreeNode() = delete;
    BinaryTreeNode(Value value) :
        value { value },
        leftNode { nullptr },
        rightNode { nullptr } {};
    ~BinaryTreeNode() {
        delete leftNode;
        delete rightNode;
    }
};
#endif
