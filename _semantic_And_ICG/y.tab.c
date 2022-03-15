/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "s_parser.y"

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



#line 229 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    SCALAR = 258,
    ARRAY = 259,
    HASH = 260,
    SUB = 261,
    ID = 262,
    NUM = 263,
    REAL = 264,
    LE = 265,
    GE = 266,
    EQ = 267,
    NEQ = 268,
    AND = 269,
    OR = 270,
    WHILE = 271,
    IF = 272,
    RETURN = 273,
    HEADER = 274,
    STRING = 275,
    PRINT = 276,
    FUNCTION = 277,
    DO = 278,
    ELSE = 279,
    STRUCT = 280,
    STRUCT_VAR = 281,
    FOR = 282,
    UNLESS = 283,
    ELSIF = 284,
    UNTIL = 285,
    FOREACH = 286,
    UMINUS = 287
  };
#endif
/* Tokens.  */
#define SCALAR 258
#define ARRAY 259
#define HASH 260
#define SUB 261
#define ID 262
#define NUM 263
#define REAL 264
#define LE 265
#define GE 266
#define EQ 267
#define NEQ 268
#define AND 269
#define OR 270
#define WHILE 271
#define IF 272
#define RETURN 273
#define HEADER 274
#define STRING 275
#define PRINT 276
#define FUNCTION 277
#define DO 278
#define ELSE 279
#define STRUCT 280
#define STRUCT_VAR 281
#define FOR 282
#define UNLESS 283
#define ELSIF 284
#define UNTIL 285
#define FOREACH 286
#define UMINUS 287

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 169 "s_parser.y"

		int ival;
		char *str;
	

#line 348 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);





#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  27
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   233

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  68
/* YYNRULES -- Number of rules.  */
#define YYNRULES  121
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  218

#define YYUNDEFTOK  2
#define YYMAXUTOK   287


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      42,    43,    38,    36,    45,    37,     2,    39,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    44,
      32,    34,    33,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    46,     2,    47,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    40,     2,    41,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    35
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   175,   175,   176,   177,   178,   181,   195,   196,   197,
     198,   201,   204,   205,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   224,   225,   226,   229,   229,   229,
     232,   232,   232,   232,   234,   236,   236,   237,   237,   237,
     239,   239,   239,   242,   243,   245,   246,   249,   249,   249,
     251,   251,   251,   261,   261,   261,   261,   278,   282,   283,
     287,   291,   292,   295,   296,   297,   298,   301,   301,   301,
     301,   332,   344,   349,   350,   354,   358,   361,   361,   364,
     364,   365,   365,   366,   367,   367,   367,   368,   368,   368,
     369,   369,   369,   370,   370,   370,   371,   371,   371,   372,
     372,   372,   373,   373,   373,   374,   374,   374,   375,   375,
     375,   376,   378,   378,   379,   379,   380,   382,   383,   383,
     384,   385
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SCALAR", "ARRAY", "HASH", "SUB", "ID",
  "NUM", "REAL", "LE", "GE", "EQ", "NEQ", "AND", "OR", "WHILE", "IF",
  "RETURN", "HEADER", "STRING", "PRINT", "FUNCTION", "DO", "ELSE",
  "STRUCT", "STRUCT_VAR", "FOR", "UNLESS", "ELSIF", "UNTIL", "FOREACH",
  "'<'", "'>'", "'='", "UMINUS", "'+'", "'-'", "'*'", "'/'", "'{'", "'}'",
  "'('", "')'", "';'", "','", "'['", "']'", "$accept", "start", "Function",
  "Type", "compound_statement", "statements", "statement", "dowhile",
  "$@1", "$@2", "for", "$@3", "$@4", "$@5", "foreach", "els", "if", "$@6",
  "$@7", "unless", "$@8", "$@9", "else", "elsif", "while", "$@10", "$@11",
  "until", "$@12", "$@13", "assignment1", "$@14", "$@15", "$@16",
  "array_cfg", "CONST", "DECLARATIONS", "$@17", "$@18", "$@19", "array",
  "$@20", "E", "$@21", "$@22", "$@23", "$@24", "$@25", "$@26", "$@27",
  "$@28", "$@29", "$@30", "$@31", "$@32", "$@33", "$@34", "$@35", "$@36",
  "$@37", "$@38", "$@39", "$@40", "T", "$@41", "$@42", "F", "$@43", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,    60,    62,    61,   287,    43,    45,    42,    47,
     123,   125,    40,    41,    59,    44,    91,    93
};
# endif

