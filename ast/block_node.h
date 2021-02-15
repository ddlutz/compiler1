#pragma once

#include "ast_node.h"

#include <memory>

#include "absl/container/inlined_vector.h"

class BlockNode : ASTNode{
    public:
    BlockNode(absl::InlinedVector< std::shared_ptr<ASTNode>, 10 > statements);
    bool equals(const ASTNode* other);

    private:
    absl::InlinedVector<std::shared_ptr<ASTNode>, 10 > statements_;
};