#include "return_node.h"

ReturnNode::ReturnNode(std::shared_ptr<ASTNode> term) : term_(term) {}

bool ReturnNode::equals(const ASTNode* other) { return false; }