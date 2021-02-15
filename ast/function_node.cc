#include "function_node.h"

FunctionNode::FunctionNode(
        std::string name,
        absl::InlinedVector<std::string, 4> parameters,
        std::shared_ptr<ASTNode> body) :
        name_(name), parameters_(parameters), body_(body) {}

bool FunctionNode::equals(const ASTNode* other) {
    return false;
}