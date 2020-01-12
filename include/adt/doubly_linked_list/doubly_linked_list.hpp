#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

template<typename T>
class DoublyLinkedList {
    private:
        T value;
        DoublyLinkedList* prevNode;
        DoublyLinkedList* nextNode;
    public:
        DoublyLinkedList(): value{}, prevNode{nullptr}, nextNode{nullptr} {}
};

#endif
