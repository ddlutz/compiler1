#include "variable_declaration_node.h"

VariableDeclarationNode::VariableDeclarationNode(std::string name, std::shared_ptr<ASTNode> value) :
    name_(name), value_(value) {}

bool VariableDeclarationNode::equals(const ASTNode* other) {
    return false;
}