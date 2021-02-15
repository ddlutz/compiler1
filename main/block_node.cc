#include "block_node.h"

BlockNode::BlockNode(absl::InlinedVector<std::shared_ptr<ASTNode>, 10 > statements) :
    statements_(statements) {}

bool BlockNode::equals(const ASTNode* other) {
    return false;
}