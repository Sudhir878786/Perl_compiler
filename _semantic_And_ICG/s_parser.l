alpha 					[A-Za-z]
digit 					[0-9]
%%
[ \t] 					;
\n					{yylineno++;}
"{"					{open1(); return '{';}
"}"					{close1(); return '}';}
"$"					{yylval.ival = SCALAR; return SCALAR;}
sub					{yylval.ival = SUB; return SUB;}
"@"					{yylval.ival = ARRAY; return ARRAY;}
"%"					{yylval.ival = HASH; return HASH;}
else					{return ELSE;}
do					return DO;
if					return IF;
struct 				return STRUCT;
^"#! /bin/bash"			return HEADER;
while					return WHILE;
for					return FOR;
return 				return RETURN;
print					return PRINT;
unless 				return UNLESS;
until 					return UNTIL;
elsif 					return ELSIF;
foreach				return FOREACH;
{alpha}({alpha}|{digit})* 		{yylval.str=strdup(yytext); return ID;}
{digit}+				{yylval.str=strdup(yytext);return NUM;}
{digit}+\.{digit}+ 			{yylval.str=strdup(yytext); return REAL;}
"<="					return LE;
">="					return GE;
"=="					return EQ;
"!="					return NEQ;
"&&"					return AND;
"||"					return OR;
\/\/.* 				;
\/\*(.*\n)*.*\*\/ 			;
\".*\"					return STRING;
.					return yytext[0];
%%


