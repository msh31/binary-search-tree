#pragma once
#include "node.hpp"
#include <string>

class Tree {
    public:
        std::unique_ptr<Node> root = nullptr;

        void insert(int value);
        bool search_for(int value);

        void print();
        Node* delete_value(Node* root, int value);

    private:
        void printNode(Node* node, const std::string& prefix, bool isLeft);
};
