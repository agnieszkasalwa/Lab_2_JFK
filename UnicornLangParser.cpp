
// Generated from UnicornLang.g4 by ANTLR 4.9.2


#include "UnicornLangListener.h"

#include "UnicornLangParser.h"


using namespace antlrcpp;
using namespace antlr4;

UnicornLangParser::UnicornLangParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

UnicornLangParser::~UnicornLangParser() {
  delete _interpreter;
}

std::string UnicornLangParser::getGrammarFileName() const {
  return "UnicornLang.g4";
}

const std::vector<std::string>& UnicornLangParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& UnicornLangParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

UnicornLangParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* UnicornLangParser::ProgramContext::EOF() {
  return getToken(UnicornLangParser::EOF, 0);
}

std::vector<UnicornLangParser::StatementContext *> UnicornLangParser::ProgramContext::statement() {
  return getRuleContexts<UnicornLangParser::StatementContext>();
}

UnicornLangParser::StatementContext* UnicornLangParser::ProgramContext::statement(size_t i) {
  return getRuleContext<UnicornLangParser::StatementContext>(i);
}


size_t UnicornLangParser::ProgramContext::getRuleIndex() const {
  return UnicornLangParser::RuleProgram;
}

void UnicornLangParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UnicornLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void UnicornLangParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UnicornLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}

UnicornLangParser::ProgramContext* UnicornLangParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, UnicornLangParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(21);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << UnicornLangParser::T__2)
      | (1ULL << UnicornLangParser::T__3)
      | (1ULL << UnicornLangParser::T__4)
      | (1ULL << UnicornLangParser::T__5)
      | (1ULL << UnicornLangParser::ID))) != 0)) {
      setState(18);
      statement();
      setState(23);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(24);
    match(UnicornLangParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

UnicornLangParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

UnicornLangParser::DeclarationContext* UnicornLangParser::StatementContext::declaration() {
  return getRuleContext<UnicornLangParser::DeclarationContext>(0);
}

UnicornLangParser::AssignmentContext* UnicornLangParser::StatementContext::assignment() {
  return getRuleContext<UnicornLangParser::AssignmentContext>(0);
}

UnicornLangParser::IoContext* UnicornLangParser::StatementContext::io() {
  return getRuleContext<UnicornLangParser::IoContext>(0);
}


size_t UnicornLangParser::StatementContext::getRuleIndex() const {
  return UnicornLangParser::RuleStatement;
}

void UnicornLangParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UnicornLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void UnicornLangParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UnicornLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}

UnicornLangParser::StatementContext* UnicornLangParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 2, UnicornLangParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(29);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case UnicornLangParser::T__4:
      case UnicornLangParser::T__5: {
        enterOuterAlt(_localctx, 1);
        setState(26);
        declaration();
        break;
      }

      case UnicornLangParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(27);
        assignment();
        break;
      }

      case UnicornLangParser::T__2:
      case UnicornLangParser::T__3: {
        enterOuterAlt(_localctx, 3);
        setState(28);
        io();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

UnicornLangParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

UnicornLangParser::TypeContext* UnicornLangParser::DeclarationContext::type() {
  return getRuleContext<UnicornLangParser::TypeContext>(0);
}

tree::TerminalNode* UnicornLangParser::DeclarationContext::ID() {
  return getToken(UnicornLangParser::ID, 0);
}


size_t UnicornLangParser::DeclarationContext::getRuleIndex() const {
  return UnicornLangParser::RuleDeclaration;
}

void UnicornLangParser::DeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UnicornLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclaration(this);
}

void UnicornLangParser::DeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UnicornLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclaration(this);
}

UnicornLangParser::DeclarationContext* UnicornLangParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 4, UnicornLangParser::RuleDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(31);
    type();
    setState(32);
    match(UnicornLangParser::ID);
    setState(33);
    match(UnicornLangParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

UnicornLangParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* UnicornLangParser::AssignmentContext::ID() {
  return getToken(UnicornLangParser::ID, 0);
}

UnicornLangParser::ExpressionContext* UnicornLangParser::AssignmentContext::expression() {
  return getRuleContext<UnicornLangParser::ExpressionContext>(0);
}


size_t UnicornLangParser::AssignmentContext::getRuleIndex() const {
  return UnicornLangParser::RuleAssignment;
}

void UnicornLangParser::AssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UnicornLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment(this);
}

void UnicornLangParser::AssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UnicornLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment(this);
}

