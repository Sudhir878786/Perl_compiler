%{
int lineno = 1;
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// 2-31 defined as keywords
#define BREAK 2
#define CASE 3
#define CHAR 4
#define CONST 5
#define CONTINUE 6
#define DEFAULT 7
#define DO 8
#define DOUBLE 9
#define ELSE 10
#define MY 11
#define EXTERN 12
#define FLOAT 13
#define FOR 14
#define IF 16
#define INT 17
#define LONG 18
#define REGISTER 19
#define RETURN 20
#define SHORT 21
#define SIGNED 22
#define USE 23
#define STATIC 24
#define STRUCT 25
#define SWITCH 26

#define UNION 28
#define UNSIGNED 29
#define VOID 30
#define SUBT 31

#define SUB 33 
#define IDENTIFIER 100
#define SLC 34
#define MLCS 35
#define MLCE 36
// 37 - 52 are defined as operator
#define LEQ 37
#define GEQ 38
#define EQEQ 39
#define NEQ 40
#define LOR 41
#define LAND 42
#define ASSIGN 43
#define PLUS 44
#define MULT 46
#define DIV 47
#define MOD 48
#define LESSER 49
#define GREATER 50
#define INCR 51
#define DECR 52

#define COMMA 53   //special symbol
#define SEMI 54         //special symbol

#define HEADER 55
#define MAIN 56


#define SCANF 58
#define DEFINE 59

#define INT_CONST 60
#define FLOAT_CONST 61

#define TYPE_SPEC 62

#define DQ 63        //special symbol

#define OBO 64        //special symbol
#define OBC 65         //special symbol
#define CBO 66        //special symbol
#define CBC 67         //special symbol
#define HASH 68       //special symbol

#define ARR 69
#define FUNC 70

#define NUM_ERR 71
#define UNKNOWN 72

#define CHAR_CONST 73                         // character const
#define SIGNED_CONST 74                      // Signed const  
#define STRING_CONST 75                     //String const

#define VARIABLE 76
// 77-84 defined as Control flow
#define UNTIL 77
#define FOREACH 78
#define NEXT 79
#define LAST 80
#define REDO 81
#define GOTO 82
#define WHILE 83
#define THEN 84

#define HASH_BANG 90
// 91 and 92 are pragma in perl
#define WARNINGS 91
#define STRICT 92
  

#define VARIABLE2 101    //array in perl   (data type)
#define VARIABLE3 102     //hash in perl   (data type)
#define SHEBANG 110
// pre defined function   
#define REVERSE 120
#define MAP 121
#define PRINT 57 
#define SORT 122
#define MULTILINECOMMENTBEGIN  150
#define MULTILINECOMMENTEND 151
%}


