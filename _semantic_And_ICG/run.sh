lex s_parser.l
yacc s_parser.y
gcc y.tab.c -ll -w
./a.out test1.pl


