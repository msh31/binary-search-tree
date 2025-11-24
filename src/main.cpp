#include <vector>

#include "tree.hpp"

int main() {
    Tree tree;

    std::vector<int> cool_numbers {
      20, 5, 300, 40, 50, 69, 420
    };

    for (auto number : cool_numbers) {
        tree.insert(number);
    }

    tree.print();
    return 0;
}
