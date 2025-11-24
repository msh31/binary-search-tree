#include <iostream>
#include <vector>

#include "node.hpp"
#include "tree.hpp"

int main() {
    Tree tree;

    std::vector<int> cool_numbers {
      20, 5, 300, 40, 50, 69, 420
    };

    for (auto number : cool_numbers) {
        tree.insert(number);
        std::cout << "succc\n";
    }

    // std::cout << "left: " << node->left << "\n";
    // std::cout << "right: " << node->right << "\n";


    return 0;
}
