#pragma once 
#include "ast_node.h"

#include <string>

class IDNode : ASTNode {
    public:
    IDNode(std::string value);
    bool equals(const ASTNode* other);

    private:
    std::string value_;
};