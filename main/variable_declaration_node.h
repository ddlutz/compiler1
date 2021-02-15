#pragma once

#include <memory>

#include "ast_node.h"

class VariableDeclarationNode : ASTNode {
    public:
    VariableDeclarationNode(std::string name, std::shared_ptr<ASTNode> value);
    bool equals(const ASTNode* other);

    private:
    std::string name_;
    std::shared_ptr<ASTNode> value_;
};