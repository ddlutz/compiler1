#pragma once

#include "ast_node.h"

#include <memory>
#include <string>

class AssignmentNode : ASTNode {
    public:
    AssignmentNode(std::string name, std::shared_ptr<ASTNode> value);
    bool equals(const ASTNode* other);

    private:
    std::string name_;
    std::shared_ptr<ASTNode> value_;
};