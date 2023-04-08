
// Generated from UnicornLang.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "UnicornLangParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by UnicornLangParser.
 */
class  UnicornLangListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(UnicornLangParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(UnicornLangParser::ProgramContext *ctx) = 0;

  virtual void enterStatement(UnicornLangParser::StatementContext *ctx) = 0;
  virtual void exitStatement(UnicornLangParser::StatementContext *ctx) = 0;

  virtual void enterDeclaration(UnicornLangParser::DeclarationContext *ctx) = 0;
  virtual void exitDeclaration(UnicornLangParser::DeclarationContext *ctx) = 0;

  virtual void enterAssignment(UnicornLangParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(UnicornLangParser::AssignmentContext *ctx) = 0;

  virtual void enterIo(UnicornLangParser::IoContext *ctx) = 0;
  virtual void exitIo(UnicornLangParser::IoContext *ctx) = 0;

  virtual void enterType(UnicornLangParser::TypeContext *ctx) = 0;
  virtual void exitType(UnicornLangParser::TypeContext *ctx) = 0;

  virtual void enterExpression(UnicornLangParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(UnicornLangParser::ExpressionContext *ctx) = 0;

  virtual void enterTerm(UnicornLangParser::TermContext *ctx) = 0;
  virtual void exitTerm(UnicornLangParser::TermContext *ctx) = 0;

  virtual void enterFactor(UnicornLangParser::FactorContext *ctx) = 0;
  virtual void exitFactor(UnicornLangParser::FactorContext *ctx) = 0;


};

