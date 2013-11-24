//===--- Statement.cc -----------------------------------------------------===//
//
//	~~~ The C4 Compiler ~~~
//
//	This file implements the Abstract Syntax tree interface.
//
//===----------------------------------------------------------------------===//

#include "Statement.h"


using namespace C4;
using namespace AST;


std::ostream & AST::operator<<( std::ostream &out, Statement const &stmt )
{
  (void) stmt; // suppress unused parameter warning
  out << "statement";
  return out;
}