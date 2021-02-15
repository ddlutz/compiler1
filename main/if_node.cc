#include "if_node.h"

IfNode::IfNode(std::shared_ptr<ASTNode> conditional,
        std::shared_ptr<ASTNode> consequence, 
        std::shared_ptr<ASTNode> alternative) :
        conditional_(conditional), consequence_(consequence), alternative_(alternative) {}

bool IfNode::equals(const ASTNode* other) {
    return false;
}