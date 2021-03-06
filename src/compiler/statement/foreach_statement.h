/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010- Facebook, Inc. (http://www.facebook.com)         |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

#ifndef __FOREACH_STATEMENT_H__
#define __FOREACH_STATEMENT_H__

#include <compiler/statement/loop_statement.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

DECLARE_BOOST_TYPES(ForEachStatement);

class ForEachStatement : public LoopStatement {
public:
  enum { ArrayExpr, NameExpr, ValueExpr, BodyStmt };
  ForEachStatement(STATEMENT_CONSTRUCTOR_PARAMETERS,
                   ExpressionPtr array, ExpressionPtr name, bool nameRef,
                   ExpressionPtr value, bool valueRef, StatementPtr stmt);

  DECLARE_STATEMENT_VIRTUAL_FUNCTIONS;
  void preOutputCPPImpl(CodeGenerator &cg, AnalysisResultPtr ar); 

  virtual bool hasDecl() const { return m_stmt && m_stmt->hasDecl(); }
  virtual bool hasRetExp() const { return m_stmt && m_stmt->hasRetExp(); }
  virtual int getRecursiveCount() const {
    return 1 + (m_stmt ? m_stmt->getRecursiveCount() : 0);
  }

  bool isStrong() const { return m_ref; }
private:
  ExpressionPtr m_array;
  ExpressionPtr m_name;
  ExpressionPtr m_value;
  bool m_ref;
  StatementPtr m_stmt;
};

///////////////////////////////////////////////////////////////////////////////
}
#endif // __FOREACH_STATEMENT_H__
