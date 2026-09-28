#include <stdexcept>
#include <cstdlib>

template <typename T>
class CircularLinkedList {
private:
    struct Node {
        T data;
        Node* next;

        Node(T value) : data(value), next(nullptr) {}
    };

    Node* head;

public:
    Node* current;

    CircularLinkedList() : head(nullptr), current(nullptr) {}

    void append(T data) {
        Node* newNode = new Node(data);

        if (head == nullptr) {
            head = newNode;
            head->next = head;
            current = head;
            return;
        }

        Node* temp = head;

        while (temp->next != head) {
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->next = head;
    }

    void step() {
        if (current != nullptr) {
            current = current->next;
        }
    }

    T getCurrent() {
        if (current != nullptr) {
            return current->data;
        }

        throw std::runtime_error("List is empty");
    }
    int roll(){
        int die1 = rand() % 6 + 1;
        int die2 = rand() % 6 + 1;
        int totalSteps = die1 + die2;
        for(int i = 0; i < totalSteps; i++){
            step();
        }
        return totalSteps;
    }
};

