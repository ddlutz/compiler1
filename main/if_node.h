#pragma once 
#include "ast_node.h"

#include <memory>

class IfNode : ASTNode {
    public:
    IfNode(
        std::shared_ptr<ASTNode> conditional,
        std::shared_ptr<ASTNode> consequence, 
        std::shared_ptr<ASTNode> alternative);
    bool equals(const ASTNode* other);

    private:
    std::shared_ptr<ASTNode> conditional_;
    std::shared_ptr<ASTNode> consequence_;
    std::shared_ptr<ASTNode> alternative_;
};