digit [0-9]
VARIABLE       [$]+[0-9a-zA-Z_]+
VARIABLE2     [@]+[0-9a-zA-Z_]+
VARIABLE3   [%]+[0-9a-zA-Z_]+
SHEBANG    [#][!]+[a-zA--Z]+

alpha [a-zA-Z][0-9a-zA-Z_]*
SUB ("sub")(" ")[a-zA-Z][0-9a-zA-Z_]*
und [_]
space [ ]
tab [	]
line [\n]
char \'.\'
at [@]

string \"(.^([%d]|[%f]|[%s]|[%c]))\"


MULTILINECOMMENTBEGIN ^=[a-zA-Z]
MULTILINECOMMENTEND ^"=cut"$   

%x comment

%%
{space}* {}
{tab}* {}
{string} return STRING_CONST;
{char} return CHAR_CONST;
{line} {lineno++;}
SHEBANG return SHEBANG;
break return BREAK;
redo return REDO;
last return LAST;
goto return GOTO;
until return UNTIL;
next return NEXT;
case return CASE;
char return CHAR;
const return CONST;
continue return CONTINUE;
use return USE;
default return DEFAULT;
do return DO;
sub return SUB;
double return DOUBLE;
else return ELSE;
my return MY;
extern return EXTERN;
float return FLOAT;
for return FOR;
warnings return WARNINGS;
strict return STRICT;
if return IF;

register return REGISTER;
return return RETURN;
short return SHORT;
signed return SIGNED;
then return THEN;
static return STATIC;
struct return STRUCT;
switch return SWITCH;
foreach return FOREACH;
union return UNION;
unsigned return UNSIGNED;
void return VOID;
reverse return REVERSE;
map return MAP;
sort return SORT;


while return WHILE;

print return PRINT;
scanf return SCANF;

{alpha} return IDENTIFIER;
{VARIABLE}* return VARIABLE;
{VARIABLE2}* return VARIABLE2;
{VARIABLE3}* return VARIABLE3;

[+-][0-9]{digit}*(\.{digit}+)? return SIGNED_CONST;
   /* ---------------------------------------------------------------------------------------Operators defined ---------------------------------------------------------------------------------------------------------- */
"//" return SLC;
"/*" return MLCS;
"*/" return MLCE;

"<=" return LEQ;
">=" return GEQ;
"==" return EQEQ;
"!=" return NEQ;
"||" return LOR;
"&&" return LAND;
"=" return ASSIGN;
"+" return PLUS;
"-" return SUBT;
"*" return MULT;
"/" return DIV;
"%" return MOD;
"<" return LESSER;
">" return GREATER;
"++" return INCR;
"--" return DECR;

"," return COMMA;
";" return SEMI;




"#!/usr/bin/perl>" return HEADER;

"main()" return MAIN;

{digit}+ return INT_CONST;                             // int const
({digit}+)\.({digit}+) return FLOAT_CONST;          // float const



"#"((.)*)\n                            printf("Single LineComment\n",lineno);     /* single line comments*/


  
{MULTILINECOMMENTBEGIN}					{ BEGIN(comment);}  printf("Starting multi line commenting\n");                         /* Multi line comments*/
<comment>[^=\n]*        /* eat anything that's not a '=' */
<comment>\n             ++lineno;
<comment>^"=cut"$   {BEGIN(INITIAL);}  printf("Comment End and begin initial code\n");



 /*------------------------------------------------special symbol --------------------------------------------------------- */

"\"" return DQ;
"(" return OBO;
")" return OBC;
"{" return CBO;
"}" return CBC;
"#" return HASH;

{VARIABLE}({alpha}|{digit}|{und})*\[{digit}*\] return ARR;
{alpha}{space}({alpha}|{digit}|{und})*\(({alpha}|{digit}|{und}|{space})*\) return FUNC;
({digit}+)\.({digit}+)\.({digit}|\.)* return NUM_ERR;
({digit}|{at})+({alpha}|{digit}|{und}|{at})* return UNKNOWN;
%%
 //--------------------------------------------------------------------------------------from line 255 -327  we have defined a hash table to  to store the output in sequence ------------------------------------------------
struct node
{
	char token[100];
    	char attr[100];
	struct node *next;
};

struct hash
{
	struct node *head;
	int count;
};

struct hash hashTable[1000];
int eleCount = 1000;

struct node * createNode(char *token, char *attr)
{
	struct node *newnode;
	newnode = (struct node *) malloc(sizeof(struct node));
	strcpy(newnode->token, token);
	strcpy(newnode->attr, attr);
	newnode->next = NULL;
	return newnode;
}

int hashIndex(char *token)
{
	int hi=0;
	int l,i;
	for(i=0;token[i]!='\0';i++)
	{
		hi = hi + (int)token[i];
	}
	hi = hi%eleCount;
	return hi;
}

void insertToHash(char *token, char *attr)
{
	int flag=0;
	int hi;
	hi = hashIndex(token);
	struct node *newnode = createNode(token, attr);
	/* head of list for the bucket with index "hashIndex" */
	if (hashTable[hi].head==NULL)
	{
		hashTable[hi].head = newnode;
	        hashTable[hi].count = 1;
	        return;
	}
	struct node *myNode;
    	myNode = hashTable[hi].head;
	while (myNode != NULL)
    	{
        	if (strcmp(myNode->token, token)==0)
        	{
            		flag = 1;
            		break;
        	}
        	myNode = myNode->next;
    	}
	if(!flag)
	{
		//adding new node to the list
		newnode->next = (hashTable[hi].head);
		//update the head of the list and no of nodes in the current bucket
		hashTable[hi].head = newnode;
		hashTable[hi].count++;
	}
	return;
}
 //--------------------------------------function to display the hash table------------------------
void display()
{
    	struct node *myNode;
    	int i,j, k=1;
    	printf("-------------------------------------------------------------------");
    	printf("\nSNo \t|\tToken \t\t|\tToken Type \t\n");
        printf("-------------------------------------------------------------------\n");
    	for (i = 0; i < eleCount; i++)
    	{
        	if (hashTable[i].count == 0)
            		continue;
        	myNode = hashTable[i].head;
        	if (!myNode)
            		continue;
        	while (myNode != NULL)
        	{
					if(strcmp(myNode->attr,"SPECIAL SYMBOL")==0)
					{
						printf("%d\t\t", k++);
            			printf("T_%s\t\t\t", myNode->token);
            			printf("%d\t\n", *myNode->token);
					}
					else
					{
						printf("%d\t\t", k++);
						printf("T_%s\t\t\t", myNode->token);
						printf("%s\t\n", myNode->attr);
					}
            		myNode = myNode->next;
        	}
	}
   	return;
}
 // ---------------------------------------------------------------main function ----------------------------------------------------
int main()
{
	int scan, slcline=0, mlc=0, mlcline=0, dq=0, dqline=0;     //  pointers to iterate over the test file  
	yyin = fopen("test5.pl","r"); //add test case files here
	printf("\n\n");
	scan = yylex();
	while(scan)
	{
		if(lineno == slcline)
		{
			scan = yylex();
			continue;
		}
		if(lineno!=dqline && dqline!=0)
		{
			if(dq%2!=0)
				printf("\n******** ERROR!! INCOMPLETE STRING at Line %d ********\n\n", dqline);
			dq=0;
		}
		if(scan==110  && mlc==0)
		{
			printf("%s\t\t\tHASH_BANG\t\t\t\tLine %d\n", yytext, lineno);
			insertToHash(yytext, "HASH_BANG");
		}
	
		if(scan==101  && mlc==0)
		{
			printf("%s\t\t\tARRAY\t\t\t\tLine %d\n", yytext, lineno);
			insertToHash(yytext, "ARRAY");
		}
		
		if(scan==102  && mlc==0)
		{
			printf("%s\t\t\tHASH\t\t\t\tLine %d\n", yytext, lineno);
			insertToHash(yytext, "HASH");
		}
		if((scan>=1 && scan<=32) && mlc==0)
		{
			printf("%s\t\t\tKEYWORD\t\t\t\tLine %d\n", yytext, lineno);
			insertToHash(yytext, "KEYWORD");
		}
		if((scan>=91 && scan<=92) && mlc==0)
		{
			printf("%s\t\t\tPRAGMA\t\t\t\tLine %d\n", yytext, lineno);
			insertToHash(yytext, "PRAGMA");
		}
		if(scan==33 && mlc==0) 
		{
			printf("%s\t\t\tSUBROUTINE\t\t\tLine %d\n", yytext, lineno);
			insertToHash(yytext, "SUBROUTINE");
		}
		if(scan==100 && mlc==0) 
		{
			printf("%s\t\t\tIDENTIFIER\t\t\tLine %d\n", yytext, lineno);
			insertToHash(yytext, "IDENTIFIER");
		}
	
		
		if((scan>=37 && scan<=52) && mlc==0)
		{
			printf("%s\t\t\tOPERATOR\t\t\tLine %d\n", yytext, lineno);
			insertToHash(yytext, "OPERATOR");
		}
		if((scan==53||scan==54||scan==63||(scan>=64 && scan<=68)) && mlc==0)
		{
			printf("%s\t\t\tSPECIAL SYMBOL\t\t\tLine %d\n", yytext, lineno);
			if(scan==63)
			{
				dq++;
				dqline = lineno;
			}
			insertToHash(yytext,"SPECIAL SYMBOL");
		}
		if(scan==55 && mlc==0)
		{
			printf("%s\tHEADER\t\t\t\tLine %d\n",yytext, lineno);
		}
		if(scan==56 && mlc==0)
		{
			printf("%s\t\t\tMAIN FUNCTION\t\t\tLine %d\n", yytext, lineno);
			insertToHash(yytext, "IDENTIFIER");
		}
		if((scan==57 || scan==58||scan==120||scan==121||scan==122) && mlc==0)
		{
			printf("%s\t\t\tPRE DEFINED FUNCTION\t\tLine %d\n", yytext, lineno);
			insertToHash(yytext, "PRE DEFINED FUNCTION");
		}
		if(scan==59 && mlc==0)
		{
			printf("%s\t\t\tPRE PROCESSOR DIRECTIVE\t\tLine %d\n", yytext, lineno);
		}
		if(scan==60 && mlc==0)
		{
			printf("%s\t\t\tINTEGER CONSTANT\t\tLine %d\n", yytext, lineno);
			insertToHash(yytext, "INTEGER CONSTANT");
		}
		if(scan==61 && mlc==0)
		{
			printf("%s\t\t\tFLOATING POINT CONSTANT\t\tLine %d\n", yytext, lineno);
			insertToHash(yytext, "DOUBLE");
		}
		if(scan==62 && mlc==0)
		{
			printf("%s\t\t\tTYPE SPECIFIER\t\t\tLine %d\n", yytext, lineno);
		}
		if(scan==69 && mlc==0)
		{
			printf("%s\t\t\tARRAY\t\t\t\tLine %d\n", yytext, lineno);
			insertToHash(yytext, "ARRAY");
		}
		
		if(scan==71 && mlc==0)
		{
			printf("\n******** ERROR!! CONSTANT ERROR %s at Line %d ********\n\n", yytext, lineno);
		}
		if(scan==72 && mlc==0)
		{
			printf("\n******** ERROR!! UNKNOWN TOKEN T_%s at Line %d ********\n\n", yytext, lineno);
		}
		if(scan==73 && mlc==0)
		{
			printf("%s\t\t\tCHARACTER CONSTANT\t\t\tLine %d\n", yytext, lineno);
			insertToHash(yytext, "CHARACTER CONSTANT");
		}
		if(scan==74 && mlc==0)
		{
			printf("%s\t\t\tSIGNED CONSTANT\t\t\tLine %d\n", yytext, lineno);
			insertToHash(yytext, "SIGNED CONSTANT");
		}
		if(scan==75 && mlc==0)
		{
			printf("%s\t\t\tSTRING CONSTANT\t\t\tLine %d\n", yytext, lineno);
			insertToHash(yytext, "STRING_CONSTANT");
		}
		if(scan==76 && mlc==0)
		{
			printf("%s\t\t\tSCALAR\t\t\tLine %d\n", yytext, lineno);
			insertToHash(yytext, "SCALAR");
		}
		if((scan>=77 && scan<=84) && mlc==0)
		{
			printf("%s\t\t\tCONTROLFLOW\t\t\tLine %d\n", yytext, lineno);
			insertToHash(yytext, "CONTROLFLOW");
		}
		scan = yylex();
	}
	if(mlc==1)
		printf("\n******** ERROR!! UNMATCHED COMMENT STARTING at Line %d ********\n\n",mlcline);
	printf("\n");
	printf("\n\t******** SYMBOL TABLE ********\t\t\n");
	display();
        printf("-------------------------------------------------------------------\n\n");
}
int yywrap()
{
	return 1;
}