UnicornLangParser::AssignmentContext* UnicornLangParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 6, UnicornLangParser::RuleAssignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(35);
    match(UnicornLangParser::ID);
    setState(36);
    match(UnicornLangParser::T__1);
    setState(37);
    expression();
    setState(38);
    match(UnicornLangParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IoContext ------------------------------------------------------------------

UnicornLangParser::IoContext::IoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

UnicornLangParser::ExpressionContext* UnicornLangParser::IoContext::expression() {
  return getRuleContext<UnicornLangParser::ExpressionContext>(0);
}

tree::TerminalNode* UnicornLangParser::IoContext::ID() {
  return getToken(UnicornLangParser::ID, 0);
}


size_t UnicornLangParser::IoContext::getRuleIndex() const {
  return UnicornLangParser::RuleIo;
}

void UnicornLangParser::IoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UnicornLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIo(this);
}

void UnicornLangParser::IoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UnicornLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIo(this);
}

UnicornLangParser::IoContext* UnicornLangParser::io() {
  IoContext *_localctx = _tracker.createInstance<IoContext>(_ctx, getState());
  enterRule(_localctx, 8, UnicornLangParser::RuleIo);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(47);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case UnicornLangParser::T__2: {
        enterOuterAlt(_localctx, 1);
        setState(40);
        match(UnicornLangParser::T__2);
        setState(41);
        expression();
        setState(42);
        match(UnicornLangParser::T__0);
        break;
      }

      case UnicornLangParser::T__3: {
        enterOuterAlt(_localctx, 2);
        setState(44);
        match(UnicornLangParser::T__3);
        setState(45);
        match(UnicornLangParser::ID);
        setState(46);
        match(UnicornLangParser::T__0);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

UnicornLangParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t UnicornLangParser::TypeContext::getRuleIndex() const {
  return UnicornLangParser::RuleType;
}

void UnicornLangParser::TypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UnicornLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType(this);
}

void UnicornLangParser::TypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UnicornLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType(this);
}

UnicornLangParser::TypeContext* UnicornLangParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 10, UnicornLangParser::RuleType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(49);
    _la = _input->LA(1);
    if (!(_la == UnicornLangParser::T__4

    || _la == UnicornLangParser::T__5)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

UnicornLangParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<UnicornLangParser::TermContext *> UnicornLangParser::ExpressionContext::term() {
  return getRuleContexts<UnicornLangParser::TermContext>();
}

UnicornLangParser::TermContext* UnicornLangParser::ExpressionContext::term(size_t i) {
  return getRuleContext<UnicornLangParser::TermContext>(i);
}

std::vector<tree::TerminalNode *> UnicornLangParser::ExpressionContext::ADD() {
  return getTokens(UnicornLangParser::ADD);
}

tree::TerminalNode* UnicornLangParser::ExpressionContext::ADD(size_t i) {
  return getToken(UnicornLangParser::ADD, i);
}

std::vector<tree::TerminalNode *> UnicornLangParser::ExpressionContext::SUB() {
  return getTokens(UnicornLangParser::SUB);
}

tree::TerminalNode* UnicornLangParser::ExpressionContext::SUB(size_t i) {
  return getToken(UnicornLangParser::SUB, i);
}


size_t UnicornLangParser::ExpressionContext::getRuleIndex() const {
  return UnicornLangParser::RuleExpression;
}

void UnicornLangParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UnicornLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void UnicornLangParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UnicornLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}

UnicornLangParser::ExpressionContext* UnicornLangParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 12, UnicornLangParser::RuleExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(51);
    term();
    setState(56);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == UnicornLangParser::ADD

    || _la == UnicornLangParser::SUB) {
      setState(52);
      _la = _input->LA(1);
      if (!(_la == UnicornLangParser::ADD

      || _la == UnicornLangParser::SUB)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(53);
      term();
      setState(58);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TermContext ------------------------------------------------------------------

UnicornLangParser::TermContext::TermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<UnicornLangParser::FactorContext *> UnicornLangParser::TermContext::factor() {
  return getRuleContexts<UnicornLangParser::FactorContext>();
}

UnicornLangParser::FactorContext* UnicornLangParser::TermContext::factor(size_t i) {
  return getRuleContext<UnicornLangParser::FactorContext>(i);
}

std::vector<tree::TerminalNode *> UnicornLangParser::TermContext::MUL() {
  return getTokens(UnicornLangParser::MUL);
}

tree::TerminalNode* UnicornLangParser::TermContext::MUL(size_t i) {
  return getToken(UnicornLangParser::MUL, i);
}

std::vector<tree::TerminalNode *> UnicornLangParser::TermContext::DIV() {
  return getTokens(UnicornLangParser::DIV);
}

tree::TerminalNode* UnicornLangParser::TermContext::DIV(size_t i) {
  return getToken(UnicornLangParser::DIV, i);
}


size_t UnicornLangParser::TermContext::getRuleIndex() const {
  return UnicornLangParser::RuleTerm;
}

void UnicornLangParser::TermContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UnicornLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTerm(this);
}

void UnicornLangParser::TermContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UnicornLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTerm(this);
}

