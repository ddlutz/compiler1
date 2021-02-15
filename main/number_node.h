#pragma once

#include "ast_node.h"

class NumberNode : ASTNode {
    public:
        NumberNode(int number);
        ~NumberNode() = default;
        bool operator==(const ASTNode* other);
    private:
        int value_;
};