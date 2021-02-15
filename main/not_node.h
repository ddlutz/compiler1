#pragma once
#include "ast_node.h"

#include <memory>

class NotNode : ASTNode {
    public:
    NotNode(std::shared_ptr<ASTNode> term);
    bool equals(const ASTNode* other);

    private:
    std::shared_ptr<ASTNode> term_;
};