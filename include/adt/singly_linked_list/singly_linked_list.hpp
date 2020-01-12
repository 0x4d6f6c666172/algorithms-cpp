#ifndef SINGLY_LINKED_LIST_H
#define SINGLY_LINKED_LIST_H

template<typename T>
class SinglyLinkedList {
    private:
        T _value;
        SinglyLinkedList* next;

    public:
        SinglyLinkedList(): _value{}, next{nullptr} {}

        ~SinglyLinkedList() { };

        void append();

        void last();

};

#endif