UnicornLangParser::TermContext* UnicornLangParser::term() {
  TermContext *_localctx = _tracker.createInstance<TermContext>(_ctx, getState());
  enterRule(_localctx, 14, UnicornLangParser::RuleTerm);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(59);
    factor();
    setState(64);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == UnicornLangParser::MUL

    || _la == UnicornLangParser::DIV) {
      setState(60);
      _la = _input->LA(1);
      if (!(_la == UnicornLangParser::MUL

      || _la == UnicornLangParser::DIV)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(61);
      factor();
      setState(66);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FactorContext ------------------------------------------------------------------

UnicornLangParser::FactorContext::FactorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* UnicornLangParser::FactorContext::JEDNOROŻEC() {
  return getToken(UnicornLangParser::JEDNOROŻEC, 0);
}

tree::TerminalNode* UnicornLangParser::FactorContext::TĘCZA() {
  return getToken(UnicornLangParser::TĘCZA, 0);
}

tree::TerminalNode* UnicornLangParser::FactorContext::ID() {
  return getToken(UnicornLangParser::ID, 0);
}

UnicornLangParser::ExpressionContext* UnicornLangParser::FactorContext::expression() {
  return getRuleContext<UnicornLangParser::ExpressionContext>(0);
}


size_t UnicornLangParser::FactorContext::getRuleIndex() const {
  return UnicornLangParser::RuleFactor;
}

void UnicornLangParser::FactorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UnicornLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFactor(this);
}

void UnicornLangParser::FactorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<UnicornLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFactor(this);
}

