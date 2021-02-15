#include "call_node.h"

#include "absl/container/inlined_vector.h"
CallNode::CallNode(std::string callee, absl::InlinedVector<std::shared_ptr<ASTNode>, 4> args) :
    callee_(callee), args_(args){}

bool CallNode::equals(const ASTNode* other){
    return false;
}