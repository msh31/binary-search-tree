#pragma once
#include "node.hpp"
#include <string>

class Tree {
    public:
        std::unique_ptr<Node> root = nullptr;

        void insert(int value);
        bool search_for(int value);

        void print();
        void delete_value(std::unique_ptr<Node>& node, int value);

    private:
        void printNode(Node* node, const std::string& prefix, bool isLeft);
};
