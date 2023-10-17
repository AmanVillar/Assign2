#include "Single_Linked_List.h"
#include <iostream>

int main() {
    Single_Linked_List<int> list;

    list.push_back(1);
    list.push_back(2);
    list.push_back(3);

    std::cout << "Front: " << list.front() << std::endl;
    std::cout << "Back: " << list.back() << std::endl;

    list.insert(1, 4);
    list.remove(2);

    std::cout << "Front: " << list.front() << std::endl;
    std::cout << "Back: " << list.back() << std::endl;

    std::cout << "Item 3 is at index: " << list.find(3) << std::endl;
    std::cout << "Item 5 is at index: " << list.find(5) << std::endl;

    return 0;
}
