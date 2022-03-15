%{
	#include <stdio.h>
	#include <stdlib.h>
	#include "s_symbol.c"
	int ADDRESS = 4000;
int i=1,line_no_1=0,lbl1[20],TOP_1;
int STACK[100],index1=0,end[100],arr[10],gl1,gl2,ct,c,b,fl,top=0,lbl[20],line_no=0,TOP=0;
char st1[100][10];
char i_[2]="0";
char temp[2]="t";
char null[2]=" ";
void yyerror(char *s);
int LINE_PRINT();
void open1()
{
	STACK[index1]=i;
	i++;
	index1++;
	return;
}
void close1()
{
	index1--;
	end[STACK[index1]]=1;
	STACK[index1]=0;
	return;
}
void IF_FUNCTION1()
{
	line_no++;
	strcpy(temp,"t");
	strcat(temp,i_);
	printf("%s = not %s\n",temp,st1[top]);
 	printf("if %s goto L%d\n",temp,line_no);
	i_[0]++;
	lbl[++TOP]=line_no;	
	
}
void IF_FUNCTION2()
{
	line_no++;
	printf("goto L%d\n",line_no);
	printf("L%d: \n",lbl[TOP--]);
	lbl[++TOP]=line_no;
}
void IF_FUNCTION3()
{
	printf("L%d:\n",lbl[TOP--]);
}
void WHILE_FUNCTION1()
{
	line_no++;
	lbl[++TOP]=line_no;
	printf("L%d:\n",line_no);
}
void WHILE_FUNCTION2()
{
	line_no++;
	strcpy(temp,"t");
	strcat(temp,i_);
	printf("%s = not %s\n",temp,st1[top--]);
 	printf("if %s goto L%d\n",temp,line_no);
	i_[0]++;
	lbl[++TOP]=line_no;
}
void WHILE_FUNCTION3()
{
	int y=lbl[TOP--];
	printf("goto L%d\n",lbl[TOP--]);
	printf("L%d:\n",y);
}
void DO_WHILE_1()
{
	line_no++;
	lbl[++TOP]=line_no;
	printf("L%d:\n",line_no);
}
void DO_WHILE_2()
{
 	printf("if %s goto L%d\n",st1[top--],lbl[TOP--]);
}
void FOR_1()
{
	line_no++;
	lbl[++TOP]=line_no;
	printf("L%d:\n",line_no);
}
void FOR_2()
{
	line_no++;
	strcpy(temp,"t");
	strcat(temp,i_);
	printf("%s = not %s\n",temp,st1[top--]);
 	printf("if %s goto L%d\n",temp,line_no);
	i_[0]++;
	lbl[++TOP]=line_no;
	line_no++;
	printf("goto L%d\n",line_no);
	lbl[++TOP]=line_no;
	line_no++;
	printf("L%d:\n",line_no);	
	lbl[++TOP]=line_no;
}
void FOR_3()
{
	printf("goto L%d\n",lbl[TOP-3]);
	printf("L%d:\n",lbl[TOP-1]);
}
void FOR_4()
{
	printf("goto L%d\n",lbl[TOP]);
	printf("L%d:\n",lbl[TOP-2]);
	TOP-=4;
}
void push(char *a)
{
	strcpy(st1[++top],a);
}
void array1()
{
	strcpy(temp,"t");
	strcat(temp,i_);
	printf("%s = %s * 4\n",temp,st1[top]);
	strcpy(st1[top],temp);
	i_[0]++;
	strcpy(temp,"t");
	strcat(temp,i_);
	printf("%s = %s [ %s ] \n",temp,st1[top-1],st1[top]);
	top--;
	strcpy(st1[top],temp);
	i_[0]++;	
}
void CODE_GENERATION()
{
	strcpy(temp,"t");
	strcat(temp,i_);
	printf("%s = %s %s %s\n",temp,st1[top-2],st1[top-1],st1[top]);
	top-=2;
	strcpy(st1[top],temp);
	i_[0]++;
}
void CODE_GEN_UMIN()
{
	strcpy(temp,"t");
	strcat(temp,i_);
	printf("%s = -%s\n",temp,st1[top]);
	top--;
	strcpy(st1[top],temp);
	i_[0]++;
}
void CODE_GEN_ASSIGN()
{
	printf("%s = %s\n",st1[top-2],st1[top]);
	top-=2;
}


%}
%token<ival> SCALAR ARRAY HASH SUB
%token<str> ID NUM REAL LE GE EQ NEQ AND OR
%token WHILE IF RETURN HEADER STRING PRINT FUNCTION DO ARRAY ELSE STRUCT STRUCT_VAR FOR UNLESS ELSIF UNTIL FOREACH
%left LE GE EQ NEQ AND OR '<' '>'
%right '='
%right UMINUS 
%left '+' '-'
%left '*' '/' 
%type<str> assignment assignment1 CONST '=' '+' '-' '*' '/' E T F 
%type<ival> Type
%union {
		int ival;
		char *str;
	}