#define YYPACT_NINF (-71)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-109)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     103,   -71,   -71,   -71,    13,   -71,   141,   -71,   -71,   103,
     -71,    15,    59,     1,   103,    24,   -34,   -10,   103,     5,
      63,    63,     7,   -71,     6,   -71,   -29,   -71,   -71,    -3,
     -71,    63,   -71,    59,   -16,   -71,     8,   -71,    16,    44,
     -71,    59,   -71,   -71,    23,   -71,    34,    36,    82,   -71,
      75,    43,   -71,   151,   -71,   -71,   -71,    -6,   -71,    82,
     -71,   -71,    81,    95,   -71,   -71,    71,    97,   -71,    96,
      59,   116,   -71,   102,   128,   -71,   170,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,    82,
     129,   178,   169,   177,   185,   188,   189,   173,   175,   172,
     157,   -29,    77,   -71,   -71,   -71,   -71,   -71,   -71,   166,
     168,    82,   167,   171,    -3,    82,    82,   174,   205,    81,
      82,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   157,   157,   157,   157,   176,    82,    94,
     -71,   -71,   197,    81,   110,    82,   179,   180,    38,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    95,    95,
     -71,   -71,   -71,   147,   -71,   181,   182,   -71,   160,   210,
     -71,   -71,    81,    81,    81,    81,    81,    81,    81,    81,
      81,   -71,    -3,    82,    82,    -3,   -71,   211,    -3,   -71,
     164,    81,   -71,    -3,   184,   -71,    14,   -71,   186,    14,
     -71,    -3,    -3,    -3,   -71,   -71,   -71,   187,    82,   -71,
     -71,   -71,   -71,   -71,    81,   190,    -3,   -71
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    76,     7,     8,     0,    10,    53,    63,    64,     0,
      65,     0,     0,     0,     0,     0,     0,    60,     0,     0,
       0,     0,     0,     3,     0,    66,     0,     1,     2,    67,
      71,     0,     4,     0,    59,    57,     0,    54,     0,     0,
      61,     0,    13,     6,     0,    58,     0,     0,     0,    75,
       0,     0,    62,     0,    68,    72,    73,   120,   118,     0,
     121,   111,    55,    83,   116,    67,     0,    53,    47,     0,
       0,     0,    27,     0,     0,    50,     0,    11,    24,    26,
      12,    19,    20,    22,    15,    16,    18,    21,    14,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   121,     0,    79,    81,    56,   112,   114,    74,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    69,
       0,    85,    88,    91,    94,    97,   100,   103,   106,   109,
     120,   119,   117,     0,     0,     0,     0,     0,     0,     0,
      23,    25,     0,    30,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    80,    82,
     113,   115,    17,     0,    37,     0,     0,    40,     0,     0,
      70,    78,    86,    89,    92,    95,    98,   101,   104,   107,
     110,    48,     0,     0,     0,     0,    51,     0,     0,    38,
       0,    31,    41,     0,     0,    49,    44,    28,     0,    44,
      52,     0,     0,     0,    39,    35,    36,     0,     0,    42,
      34,    43,    45,    29,    32,     0,     0,    33
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -71,   107,   -71,   -28,   -53,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,    18,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
      56,   -71,   -71,   -71,   191,     3,   -20,   -71,   -71,   -71,
     -71,   -71,   -57,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,    28,   -71,   -71,   -70,   -71
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    13,    14,    15,    43,    53,    80,    81,   114,   207,
      82,   166,   198,   215,    83,   204,    84,   182,   196,    85,
     185,   199,   205,   206,    86,   110,   188,    87,   117,   193,
      16,    22,    48,   105,    25,    60,    18,    44,    89,   147,
      61,    90,    62,   133,   134,    91,   149,    92,   150,    93,
     151,    94,   152,    95,   153,    96,   154,    97,   155,    98,
     156,    99,   157,    63,   135,   136,    64,   100
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      79,    27,   102,    17,   -84,   -87,   -90,   -93,   -96,   -99,
      30,    50,    17,    38,    40,    26,    41,    17,   -53,    51,
      19,    17,    24,    17,    17,    50,  -102,  -105,  -108,    20,
     131,    29,   119,    88,    17,    31,    46,    42,   202,    33,
     -77,    37,    17,   203,    26,     1,    39,     2,     3,     4,
       5,     6,     7,     8,   139,    47,    17,    54,   143,   144,
      49,   142,   101,   148,    10,   160,   161,     7,     8,    11,
      34,     7,     8,   112,   103,   104,    35,    36,    55,    10,
      56,   163,    65,    10,    66,   171,    12,    45,   168,    57,
       7,     8,   172,   173,   174,   175,   176,   177,   178,   179,
     180,    12,    10,    -5,     1,    12,     2,     3,     4,     5,
       6,     7,     8,   103,   104,   108,    23,   103,   104,    58,
     132,    28,     9,    10,    59,    32,   190,   191,    11,   189,
     103,   104,   192,   106,   107,   195,   113,   164,   111,   109,
     200,   -59,    20,    21,   115,    12,   103,   104,   210,   211,
     212,   214,     1,   167,     2,     3,     4,     5,    67,     7,
       8,   158,   159,   217,   130,     7,     8,    68,    69,    70,
     116,    10,    71,   118,    72,   120,    11,    10,    73,    74,
     122,    75,    76,   103,   104,   -59,    20,    21,   121,   123,
     181,    42,    77,    12,    58,    78,   103,   104,   124,    59,
     103,   104,   125,   186,   126,   127,   129,   197,   128,   137,
     138,   140,   146,   165,   187,   141,   145,   209,   194,     0,
     162,   169,     0,   183,   170,     0,   184,   201,     0,     0,
     208,   213,    52,   216
};

