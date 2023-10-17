#pragma once
#include <iostream>

template <typename Item_Type>
class Single_Linked_List
{
private:
    struct Node {
        Item_Type data;
        Node* next;

        Node(const Item_Type& item) : data(item), next(nullptr) {}
    };

    Node* head;
    Node* tail;
    size_t num_items;

public:
    Single_Linked_List() : head(nullptr), tail(nullptr), num_items(0) {}

    // Destructor to free memory
    ~Single_Linked_List() {
        while (head) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }

    // Add an item to the front of the list
    void push_front(const Item_Type& item) {
        Node* new_node = new Node(item);
        if (head == nullptr) {
            head = new_node;
            tail = new_node;
        }
        else {
            new_node->next = head;
            head = new_node;
        }
        num_items++;
    }

    // Add an item to the back of the list
    void push_back(const Item_Type& item) {
        Node* new_node = new Node(item);
        if (tail == nullptr) {
            head = new_node;
            tail = new_node;
        }
        else {
            tail->next = new_node;
            tail = new_node;
        }
        num_items++;
    }

    // Remove the item from the front of the list
    void pop_front() {
        if (head != nullptr) {
            Node* temp = head;
            head = head->next;
            delete temp;
            num_items--;
        }
    }

    // Remove the item from the back of the list
    void pop_back() {
        if (tail != nullptr) {
            if (head == tail) {
                delete head;
                head = nullptr;
                tail = nullptr;
            }
            else {
                Node* current = head;
                while (current->next != tail) {
                    current = current->next;
                }
                delete tail;
                tail = current;
                tail->next = nullptr;
            }
            num_items--;
        }
    }

    // Return the item at the front of the list
    Item_Type front() const {
        if (head != nullptr) {
            return head->data;
        }
        throw std::out_of_range("List is empty.");
    }

    // Return the item at the back of the list
    Item_Type back() const {
        if (tail != nullptr) {
            return tail->data;
        }
        throw std::out_of_range("List is empty.");
    }

    // Check if the list is empty
    bool empty() const {
        return num_items == 0;
    }

    // Insert an item at the specified index
    void insert(size_t index, const Item_Type& item) {
        if (index <= num_items) {
            Node* new_node = new Node(item);
            if (index == 0) {
                push_front(item);
            }
            else if (index == num_items) {
                push_back(item);
            }
            else {
                Node* current = head;
                for (size_t i = 0; i < index - 1; i++) {
                    current = current->next;
                }
                new_node->next = current->next;
                current->next = new_node;
                num_items++;
            }
        }
        else {
            throw std::out_of_range("Index out of range.");
        }
    }

    // Remove an item at the specified index
    bool remove(size_t index) {
        if (index < num_items) {
            if (index == 0) {
                pop_front();
            }
            else {
                Node* current = head;
                for (size_t i = 0; i < index - 1; i++) {
                    current = current->next;
                }
                Node* temp = current->next;
                current->next = temp->next;
                delete temp;
                num_items--;
            }
            return true;
        }
        return false;
    }

    // Find the index of the first occurrence of an item
    size_t find(const Item_Type& item) const {
        Node* current = head;
        size_t index = 0;
        while (current != nullptr) {
            if (current->data == item) {
                return index;
            }
            current = current->next;
            index++;
        }
        return num_items;
    }
};

