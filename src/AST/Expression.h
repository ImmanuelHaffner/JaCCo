//===--- Expression.h -----------------------------------------------------===//
//
//	~~~ The C4 Compiler ~~~
//
//	This file defines the Abstract Syntax Tree interface.
//
//===----------------------------------------------------------------------===//

#ifndef C4_EXPRESSION_H
#define C4_EXPRESSION_H

#include <iostream>
#include "ASTNode.h"
#include "ASTNodeVisitor.h"

namespace C4
{
  namespace AST
  {
    ///
    struct Expression : ASTNode
    {
      virtual ~Expression() {}

      friend std::ostream & operator<<( std::ostream &out,
          Expression const &expr );
    }; // end struct Expression

    std::ostream & operator<<( std::ostream &out, Expression const &expr );
  } // end namespace AST
} // end namespace C4

#endif
