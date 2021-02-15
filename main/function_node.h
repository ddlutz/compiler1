#pragma once

#include "ast_node.h"
#include "absl/container/inlined_vector.h"
class FunctionNode : ASTNode {
    public:
    FunctionNode(
        std::string name,
        absl::InlinedVector<std::string, 4> parameters,
        std::shared_ptr<ASTNode> body);
    bool equals(const ASTNode* other);

    private:
    std::string name_;
    absl::InlinedVector<std::string, 4> parameters_;
    std::shared_ptr<ASTNode> body_;
};