UnicornLangParser::FactorContext* UnicornLangParser::factor() {
  FactorContext *_localctx = _tracker.createInstance<FactorContext>(_ctx, getState());
  enterRule(_localctx, 16, UnicornLangParser::RuleFactor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(74);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case UnicornLangParser::JEDNOROŻEC: {
        enterOuterAlt(_localctx, 1);
        setState(67);
        match(UnicornLangParser::JEDNOROŻEC);
        break;
      }

      case UnicornLangParser::TĘCZA: {
        enterOuterAlt(_localctx, 2);
        setState(68);
        match(UnicornLangParser::TĘCZA);
        break;
      }

      case UnicornLangParser::ID: {
        enterOuterAlt(_localctx, 3);
        setState(69);
        match(UnicornLangParser::ID);
        break;
      }

      case UnicornLangParser::T__6: {
        enterOuterAlt(_localctx, 4);
        setState(70);
        match(UnicornLangParser::T__6);
        setState(71);
        expression();
        setState(72);
        match(UnicornLangParser::T__7);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> UnicornLangParser::_decisionToDFA;
atn::PredictionContextCache UnicornLangParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN UnicornLangParser::_atn;
std::vector<uint16_t> UnicornLangParser::_serializedATN;

std::vector<std::string> UnicornLangParser::_ruleNames = {
  "program", "statement", "declaration", "assignment", "io", "type", "expression", 
  "term", "factor"
};

std::vector<std::string> UnicornLangParser::_literalNames = {
  "", "'<3'", "'='", "'wypluj'", "'zabierz'", "'jednoro\u017Cec'", "'t\u0119cza'", 
  "'('", "')'", "", "", "", "'+'", "'-'", "'*'", "'/'"
};

std::vector<std::string> UnicornLangParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "ID", "JEDNORO\u0007EC", "T\u0001CZA", 
  "ADD", "SUB", "MUL", "DIV"
};

dfa::Vocabulary UnicornLangParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> UnicornLangParser::_tokenNames;

UnicornLangParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  static const uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x3, 0x11, 0x4f, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 
       0x3, 0x2, 0x7, 0x2, 0x16, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x19, 0xb, 
       0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 
       0x20, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 
       0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 
       0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x32, 0xa, 
       0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 
       0x39, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x3c, 0xb, 0x8, 0x3, 0x9, 0x3, 
       0x9, 0x3, 0x9, 0x7, 0x9, 0x41, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x44, 
       0xb, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
       0xa, 0x3, 0xa, 0x5, 0xa, 0x4d, 0xa, 0xa, 0x3, 0xa, 0x2, 0x2, 0xb, 
       0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x2, 0x5, 0x3, 0x2, 
       0x7, 0x8, 0x3, 0x2, 0xe, 0xf, 0x3, 0x2, 0x10, 0x11, 0x2, 0x4e, 0x2, 
       0x17, 0x3, 0x2, 0x2, 0x2, 0x4, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x6, 0x21, 
       0x3, 0x2, 0x2, 0x2, 0x8, 0x25, 0x3, 0x2, 0x2, 0x2, 0xa, 0x31, 0x3, 
       0x2, 0x2, 0x2, 0xc, 0x33, 0x3, 0x2, 0x2, 0x2, 0xe, 0x35, 0x3, 0x2, 
       0x2, 0x2, 0x10, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x12, 0x4c, 0x3, 0x2, 0x2, 
       0x2, 0x14, 0x16, 0x5, 0x4, 0x3, 0x2, 0x15, 0x14, 0x3, 0x2, 0x2, 0x2, 
       0x16, 0x19, 0x3, 0x2, 0x2, 0x2, 0x17, 0x15, 0x3, 0x2, 0x2, 0x2, 0x17, 
       0x18, 0x3, 0x2, 0x2, 0x2, 0x18, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x19, 0x17, 
       0x3, 0x2, 0x2, 0x2, 0x1a, 0x1b, 0x7, 0x2, 0x2, 0x3, 0x1b, 0x3, 0x3, 
       0x2, 0x2, 0x2, 0x1c, 0x20, 0x5, 0x6, 0x4, 0x2, 0x1d, 0x20, 0x5, 0x8, 
       0x5, 0x2, 0x1e, 0x20, 0x5, 0xa, 0x6, 0x2, 0x1f, 0x1c, 0x3, 0x2, 0x2, 
       0x2, 0x1f, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x1f, 0x1e, 0x3, 0x2, 0x2, 0x2, 
       0x20, 0x5, 0x3, 0x2, 0x2, 0x2, 0x21, 0x22, 0x5, 0xc, 0x7, 0x2, 0x22, 
       0x23, 0x7, 0xb, 0x2, 0x2, 0x23, 0x24, 0x7, 0x3, 0x2, 0x2, 0x24, 0x7, 
       0x3, 0x2, 0x2, 0x2, 0x25, 0x26, 0x7, 0xb, 0x2, 0x2, 0x26, 0x27, 0x7, 
       0x4, 0x2, 0x2, 0x27, 0x28, 0x5, 0xe, 0x8, 0x2, 0x28, 0x29, 0x7, 0x3, 
       0x2, 0x2, 0x29, 0x9, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x2b, 0x7, 0x5, 0x2, 
       0x2, 0x2b, 0x2c, 0x5, 0xe, 0x8, 0x2, 0x2c, 0x2d, 0x7, 0x3, 0x2, 0x2, 
       0x2d, 0x32, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x2f, 0x7, 0x6, 0x2, 0x2, 0x2f, 
       0x30, 0x7, 0xb, 0x2, 0x2, 0x30, 0x32, 0x7, 0x3, 0x2, 0x2, 0x31, 0x2a, 
       0x3, 0x2, 0x2, 0x2, 0x31, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x32, 0xb, 0x3, 
       0x2, 0x2, 0x2, 0x33, 0x34, 0x9, 0x2, 0x2, 0x2, 0x34, 0xd, 0x3, 0x2, 
       0x2, 0x2, 0x35, 0x3a, 0x5, 0x10, 0x9, 0x2, 0x36, 0x37, 0x9, 0x3, 
       0x2, 0x2, 0x37, 0x39, 0x5, 0x10, 0x9, 0x2, 0x38, 0x36, 0x3, 0x2, 
       0x2, 0x2, 0x39, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x38, 0x3, 0x2, 0x2, 
       0x2, 0x3a, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x3b, 0xf, 0x3, 0x2, 0x2, 0x2, 
       0x3c, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x42, 0x5, 0x12, 0xa, 0x2, 
       0x3e, 0x3f, 0x9, 0x4, 0x2, 0x2, 0x3f, 0x41, 0x5, 0x12, 0xa, 0x2, 
       0x40, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x41, 0x44, 0x3, 0x2, 0x2, 0x2, 0x42, 
       0x40, 0x3, 0x2, 0x2, 0x2, 0x42, 0x43, 0x3, 0x2, 0x2, 0x2, 0x43, 0x11, 
       0x3, 0x2, 0x2, 0x2, 0x44, 0x42, 0x3, 0x2, 0x2, 0x2, 0x45, 0x4d, 0x7, 
       0xc, 0x2, 0x2, 0x46, 0x4d, 0x7, 0xd, 0x2, 0x2, 0x47, 0x4d, 0x7, 0xb, 
       0x2, 0x2, 0x48, 0x49, 0x7, 0x9, 0x2, 0x2, 0x49, 0x4a, 0x5, 0xe, 0x8, 
       0x2, 0x4a, 0x4b, 0x7, 0xa, 0x2, 0x2, 0x4b, 0x4d, 0x3, 0x2, 0x2, 0x2, 
       0x4c, 0x45, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x46, 0x3, 0x2, 0x2, 0x2, 0x4c, 
       0x47, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x48, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x13, 
       0x3, 0x2, 0x2, 0x2, 0x8, 0x17, 0x1f, 0x31, 0x3a, 0x42, 0x4c, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

UnicornLangParser::Initializer UnicornLangParser::_init;
