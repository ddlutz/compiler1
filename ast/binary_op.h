#pragma once

#include "ast_node.h"

#include <memory>

class EqualNode : ASTNode {
    public:
    EqualNode(std::shared_ptr<ASTNode> left, std::shared_ptr<ASTNode> right);
    bool equals(const ASTNode* other);

    private:
    std::shared_ptr<ASTNode> left_;
    std::shared_ptr<ASTNode> right_;
};

class NotEqualNode : ASTNode {
    NotEqualNode(std::shared_ptr<ASTNode> left, std::shared_ptr<ASTNode> right);
    bool equals(const ASTNode* other);

    private:
    std::shared_ptr<ASTNode> left_;
    std::shared_ptr<ASTNode> right_;
};

class AddNode : ASTNode {
    AddNode(std::shared_ptr<ASTNode> left, std::shared_ptr<ASTNode> right);
    bool equals(const ASTNode* other);

    private:
    std::shared_ptr<ASTNode> left_;
    std::shared_ptr<ASTNode> right_;
};

class SubtractNode : ASTNode {
    SubtractNode(std::shared_ptr<ASTNode> left, std::shared_ptr<ASTNode> right);
    bool equals(const ASTNode* other);

    private:
    std::shared_ptr<ASTNode> left_;
    std::shared_ptr<ASTNode> right_;
};

class MultiplyNode : ASTNode {
    MultiplyNode(std::shared_ptr<ASTNode> left, std::shared_ptr<ASTNode> right);
    bool equals(const ASTNode* other);

    private:
    std::shared_ptr<ASTNode> left_;
    std::shared_ptr<ASTNode> right_;
};

class DivideNode : ASTNode {
    DivideNode(std::shared_ptr<ASTNode> left, std::shared_ptr<ASTNode> right);
    bool equals(const ASTNode* other);

    private:
    std::shared_ptr<ASTNode> left_;
    std::shared_ptr<ASTNode> right_;
};