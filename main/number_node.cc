#include "number_node.h"

NumberNode::NumberNode(int value) : value_(value) {}

bool NumberNode::operator==(const ASTNode* other) {
    return false;
}