%%

start : Function start 
	| HEADER start 
	| DECLARATIONS start
	| 
	;

Function : Type ID  compound_statement  {

	if (!(strcmp($2,"printf") && strcmp($2,"scanf") && strcmp($2,"getc") && strcmp($2,"gets") && strcmp($2,"getchar") && strcmp	($2,"puts") && strcmp($2,"putchar") && strcmp($2,"clearerr") && strcmp($2,"getw") && strcmp($2,"putw") && strcmp($2,"putc") && strcmp($2,"rewind") && strcmp($2,"sprint") && strcmp($2,"sscanf") && strcmp($2,"remove") && strcmp($2,"fflush"))) 
		printf("Error : Type mismatch in redeclaration of %s : Line %d\n",$2,LINE_PRINT()); 
	else 
	{ 
		
		insert($2,FUNCTION,ADDRESS); 
		insert($2,$1,ADDRESS); 
		ADDRESS+=4;
	}
	}
	;

Type : SCALAR
	| ARRAY
	| HASH
	| SUB
	;

compound_statement : '{' statements '}'
	;

statements : statements statement 
	| 
	;

statement : DECLARATIONS
	| if 
	| unless
	| ID '(' ')' ';' 
	| while 
	| dowhile 
	| for 
	| until
	| foreach
	| RETURN CONST ';' {
					if(!(strspn($2,"0123456789")==strlen($2))) // float
						STORE_TYPE(ct,ARRAY); 
					else
						STORE_TYPE(ct,SCALAR);  // int
						ct++;
					} 
	| ';'
	| PRINT  STRING  ';' 
	| compound_statement 
	;

dowhile : DO {DO_WHILE_1();} compound_statement WHILE '(' E ')' {DO_WHILE_2();} ';'
	;

for	: FOR '(' E {FOR_1();} ';' E {FOR_2();}';' E {FOR_3();} ')' compound_statement {FOR_4();}
	;
foreach : FOREACH SCALAR ID '(' ARRAY ID ')' compound_statement {FOR_4();}
	;
els : else | elsif ;
if : 	 IF '(' E ')' {IF_FUNCTION1();} compound_statement {IF_FUNCTION2();} els
	;
unless : UNLESS '(' E ')' {IF_FUNCTION1();} compound_statement {IF_FUNCTION2();} els
	;

else : ELSE compound_statement {IF_FUNCTION3();}
	| 
	;
elsif : ELSIF compound_statement {IF_FUNCTION3();}
	| 
	;

while : WHILE {WHILE_FUNCTION1();}'(' E ')' {WHILE_FUNCTION2();} compound_statement {WHILE_FUNCTION3();}
	;
until : UNTIL {WHILE_FUNCTION1();}'(' E ')' {WHILE_FUNCTION2();} compound_statement {WHILE_FUNCTION3();}
	;	
assignment : ID '=' CONST 
	| ID '+' assignment 
	| ID ',' assignment
	| CONST ',' assignment	
	| ID
	| CONST
	;

assignment1 : ID {push($1);} '=' {strcpy(st1[++top],"=");} E {CODE_GEN_ASSIGN();}  
	{
		int sct=returnscope($1,STACK[index1-1]); 
		int type=returntype($1,sct); 
		if((!(strspn($5,"0123456789")==strlen($5))) && type==258 && fl==0) 
			printf("\nError : Type Mismatch : Line %d\n",LINE_PRINT()); 
		if(!LOOK_UP_SYMBOL($1)) 
		{ 
			int CURR_SCP=STACK[index1-1]; 
			int SCP=returnscope($1,CURR_SCP); 
			if((SCP<=CURR_SCP && end[SCP]==0) && !(SCP==0)) 
			{
				CSU($1,$5,CURR_SCP);
			}
		} 
		}

	| ID ',' assignment1    {
					if(LOOK_UP_SYMBOL($1)) 
						printf("\nUndeclared Variable %s : Line %d\n",$1,LINE_PRINT());
				}
	| CONST ',' assignment1   
	| ID  {
		if(LOOK_UP_SYMBOL($1)) 
			printf("\nUndeclared Variable %s : Line %d\n",$1,LINE_PRINT());
		}
	| CONST
	;
	
array_cfg : 
	CONST ')'
	| CONST ',' array_cfg
	;
	
