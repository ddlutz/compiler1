#include "assignment_node.h"

AssignmentNode::AssignmentNode(std::string name, std::shared_ptr<ASTNode> value) :
    name_(name), value_(value) {}

bool AssignmentNode::equals(const ASTNode* other) {
    return false;
}