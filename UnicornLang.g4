grammar UnicornLang;

program : statement* EOF;
statement : declaration | assignment | io;
declaration : type ID '<3';
assignment : ID '=' expression '<3';
io : 'wypluj' expression '<3' | 'zabierz' ID '<3';

type : 'jednorożec' | 'tęcza';
expression : term ((ADD | SUB) term)*;
term : factor ((MUL | DIV) factor)*;
factor : JEDNOROŻEC | TĘCZA | ID | '(' expression ')';

ID : [a-zA-Z]+;
JEDNOROŻEC : [0-9]+;
TĘCZA : [0-9]+ '.' [0-9]+;

ADD : '+';
SUB : '-';
MUL : '*';
DIV : '/';
