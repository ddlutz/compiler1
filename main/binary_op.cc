#include "binary_op.h"

EqualNode::EqualNode(std::shared_ptr<ASTNode> left, std::shared_ptr<ASTNode> right) :
    left_(left), right_(right) {}

bool EqualNode::equals(const ASTNode* other) {
    return false;
}

NotEqualNode::NotEqualNode(std::shared_ptr<ASTNode> left, std::shared_ptr<ASTNode> right) :
    left_(left), right_(right) {}

bool NotEqualNode::equals(const ASTNode* other) {
    return false;
}

AddNode::AddNode(std::shared_ptr<ASTNode> left, std::shared_ptr<ASTNode> right) :
    left_(left), right_(right) {}

bool AddNode::equals(const ASTNode* other) {
    return false;
}

SubtractNode::SubtractNode(std::shared_ptr<ASTNode> left, std::shared_ptr<ASTNode> right) :
    left_(left), right_(right) {}

bool SubtractNode::equals(const ASTNode* other) {
    return false;
}

DivideNode::DivideNode(std::shared_ptr<ASTNode> left, std::shared_ptr<ASTNode> right) :
    left_(left), right_(right) {}

bool DivideNode::equals(const ASTNode* other) {
    return false;
}

MultiplyNode::MultiplyNode(std::shared_ptr<ASTNode> left, std::shared_ptr<ASTNode> right) :
    left_(left), right_(right) {}

bool MultiplyNode::equals(const ASTNode* other) {
    return false;
}