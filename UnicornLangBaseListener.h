
// Generated from UnicornLang.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "UnicornLangListener.h"


/**
 * This class provides an empty implementation of UnicornLangListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  UnicornLangBaseListener : public UnicornLangListener {
public:

  virtual void enterProgram(UnicornLangParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(UnicornLangParser::ProgramContext * /*ctx*/) override { }

  virtual void enterStatement(UnicornLangParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(UnicornLangParser::StatementContext * /*ctx*/) override { }

  virtual void enterDeclaration(UnicornLangParser::DeclarationContext * /*ctx*/) override { }
  virtual void exitDeclaration(UnicornLangParser::DeclarationContext * /*ctx*/) override { }

  virtual void enterAssignment(UnicornLangParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(UnicornLangParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterIo(UnicornLangParser::IoContext * /*ctx*/) override { }
  virtual void exitIo(UnicornLangParser::IoContext * /*ctx*/) override { }

  virtual void enterType(UnicornLangParser::TypeContext * /*ctx*/) override { }
  virtual void exitType(UnicornLangParser::TypeContext * /*ctx*/) override { }

  virtual void enterExpression(UnicornLangParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(UnicornLangParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterTerm(UnicornLangParser::TermContext * /*ctx*/) override { }
  virtual void exitTerm(UnicornLangParser::TermContext * /*ctx*/) override { }

  virtual void enterFactor(UnicornLangParser::FactorContext * /*ctx*/) override { }
  virtual void exitFactor(UnicornLangParser::FactorContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