CONST : NUM
	| REAL
	| STRING
	| '(' array_cfg
	;

DECLARATIONS : Type ID {push($2);} '=' {strcpy(st1[++top],"=");} E {CODE_GEN_ASSIGN();} ';'  
	{
		if( (!(strspn($6,"0123456789")==strlen($6))) && $1==258 && (fl==0)) 
		{
			printf("\nError : Type Mismatch : Line %d\n",LINE_PRINT());
			fl=1;
		} 
		if(!LOOK_UP_SYMBOL($2)) 
		{
			int CURR_SCP=STACK[index1-1]; 
			int PREV_SCP=returnscope($2,CURR_SCP); 
			if(CURR_SCP==PREV_SCP) 
				printf("\nError : Redeclaration of %s : Line %d\n",$2,LINE_PRINT()); 
			else 
			{
				INSERTION_OF_DUPLICATE($2,$1,ADDRESS,CURR_SCP);
				CSU($2,$6,STACK[index1-1]);
				int sg=returnscope($2,STACK[index1-1]); 
				ADDRESS+=4;
			}
		} 
		else 
		{ 
			int SCP=STACK[index1-1];  
			insert($2,$1,ADDRESS); 
			SCOPE_ADD($2,SCP); 
			CSU($2,$6,STACK[index1-1]);
			ADDRESS+=4;
		}
	}

	| assignment1 ';'  {
				if(!LOOK_UP_SYMBOL($1)) 
				{ 
					int CURR_SCP=STACK[index1-1]; 
					int SCP=returnscope($1,CURR_SCP); 
					if(!(SCP<=CURR_SCP && end[SCP]==0) || SCP==0) 
						printf("\nError : Variable %s out of SCP : Line %d\n",$1,LINE_PRINT());
				} 
				else 
					printf("\nError : Undeclared Variable %s : Line %d\n",$1,LINE_PRINT()); 
				}

	| HASH ID '=' CONST ';' {
						insert($2,HASH,ADDRESS); 
						insert($2,$1,ADDRESS); 
						ADDRESS+=12; 
					}
	| ID '[' assignment1 ']' ';'
	| STRUCT ID '{' DECLARATIONS '}' ';' {
						insert($2,STRUCT,ADDRESS); 
						ADDRESS+=4; 
						}
	| STRUCT ID ID ';' {
				insert($3,STRUCT_VAR,ADDRESS); 
				ADDRESS+=4;
				}
	| error
	;

array : ID {push($1);}'[' E ']'
	;

E : E '+'{strcpy(st1[++top],"+");} T{CODE_GENERATION();}
   | E '-'{strcpy(st1[++top],"-");} T{CODE_GENERATION();}
   | T
   | ID {push($1);} LE {strcpy(st1[++top],"<=");} E {CODE_GENERATION();}
   | ID {push($1);} GE {strcpy(st1[++top],">=");} E {CODE_GENERATION();}
   | ID {push($1);} EQ {strcpy(st1[++top],"==");} E {CODE_GENERATION();}
   | ID {push($1);} NEQ {strcpy(st1[++top],"!=");} E {CODE_GENERATION();}
   | ID {push($1);} AND {strcpy(st1[++top],"&&");} E {CODE_GENERATION();}
   | ID {push($1);} OR {strcpy(st1[++top],"||");} E {CODE_GENERATION();}
   | ID {push($1);} '<' {strcpy(st1[++top],"<");} E {CODE_GENERATION();}
   | ID {push($1);} '>' {strcpy(st1[++top],">");} E {CODE_GENERATION();}
   | ID {push($1);} '=' {strcpy(st1[++top],"||");} E {CODE_GEN_ASSIGN();}
   | array {array1();}
   ;
T : T '*'{strcpy(st1[++top],"*");} F{CODE_GENERATION();}
   | T '/'{strcpy(st1[++top],"/");} F{CODE_GENERATION();}
   | F
   ;
F : '(' E ')' {$$=$2;}
   | '-'{strcpy(st1[++top],"-");} F{CODE_GEN_UMIN();} %prec UMINUS
   | ID {push($1);fl=1;}
   | CONST {push($1);}
   ;

%%

#include "lex.yy.c"
#include<ctype.h>


int main(int argc, char *argv[])
{
	yyin =fopen(argv[1],"r");
	yyparse();
	if(!yyparse())
	{
		printf("Parsing done\n");
		print();
	}
	else
	{
		printf("Error\n");
	}
	fclose(yyin);
	return 0;
}

void yyerror(char *s)
{
	printf("\nLine %d : %s %s\n",yylineno,s,yytext);
}
int LINE_PRINT()
{
	return yylineno;
}
