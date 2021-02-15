#pragma once

class ASTNode {
  public:
  bool virtual operator==(const ASTNode* other) = 0;  
  virtual ~ASTNode() = 0;
};