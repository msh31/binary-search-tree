#include "tree.hpp"

void Tree::insert(int value) {
    if(root == nullptr) {
        root = std::make_unique<Node>(value);
    } else {
        auto raw_ptr = root.get();

        while(true) {
            if(value < raw_ptr->value) {
                if(raw_ptr->left == nullptr) {
                    raw_ptr->left = std::make_unique<Node>(value);
                    return;
                } else {
                    raw_ptr = raw_ptr->left.get();
                }
            } else {
                if(raw_ptr->right == nullptr) {
                    raw_ptr->right = std::make_unique<Node>(value);
                    return;
                } else {
                    raw_ptr = raw_ptr->right.get();
                }
            }
        }
    }
}
