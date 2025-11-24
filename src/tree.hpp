#pragma once
#include "node.hpp"

class Tree {
    public:
        std::unique_ptr<Node> root = nullptr;

        void insert(int value);
        void search_for(int value);

        void print();

    private:
        void printNode(Node* node);
};
