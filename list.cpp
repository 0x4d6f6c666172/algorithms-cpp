#include <cstdlib>
#include <iostream>
#include <memory>


class LinkedList {
    private:
        uint64_t _value;
        uint64_t _length;
        LinkedList* next;

    public:
        LinkedList() : _value{}, _length{0}, next{nullptr} {}

        LinkedList(uint64_t value) : _value{value}, _length{1}, next{nullptr} {};

        auto length() const -> uint64_t { return _length; }

        auto getValue() const -> uint64_t { return _value; }

        void append(const uint64_t value) {
            if (length() == 0) {
                _value = value;
                _length = 1;
            }
            else {
                auto newNode = new LinkedList(value);
                auto lastNode = last();
                lastNode->next = newNode;
                _length += 1;
            }

        }

        LinkedList* prepend(const uint64_t value) {
            auto newNode = new LinkedList(value);
            newNode->next = this;
            newNode->_length = _length + 1;
            return newNode;
        }

        LinkedList* last() {
            int i = 0;
            auto node = this;
            while(node->next) {
                node = node->next;
            }
            return node;
        };

        std::string toString() {
            std::string result = "";
            auto node = this;
            while(node) {
                result += std::to_string(node->_value) + " ";
                node = node->next;
            }
            return result;
        }

        void operator=(const LinkedList& List) {
            _value = List._value;
            _length = List._length;
        }
};


int main() {
    auto ll = new LinkedList();
    ll->append(25);
    ll->append(35);
    ll->append(45);
    ll->append(84);
    ll = ll->prepend(144);
    std::cout << ll->last()->getValue() << "\n";
    std::cout << ll->toString() << "\n";
    std::cout << ll->length() << "\n";
    return 0;
}
