#include "while_node.h"

WhileNode::WhileNode(std::shared_ptr<ASTNode> conditional, std::shared_ptr<ASTNode> body) :
    conditional_(conditional), body_(body) {}

bool WhileNode::equals(const ASTNode* other) {
    return false;
}