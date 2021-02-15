#pragma once

#include "ast_node.h"

#include <memory>

class ReturnNode: ASTNode {
    public:
    ReturnNode(std::shared_ptr<ASTNode> term);
    bool equals(const ASTNode* other);

    private:
    std::shared_ptr<ASTNode> term_;
};