static const yytype_int16 yycheck[] =
{
      53,     0,    59,     0,    10,    11,    12,    13,    14,    15,
      44,    39,     9,     7,    43,    12,    45,    14,    34,    39,
       7,    18,     7,    20,    21,    53,    32,    33,    34,    45,
     100,     7,    89,    53,    31,    45,    33,    40,    24,    34,
      46,    34,    39,    29,    41,     1,    40,     3,     4,     5,
       6,     7,     8,     9,   111,    47,    53,    34,   115,   116,
      44,   114,    59,   120,    20,   135,   136,     8,     9,    25,
       7,     8,     9,    70,    36,    37,    20,    21,    44,    20,
      44,   138,     7,    20,    41,    47,    42,    31,   145,     7,
       8,     9,   149,   150,   151,   152,   153,   154,   155,   156,
     157,    42,    20,     0,     1,    42,     3,     4,     5,     6,
       7,     8,     9,    36,    37,    44,     9,    36,    37,    37,
      43,    14,    19,    20,    42,    18,   183,   184,    25,   182,
      36,    37,   185,    38,    39,   188,    20,    43,    42,    42,
     193,    44,    45,    46,    42,    42,    36,    37,   201,   202,
     203,   208,     1,    43,     3,     4,     5,     6,     7,     8,
       9,   133,   134,   216,     7,     8,     9,    16,    17,    18,
      42,    20,    21,     3,    23,    46,    25,    20,    27,    28,
      11,    30,    31,    36,    37,    44,    45,    46,    10,    12,
      43,    40,    41,    42,    37,    44,    36,    37,    13,    42,
      36,    37,    14,    43,    15,    32,    34,    43,    33,    43,
      42,    44,     7,    16,     4,    44,    42,   199,     7,    -1,
      44,    42,    -1,    42,    44,    -1,    44,    43,    -1,    -1,
      44,    44,    41,    43
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     3,     4,     5,     6,     7,     8,     9,    19,
      20,    25,    42,    49,    50,    51,    78,    83,    84,     7,
      45,    46,    79,    49,     7,    82,    83,     0,    49,     7,
      44,    45,    49,    34,     7,    78,    78,    34,     7,    40,
      43,    45,    40,    52,    85,    78,    83,    47,    80,    44,
      51,    84,    82,    53,    34,    44,    44,     7,    37,    42,
      83,    88,    90,   111,   114,     7,    41,     7,    16,    17,
      18,    21,    23,    27,    28,    30,    31,    41,    44,    52,
      54,    55,    58,    62,    64,    67,    72,    75,    84,    86,
      89,    93,    95,    97,    99,   101,   103,   105,   107,   109,
     115,    83,    90,    36,    37,    81,    38,    39,    44,    42,
      73,    42,    83,    20,    56,    42,    42,    76,     3,    90,
      46,    10,    11,    12,    13,    14,    15,    32,    33,    34,
       7,   114,    43,    91,    92,   112,   113,    43,    42,    90,
      44,    44,    52,    90,    90,    42,     7,    87,    90,    94,
      96,    98,   100,   102,   104,   106,   108,   110,   111,   111,
     114,   114,    44,    90,    43,    16,    59,    43,    90,    42,
      44,    47,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    43,    65,    42,    44,    68,    43,     4,    74,    52,
      90,    90,    52,    77,     7,    52,    66,    43,    60,    69,
      52,    43,    24,    29,    63,    70,    71,    57,    44,    63,
      52,    52,    52,    44,    90,    61,    43,    52
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    48,    49,    49,    49,    49,    50,    51,    51,    51,
      51,    52,    53,    53,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    56,    57,    55,
      59,    60,    61,    58,    62,    63,    63,    65,    66,    64,
      68,    69,    67,    70,    70,    71,    71,    73,    74,    72,
      76,    77,    75,    79,    80,    81,    78,    78,    78,    78,
      78,    82,    82,    83,    83,    83,    83,    85,    86,    87,
      84,    84,    84,    84,    84,    84,    84,    89,    88,    91,
      90,    92,    90,    90,    93,    94,    90,    95,    96,    90,
      97,    98,    90,    99,   100,    90,   101,   102,    90,   103,
     104,    90,   105,   106,    90,   107,   108,    90,   109,   110,
      90,    90,   112,   111,   113,   111,   111,   114,   115,   114,
     114,   114
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     2,     0,     3,     1,     1,     1,
       1,     3,     2,     0,     1,     1,     1,     4,     1,     1,
       1,     1,     1,     3,     1,     3,     1,     0,     0,     9,
       0,     0,     0,    12,     8,     1,     1,     0,     0,     8,
       0,     0,     8,     2,     0,     2,     0,     0,     0,     7,
       0,     0,     7,     0,     0,     0,     6,     3,     3,     1,
       1,     2,     3,     1,     1,     1,     2,     0,     0,     0,
       8,     2,     5,     5,     6,     4,     1,     0,     5,     0,
       4,     0,     4,     1,     0,     0,     5,     0,     0,     5,
       0,     0,     5,     0,     0,     5,     0,     0,     5,     0,
       0,     5,     0,     0,     5,     0,     0,     5,     0,     0,
       5,     1,     0,     4,     0,     4,     1,     3,     0,     3,
       1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 6:
#line 181 "s_parser.y"
                                        {

	if (!(strcmp((yyvsp[-1].str),"printf") && strcmp((yyvsp[-1].str),"scanf") && strcmp((yyvsp[-1].str),"getc") && strcmp((yyvsp[-1].str),"gets") && strcmp((yyvsp[-1].str),"getchar") && strcmp	((yyvsp[-1].str),"puts") && strcmp((yyvsp[-1].str),"putchar") && strcmp((yyvsp[-1].str),"clearerr") && strcmp((yyvsp[-1].str),"getw") && strcmp((yyvsp[-1].str),"putw") && strcmp((yyvsp[-1].str),"putc") && strcmp((yyvsp[-1].str),"rewind") && strcmp((yyvsp[-1].str),"sprint") && strcmp((yyvsp[-1].str),"sscanf") && strcmp((yyvsp[-1].str),"remove") && strcmp((yyvsp[-1].str),"fflush"))) 
		printf("Error : Type mismatch in redeclaration of %s : Line %d\n",(yyvsp[-1].str),LINE_PRINT()); 
	else 
	{ 
		
		insert((yyvsp[-1].str),FUNCTION,ADDRESS); 
		insert((yyvsp[-1].str),(yyvsp[-2].ival),ADDRESS); 
		ADDRESS+=4;
	}
	}
#line 1697 "y.tab.c"
    break;

  case 23:
#line 217 "s_parser.y"
                           {
					if(!(strspn((yyvsp[-1].str),"0123456789")==strlen((yyvsp[-1].str)))) // float
						STORE_TYPE(ct,ARRAY); 
					else
						STORE_TYPE(ct,SCALAR);  // int
						ct++;
					}
#line 1709 "y.tab.c"
    break;

  case 27:
#line 229 "s_parser.y"
             {DO_WHILE_1();}
#line 1715 "y.tab.c"
    break;

  case 28:
#line 229 "s_parser.y"
                                                                {DO_WHILE_2();}
#line 1721 "y.tab.c"
    break;

  case 30:
#line 232 "s_parser.y"
                    {FOR_1();}
#line 1727 "y.tab.c"
    break;

  case 31:
#line 232 "s_parser.y"
                                     {FOR_2();}
#line 1733 "y.tab.c"
    break;

  case 32:
#line 232 "s_parser.y"
                                                     {FOR_3();}
#line 1739 "y.tab.c"
    break;

  case 33:
#line 232 "s_parser.y"
                                                                                       {FOR_4();}
#line 1745 "y.tab.c"
    break;

  case 34:
#line 234 "s_parser.y"
                                                                {FOR_4();}
#line 1751 "y.tab.c"
    break;

  case 37:
#line 237 "s_parser.y"
                      {IF_FUNCTION1();}
#line 1757 "y.tab.c"
    break;

  case 38:
#line 237 "s_parser.y"
                                                           {IF_FUNCTION2();}
#line 1763 "y.tab.c"
    break;

  case 40:
#line 239 "s_parser.y"
                          {IF_FUNCTION1();}
#line 1769 "y.tab.c"
    break;

  case 41:
#line 239 "s_parser.y"
                                                               {IF_FUNCTION2();}
#line 1775 "y.tab.c"
    break;

  case 43:
#line 242 "s_parser.y"
                               {IF_FUNCTION3();}
#line 1781 "y.tab.c"
    break;

  case 45:
#line 245 "s_parser.y"
                                 {IF_FUNCTION3();}
#line 1787 "y.tab.c"
    break;

  case 47:
#line 249 "s_parser.y"
              {WHILE_FUNCTION1();}
#line 1793 "y.tab.c"
    break;

  case 48:
#line 249 "s_parser.y"
                                            {WHILE_FUNCTION2();}
#line 1799 "y.tab.c"
    break;

  case 49:
#line 249 "s_parser.y"
                                                                                    {WHILE_FUNCTION3();}
#line 1805 "y.tab.c"
    break;

  case 50:
#line 251 "s_parser.y"
              {WHILE_FUNCTION1();}
#line 1811 "y.tab.c"
    break;

  case 51:
#line 251 "s_parser.y"
                                            {WHILE_FUNCTION2();}
#line 1817 "y.tab.c"
    break;

  case 52:
#line 251 "s_parser.y"
                                                                                    {WHILE_FUNCTION3();}
#line 1823 "y.tab.c"
    break;

  case 53:
#line 261 "s_parser.y"
                 {push((yyvsp[0].str));}
#line 1829 "y.tab.c"
    break;

  case 54:
#line 261 "s_parser.y"
                                 {strcpy(st1[++top],"=");}
#line 1835 "y.tab.c"
    break;

  case 55:
#line 261 "s_parser.y"
                                                             {CODE_GEN_ASSIGN();}
#line 1841 "y.tab.c"
    break;

  case 56:
#line 262 "s_parser.y"
        {
		int sct=returnscope((yyvsp[-5].str),STACK[index1-1]); 
		int type=returntype((yyvsp[-5].str),sct); 
		if((!(strspn((yyvsp[-1].str),"0123456789")==strlen((yyvsp[-1].str)))) && type==258 && fl==0) 
			printf("\nError : Type Mismatch : Line %d\n",LINE_PRINT()); 
		if(!LOOK_UP_SYMBOL((yyvsp[-5].str))) 
		{ 
			int CURR_SCP=STACK[index1-1]; 
			int SCP=returnscope((yyvsp[-5].str),CURR_SCP); 
			if((SCP<=CURR_SCP && end[SCP]==0) && !(SCP==0)) 
			{
				CSU((yyvsp[-5].str),(yyvsp[-1].str),CURR_SCP);
			}
		} 
		}
#line 1861 "y.tab.c"
    break;

  case 57:
#line 278 "s_parser.y"
                                {
					if(LOOK_UP_SYMBOL((yyvsp[-2].str))) 
						printf("\nUndeclared Variable %s : Line %d\n",(yyvsp[-2].str),LINE_PRINT());
				}
#line 1870 "y.tab.c"
    break;

  case 59:
#line 283 "s_parser.y"
              {
		if(LOOK_UP_SYMBOL((yyvsp[0].str))) 
			printf("\nUndeclared Variable %s : Line %d\n",(yyvsp[0].str),LINE_PRINT());
		}
#line 1879 "y.tab.c"
    break;

  case 67:
#line 301 "s_parser.y"
                       {push((yyvsp[0].str));}
#line 1885 "y.tab.c"
    break;

  case 68:
#line 301 "s_parser.y"
                                       {strcpy(st1[++top],"=");}
#line 1891 "y.tab.c"
    break;

  case 69:
#line 301 "s_parser.y"
                                                                   {CODE_GEN_ASSIGN();}
#line 1897 "y.tab.c"
    break;

  case 70:
#line 302 "s_parser.y"
        {
		if( (!(strspn((yyvsp[-2].str),"0123456789")==strlen((yyvsp[-2].str)))) && (yyvsp[-7].ival)==258 && (fl==0)) 
		{
			printf("\nError : Type Mismatch : Line %d\n",LINE_PRINT());
			fl=1;
		} 
		if(!LOOK_UP_SYMBOL((yyvsp[-6].str))) 
		{
			int CURR_SCP=STACK[index1-1]; 
			int PREV_SCP=returnscope((yyvsp[-6].str),CURR_SCP); 
			if(CURR_SCP==PREV_SCP) 
				printf("\nError : Redeclaration of %s : Line %d\n",(yyvsp[-6].str),LINE_PRINT()); 
			else 
			{
				INSERTION_OF_DUPLICATE((yyvsp[-6].str),(yyvsp[-7].ival),ADDRESS,CURR_SCP);
				CSU((yyvsp[-6].str),(yyvsp[-2].str),STACK[index1-1]);
				int sg=returnscope((yyvsp[-6].str),STACK[index1-1]); 
				ADDRESS+=4;
			}
		} 
		else 
		{ 
			int SCP=STACK[index1-1];  
			insert((yyvsp[-6].str),(yyvsp[-7].ival),ADDRESS); 
			SCOPE_ADD((yyvsp[-6].str),SCP); 
			CSU((yyvsp[-6].str),(yyvsp[-2].str),STACK[index1-1]);
			ADDRESS+=4;
		}
	}
#line 1931 "y.tab.c"
    break;

  case 71:
#line 332 "s_parser.y"
                           {
				if(!LOOK_UP_SYMBOL((yyvsp[-1].str))) 
				{ 
					int CURR_SCP=STACK[index1-1]; 
					int SCP=returnscope((yyvsp[-1].str),CURR_SCP); 
					if(!(SCP<=CURR_SCP && end[SCP]==0) || SCP==0) 
						printf("\nError : Variable %s out of SCP : Line %d\n",(yyvsp[-1].str),LINE_PRINT());
				} 
				else 
					printf("\nError : Undeclared Variable %s : Line %d\n",(yyvsp[-1].str),LINE_PRINT()); 
				}
#line 1947 "y.tab.c"
    break;

  case 72:
#line 344 "s_parser.y"
                                {
						insert((yyvsp[-3].str),HASH,ADDRESS); 
						insert((yyvsp[-3].str),(yyvsp[-4].ival),ADDRESS); 
						ADDRESS+=12; 
					}
#line 1957 "y.tab.c"
    break;

  case 74:
#line 350 "s_parser.y"
                                             {
						insert((yyvsp[-4].str),STRUCT,ADDRESS); 
						ADDRESS+=4; 
						}
#line 1966 "y.tab.c"
    break;

  case 75:
#line 354 "s_parser.y"
                           {
				insert((yyvsp[-1].str),STRUCT_VAR,ADDRESS); 
				ADDRESS+=4;
				}
#line 1975 "y.tab.c"
    break;

  case 77:
#line 361 "s_parser.y"
           {push((yyvsp[0].str));}
#line 1981 "y.tab.c"
    break;

  case 79:
#line 364 "s_parser.y"
         {strcpy(st1[++top],"+");}
#line 1987 "y.tab.c"
    break;

  case 80:
#line 364 "s_parser.y"
                                    {CODE_GENERATION();}
#line 1993 "y.tab.c"
    break;

  case 81:
#line 365 "s_parser.y"
          {strcpy(st1[++top],"-");}
#line 1999 "y.tab.c"
    break;

  case 82:
#line 365 "s_parser.y"
                                     {CODE_GENERATION();}
#line 2005 "y.tab.c"
    break;

  case 84:
#line 367 "s_parser.y"
        {push((yyvsp[0].str));}
#line 2011 "y.tab.c"
    break;

  case 85:
#line 367 "s_parser.y"
                       {strcpy(st1[++top],"<=");}
#line 2017 "y.tab.c"
    break;

  case 86:
#line 367 "s_parser.y"
                                                    {CODE_GENERATION();}
#line 2023 "y.tab.c"
    break;

  case 87:
#line 368 "s_parser.y"
        {push((yyvsp[0].str));}
#line 2029 "y.tab.c"
    break;

  case 88:
#line 368 "s_parser.y"
                       {strcpy(st1[++top],">=");}
#line 2035 "y.tab.c"
    break;

  case 89:
#line 368 "s_parser.y"
                                                    {CODE_GENERATION();}
#line 2041 "y.tab.c"
    break;

  case 90:
#line 369 "s_parser.y"
        {push((yyvsp[0].str));}
#line 2047 "y.tab.c"
    break;

  case 91:
#line 369 "s_parser.y"
                       {strcpy(st1[++top],"==");}
#line 2053 "y.tab.c"
    break;

  case 92:
#line 369 "s_parser.y"
                                                    {CODE_GENERATION();}
#line 2059 "y.tab.c"
    break;

  case 93:
#line 370 "s_parser.y"
        {push((yyvsp[0].str));}
#line 2065 "y.tab.c"
    break;

  case 94:
#line 370 "s_parser.y"
                        {strcpy(st1[++top],"!=");}
#line 2071 "y.tab.c"
    break;

  case 95:
#line 370 "s_parser.y"
                                                     {CODE_GENERATION();}
#line 2077 "y.tab.c"
    break;

  case 96:
#line 371 "s_parser.y"
        {push((yyvsp[0].str));}
#line 2083 "y.tab.c"
    break;

  case 97:
#line 371 "s_parser.y"
                        {strcpy(st1[++top],"&&");}
#line 2089 "y.tab.c"
    break;

  case 98:
#line 371 "s_parser.y"
                                                     {CODE_GENERATION();}
#line 2095 "y.tab.c"
    break;

  case 99:
#line 372 "s_parser.y"
        {push((yyvsp[0].str));}
#line 2101 "y.tab.c"
    break;

  case 100:
#line 372 "s_parser.y"
                       {strcpy(st1[++top],"||");}
#line 2107 "y.tab.c"
    break;

  case 101:
#line 372 "s_parser.y"
                                                    {CODE_GENERATION();}
#line 2113 "y.tab.c"
    break;

  case 102:
#line 373 "s_parser.y"
        {push((yyvsp[0].str));}
#line 2119 "y.tab.c"
    break;

  case 103:
#line 373 "s_parser.y"
                        {strcpy(st1[++top],"<");}
#line 2125 "y.tab.c"
    break;

  case 104:
#line 373 "s_parser.y"
                                                    {CODE_GENERATION();}
#line 2131 "y.tab.c"
    break;

  case 105:
#line 374 "s_parser.y"
        {push((yyvsp[0].str));}
#line 2137 "y.tab.c"
    break;

  case 106:
#line 374 "s_parser.y"
                        {strcpy(st1[++top],">");}
#line 2143 "y.tab.c"
    break;

  case 107:
#line 374 "s_parser.y"
                                                    {CODE_GENERATION();}
#line 2149 "y.tab.c"
    break;

  case 108:
#line 375 "s_parser.y"
        {push((yyvsp[0].str));}
#line 2155 "y.tab.c"
    break;

  case 109:
#line 375 "s_parser.y"
                        {strcpy(st1[++top],"||");}
#line 2161 "y.tab.c"
    break;

  case 110:
#line 375 "s_parser.y"
                                                     {CODE_GEN_ASSIGN();}
#line 2167 "y.tab.c"
    break;

  case 111:
#line 376 "s_parser.y"
           {array1();}
#line 2173 "y.tab.c"
    break;

  case 112:
#line 378 "s_parser.y"
         {strcpy(st1[++top],"*");}
#line 2179 "y.tab.c"
    break;

  case 113:
#line 378 "s_parser.y"
                                    {CODE_GENERATION();}
#line 2185 "y.tab.c"
    break;

  case 114:
#line 379 "s_parser.y"
          {strcpy(st1[++top],"/");}
#line 2191 "y.tab.c"
    break;

  case 115:
#line 379 "s_parser.y"
                                     {CODE_GENERATION();}
#line 2197 "y.tab.c"
    break;

  case 117:
#line 382 "s_parser.y"
              {(yyval.str)=(yyvsp[-1].str);}
#line 2203 "y.tab.c"
    break;

  case 118:
#line 383 "s_parser.y"
        {strcpy(st1[++top],"-");}
#line 2209 "y.tab.c"
    break;

  case 119:
#line 383 "s_parser.y"
                                   {CODE_GEN_UMIN();}
#line 2215 "y.tab.c"
    break;

  case 120:
#line 384 "s_parser.y"
        {push((yyvsp[0].str));fl=1;}
#line 2221 "y.tab.c"
    break;

  case 121:
#line 385 "s_parser.y"
           {push((yyvsp[0].str));}
#line 2227 "y.tab.c"
    break;


#line 2231 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 388 "s_parser.y"


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
