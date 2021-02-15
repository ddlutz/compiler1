#include "id_node.h"

#include <string>

IDNode::IDNode(std::string value) : value_(value) {}

bool IDNode::equals(const ASTNode* other) {
    return false;
}