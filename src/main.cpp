#include <iostream>

#include "node.hpp"
#include "tree.hpp"

int main() {
    auto node = std::make_unique<Node>(42);

    if(node->left == nullptr && node->right == nullptr) {
        std::cout << "both children of a node are nullptrs\n";
        return 0;
    }

    std::cout << "left: " << node->left << "\n";
    std::cout << "right: " << node->right << "\n";

    return 0;
}
