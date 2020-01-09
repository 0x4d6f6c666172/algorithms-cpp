#include <cstdlib>
#include <iostream>
#include <memory>


template<typename T>
class LinkedList {
    private:
        T _value;
        uint64_t _length;
        LinkedList* next;

    public:
        LinkedList() : _value{}, _length{0}, next{nullptr} {}

        LinkedList(T value) : _value{value}, _length{1}, next{nullptr} {};

        ~LinkedList() {
            std::cout << "Called destructor for value: " << std::to_string(this->_value) << " \n"; 
            delete next;
        }

        auto length() const -> uint64_t { return _length; }

        auto value() const -> T { return _value; }

        void append(const T value) {
            if (length() == 0) {
                _value = value;
                _length = 1;
            }
            else {
                auto newNode = new LinkedList<T>(value);
                auto lastNode = last();
                lastNode->next = newNode;
                _length += 1;
            }

        }

        LinkedList* prepend(const T value) {
            auto newNode = new LinkedList<T>(value);
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
    auto ll = new LinkedList<uint64_t>();
    ll->append(25);
    ll->append(35);
    ll->append(45);
    ll->append(84);
    ll = ll->prepend(144);
    std::cout << ll->last()->value() << "\n";
    std::cout << ll->toString() << "\n";
    std::cout << ll->length() << "\n";
    delete ll;
    return 0;

}
