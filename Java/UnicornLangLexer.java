// Generated from UnicornLang.g4 by ANTLR 4.9.2
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class UnicornLangLexer extends Lexer {
	static { RuntimeMetaData.checkVersion("4.9.2", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, ID=9, 
		JEDNOROŻEC=10, TĘCZA=11, ADD=12, SUB=13, MUL=14, DIV=15;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "ID", 
			"JEDNOROŻEC", "TĘCZA", "ADD", "SUB", "MUL", "DIV"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'<3'", "'='", "'wypluj'", "'zabierz'", "'jednoro\u017Cec'", "'t\u0119cza'", 
			"'('", "')'", null, null, null, "'+'", "'-'", "'*'", "'/'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, "ID", "JEDNORO\u0007EC", 
			"T\u0001CZA", "ADD", "SUB", "MUL", "DIV"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}


	public UnicornLangLexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "UnicornLang.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public String[] getChannelNames() { return channelNames; }

	@Override
	public String[] getModeNames() { return modeNames; }

	@Override
	public ATN getATN() { return _ATN; }

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2\21g\b\1\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\3\2\3\2\3\2\3\3\3\3"+
		"\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\6\3\6\3"+
		"\6\3\6\3\6\3\6\3\6\3\6\3\6\3\6\3\6\3\7\3\7\3\7\3\7\3\7\3\7\3\b\3\b\3\t"+
		"\3\t\3\n\6\nL\n\n\r\n\16\nM\3\13\6\13Q\n\13\r\13\16\13R\3\f\6\fV\n\f\r"+
		"\f\16\fW\3\f\3\f\6\f\\\n\f\r\f\16\f]\3\r\3\r\3\16\3\16\3\17\3\17\3\20"+
		"\3\20\2\2\21\3\3\5\4\7\5\t\6\13\7\r\b\17\t\21\n\23\13\25\f\27\r\31\16"+
		"\33\17\35\20\37\21\3\2\4\4\2C\\c|\3\2\62;\2j\2\3\3\2\2\2\2\5\3\2\2\2\2"+
		"\7\3\2\2\2\2\t\3\2\2\2\2\13\3\2\2\2\2\r\3\2\2\2\2\17\3\2\2\2\2\21\3\2"+
		"\2\2\2\23\3\2\2\2\2\25\3\2\2\2\2\27\3\2\2\2\2\31\3\2\2\2\2\33\3\2\2\2"+
		"\2\35\3\2\2\2\2\37\3\2\2\2\3!\3\2\2\2\5$\3\2\2\2\7&\3\2\2\2\t-\3\2\2\2"+
		"\13\65\3\2\2\2\r@\3\2\2\2\17F\3\2\2\2\21H\3\2\2\2\23K\3\2\2\2\25P\3\2"+
		"\2\2\27U\3\2\2\2\31_\3\2\2\2\33a\3\2\2\2\35c\3\2\2\2\37e\3\2\2\2!\"\7"+
		">\2\2\"#\7\65\2\2#\4\3\2\2\2$%\7?\2\2%\6\3\2\2\2&\'\7y\2\2\'(\7{\2\2("+
		")\7r\2\2)*\7n\2\2*+\7w\2\2+,\7l\2\2,\b\3\2\2\2-.\7|\2\2./\7c\2\2/\60\7"+
		"d\2\2\60\61\7k\2\2\61\62\7g\2\2\62\63\7t\2\2\63\64\7|\2\2\64\n\3\2\2\2"+
		"\65\66\7l\2\2\66\67\7g\2\2\678\7f\2\289\7p\2\29:\7q\2\2:;\7t\2\2;<\7q"+
		"\2\2<=\7\u017e\2\2=>\7g\2\2>?\7e\2\2?\f\3\2\2\2@A\7v\2\2AB\7\u011b\2\2"+
		"BC\7e\2\2CD\7|\2\2DE\7c\2\2E\16\3\2\2\2FG\7*\2\2G\20\3\2\2\2HI\7+\2\2"+
		"I\22\3\2\2\2JL\t\2\2\2KJ\3\2\2\2LM\3\2\2\2MK\3\2\2\2MN\3\2\2\2N\24\3\2"+
		"\2\2OQ\t\3\2\2PO\3\2\2\2QR\3\2\2\2RP\3\2\2\2RS\3\2\2\2S\26\3\2\2\2TV\t"+
		"\3\2\2UT\3\2\2\2VW\3\2\2\2WU\3\2\2\2WX\3\2\2\2XY\3\2\2\2Y[\7\60\2\2Z\\"+
		"\t\3\2\2[Z\3\2\2\2\\]\3\2\2\2][\3\2\2\2]^\3\2\2\2^\30\3\2\2\2_`\7-\2\2"+
		"`\32\3\2\2\2ab\7/\2\2b\34\3\2\2\2cd\7,\2\2d\36\3\2\2\2ef\7\61\2\2f \3"+
		"\2\2\2\7\2MRW]\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}