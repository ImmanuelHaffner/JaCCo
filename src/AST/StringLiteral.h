//===--- StringLiteral.h --------------------------------------------------===//
//
//	~~~ The C4 Compiler ~~~
//
//	This file defines the Abstract Syntax tree interface.
//
//===----------------------------------------------------------------------===//

#ifndef C4_STRING_LITERAL_H
#define C4_STRING_LITERAL_H

#include "AST.h"
#include "../Lex/Token.h"

namespace C4
{
  namespace AST
  {
    ///
    struct StringLiteral : ASTNode
    {
      StringLiteral( Lex::Token &token, ASTNode * const parent = NULL );
      ~StringLiteral();

      friend std::ostream & operator<<( std::ostream &out,
          StringLiteral const &node );
      virtual void dump() const;

      private:
      Lex::Token &token;
    };
  }
}

#endif
