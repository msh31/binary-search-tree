#include <exception>
#include <iostream>
#include <vector>

#include "tree.hpp"

#ifdef _WIN32
#include <windows.h>
#endif

int main() {
    #ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    #endif

    Tree tree;

    std::vector<int> cool_numbers {
        25, 10, 40, 5, 20, 30, 50, 2, 35, 69, 420
    };

    for (auto number : cool_numbers) {
        tree.insert(number);
    }

    tree.print();

    if(tree.search_for(999)) {
        std::cout << "found non existent number in ze tree\n";
    } else { std::cout << "999 was not found!\n"; }

    if(tree.search_for(69)) {
        std::cout << "found 69!\n";
    } else { std::cout << "69 was not found!\n"; }

    try {
        tree.delete_value(tree.root, 5);
        std::cout << "deleted 5!\n";
        tree.print();
    } catch(std::exception err) {
        std::cout << err.what() << "\n";
    }

    return 0;
}
