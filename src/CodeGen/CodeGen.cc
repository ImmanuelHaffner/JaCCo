//===--- CodeGen.cc -------------------------------------------------------===//
//
//  ~~~ The C4 Compiler ~~~
//
//  This file implements the code gen function class and other more general
//  parts of the code gen.
//
//===----------------------------------------------------------------------===//


#include "CodeGen.h"

#include "../AST/AST.h"


using namespace C4;
using namespace AST;
using namespace CodeGen;


void TranslationUnit::emit( CodeGenFunction &CGF ) const
{
  /* Emit code for all external declarations. */
  for ( auto it = begin(); it != end(); ++it )
    (*it)->emit( CGF );
}
