#pragma once

#include "ast_node.h"

#include "absl/container/inlined_vector.h"

class CallNode : ASTNode {
    public:
    CallNode(std::string callee, absl::InlinedVector<std::shared_ptr<ASTNode>, 4> args);
    bool equals(const ASTNode* other);

    private:
    std::string callee_;
    absl::InlinedVector<std::shared_ptr<ASTNode>, 4> args_;
};