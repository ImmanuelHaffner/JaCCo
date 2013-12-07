///===--- Decl.h ----------------------------------------------------------===//
//
//	~~~ The C4 Compiler ~~~
//
//	This file defines the Abstract Syntax tree interface.
//
//===----------------------------------------------------------------------===//

#ifndef C4_DECL_H
#define C4_DECL_H

#include <iostream>
#include "Locatable.h"
#include "List.h"
#include "../util.h"
#include <vector>

namespace C4
{
  namespace AST
  {
    // Forward declarations
    struct TypeSpecifier;



    /// External Declaration
    struct ExtDecl : Printable
    {
      virtual ~ExtDecl() {}

      virtual void print( Printer const p ) const;
    }; // end struct ExtDecl


    /// Declaration
    struct Declarator;
    struct Decl : ExtDecl
    {
      Decl( TypeSpecifier const * const typeSpec,
          Declarator const * const declarator = NULL )
        : typeSpec(nonNull(typeSpec)), declarator(declarator)
      {}

      virtual ~Decl() {}

      virtual void print( Printer const p ) const;

      TypeSpecifier const * const typeSpec;
      Declarator const * const declarator;
    }; // end struct Declaration


    struct IllegalDecl : Decl, Locatable
    {
      IllegalDecl( Lex::Token const &tok ) : Decl(NULL), Locatable(tok) {}
      ~IllegalDecl() {}

      void print( Printer const p ) const;
    }; // end IllegalDecl


    /// Struct Declaration List
    struct StructDecl;
    struct StructDeclList : List< StructDecl >
    {
      ~StructDeclList() {}
      void print( Printer const p ) const;
    }; // end struct StructDeclList

    /// Struct Declaration
    struct StructDeclaratorList;
    struct StructDecl : Decl
    {
      StructDecl( TypeSpecifier const * const typeSpec,
          StructDeclaratorList const * const structDeclarators )
        : Decl(typeSpec), structDeclarators(nonNull(structDeclarators))
      {}

      StructDeclaratorList const * const structDeclarators;
    }; // end struct StructDecl


    /// Parameter Declaration
    struct ParamDecl : Decl
    {
      ParamDecl( TypeSpecifier const * const typeSpec,
          Declarator const * const declarator = NULL )
        : Decl(typeSpec,declarator)
      {}

      ~ParamDecl() {}
    }; // end struct ParamDecl


    /// Declarator
    struct Declarator : Locatable
    {
      Declarator( Lex::Token const &tok ) : Locatable (tok) {}
      virtual ~Declarator() {}

      void print( Printer const p ) const;
    }; // end struct Declarator


    /// Struct Declarator List
    struct StructDeclaratorList : List< Declarator >
    {
      ~StructDeclaratorList() {}
      void print( Printer const p ) const;
    }; // end struct StructDeclaratorList


    /// Illegal Declarator
    struct IllegalDeclarator : Declarator
    {
      IllegalDeclarator( Lex::Token const &tok ) : Declarator(tok) {}
      ~IllegalDeclarator() {}

      void print( Printer const p ) const;
    }; // end struct IllegalDeclarator


    struct DeclaratorList : List< Declarator >
    {
      ~DeclaratorList() {}
      void print( Printer const p ) const;
    }; // end struct DeclaratorList


    /// Declaration List
    struct DeclList : List< Decl >
    {
      ~DeclList() {}
      void print( Printer const p ) const;
    }; // end struct DeclList


    /// Function Definition
    struct FunctionDef : ExtDecl
    {
      FunctionDef( TypeSpecifier const * const typeSpec,
          Declarator const * const declarator, DeclList const * const decls,
          CompoundStmt const * compStmt )
        : typeSpec(typeSpec), declarator(nonNull(declarator)), decls(decls),
        compStmt(nonNull(compStmt))
      {}

      virtual ~FunctionDef() {}

      void print( Printer const p ) const;

      TypeSpecifier const * const typeSpec;
      Declarator const * const declarator;
      DeclList const * const decls;
      CompoundStmt const * const compStmt;
    }; // end struct FunctionDef
  } // end namespace AST
} // end namespace C4

#endif
