#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<std::string> myHashSet;

    // Adding elements
    myHashSet.insert("Apple");
    myHashSet.insert("Banana");
    myHashSet.insert("Orange");
    myHashSet.insert("Apple");  // Duplicate element, won't be added

    // Displaying the HashSet
    std::cout << "HashSet: ";
    for (const auto& element : myHashSet) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
