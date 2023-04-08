// Generated from UnicornLang.g4 by ANTLR 4.9.2
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link UnicornLangParser}.
 */
public interface UnicornLangListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link UnicornLangParser#program}.
	 * @param ctx the parse tree
	 */
	void enterProgram(UnicornLangParser.ProgramContext ctx);
	/**
	 * Exit a parse tree produced by {@link UnicornLangParser#program}.
	 * @param ctx the parse tree
	 */
	void exitProgram(UnicornLangParser.ProgramContext ctx);
	/**
	 * Enter a parse tree produced by {@link UnicornLangParser#statement}.
	 * @param ctx the parse tree
	 */
	void enterStatement(UnicornLangParser.StatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link UnicornLangParser#statement}.
	 * @param ctx the parse tree
	 */
	void exitStatement(UnicornLangParser.StatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link UnicornLangParser#declaration}.
	 * @param ctx the parse tree
	 */
	void enterDeclaration(UnicornLangParser.DeclarationContext ctx);
	/**
	 * Exit a parse tree produced by {@link UnicornLangParser#declaration}.
	 * @param ctx the parse tree
	 */
	void exitDeclaration(UnicornLangParser.DeclarationContext ctx);
	/**
	 * Enter a parse tree produced by {@link UnicornLangParser#assignment}.
	 * @param ctx the parse tree
	 */
	void enterAssignment(UnicornLangParser.AssignmentContext ctx);
	/**
	 * Exit a parse tree produced by {@link UnicornLangParser#assignment}.
	 * @param ctx the parse tree
	 */
	void exitAssignment(UnicornLangParser.AssignmentContext ctx);
	/**
	 * Enter a parse tree produced by {@link UnicornLangParser#io}.
	 * @param ctx the parse tree
	 */
	void enterIo(UnicornLangParser.IoContext ctx);
	/**
	 * Exit a parse tree produced by {@link UnicornLangParser#io}.
	 * @param ctx the parse tree
	 */
	void exitIo(UnicornLangParser.IoContext ctx);
	/**
	 * Enter a parse tree produced by {@link UnicornLangParser#type}.
	 * @param ctx the parse tree
	 */
	void enterType(UnicornLangParser.TypeContext ctx);
	/**
	 * Exit a parse tree produced by {@link UnicornLangParser#type}.
	 * @param ctx the parse tree
	 */
	void exitType(UnicornLangParser.TypeContext ctx);
	/**
	 * Enter a parse tree produced by {@link UnicornLangParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterExpression(UnicornLangParser.ExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link UnicornLangParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitExpression(UnicornLangParser.ExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link UnicornLangParser#term}.
	 * @param ctx the parse tree
	 */
	void enterTerm(UnicornLangParser.TermContext ctx);
	/**
	 * Exit a parse tree produced by {@link UnicornLangParser#term}.
	 * @param ctx the parse tree
	 */
	void exitTerm(UnicornLangParser.TermContext ctx);
	/**
	 * Enter a parse tree produced by {@link UnicornLangParser#factor}.
	 * @param ctx the parse tree
	 */
	void enterFactor(UnicornLangParser.FactorContext ctx);
	/**
	 * Exit a parse tree produced by {@link UnicornLangParser#factor}.
	 * @param ctx the parse tree
	 */
	void exitFactor(UnicornLangParser.FactorContext ctx);
}