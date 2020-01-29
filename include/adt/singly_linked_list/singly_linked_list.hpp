#ifndef SINGLY_LINKED_LIST_H
#define SINGLY_LINKED_LIST_H

#include <iostream>
#include <string>

template<typename T>
class SinglyLinkedList {
    private:
        T _value;
        uint64_t _length;
        SinglyLinkedList<T>* next{nullptr};

    public:
        SinglyLinkedList() {};

        SinglyLinkedList(const T value): _value{value}, _length{1} {};

        ~SinglyLinkedList() { 
            delete next;
        };

        void append(const T value) {
            if (_length == 0) {
                std::cout << "Append " << std::to_string(value) << "\n";
                std::cout << "No last" << "\n";
                _value = value;
                _length = 1;
            }
            else {
                auto node = new SinglyLinkedList<T>(value);
                last()->next = node;
                _length += 1;
            }
        };

        auto value () const -> T { return _value; };
        auto getNext() const -> SinglyLinkedList* {return next; };

        SinglyLinkedList* last() {
            auto node = this;
            std::cout << "Call last" << "\n";
            while(node->next) {
                node = this->next;
            }
            return node;
        };

        void toString() {
            std::string result = "";
            auto node = this;
            while(node) {
                std::cout << "Call toString" << "\n";
                result += std::to_string(node->_value) + " ";
                node = node->next;
            }
            std::cout << result << "\n";
        }

};

#endif
