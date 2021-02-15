#pragma once

#include "ast_node.h"

#include <memory>

class WhileNode : ASTNode {
    public:
    WhileNode(std::shared_ptr<ASTNode> conditional, std::shared_ptr<ASTNode> body);
    bool equals(const ASTNode* other);

    private:
    std::shared_ptr<ASTNode> conditional_;
    std::shared_ptr<ASTNode> body_;
};