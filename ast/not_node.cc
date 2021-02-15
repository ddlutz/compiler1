#include "not_node.h"

#include <memory>

NotNode::NotNode(std::shared_ptr<ASTNode> term) : term_(term) {}

bool NotNode::equals(const ASTNode* other) {
    return false;
}