#include <iostream>

#include "node/node.hpp"

int main() {
    auto node = std::make_unique<Node>(42);
    std::cout << "left: " << node->left << "\n";
    std::cout << "right: " << node->right << "\n";

    return 0;
}
