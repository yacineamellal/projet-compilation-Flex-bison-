
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "projet.y"

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "TS.h"
#include "RS.h"
#include "Quad.h"


int yylex();
extern FILE* yyin;
extern int line;
extern int colo;
int yyerror(char *);
int m=0,n=0;
int indq=0;
char* tab_char [10];
int i=0;int j=0;
int nTemp=1; char tempC[12]=""; 
char temp_branchement_if[10][10];
char tmp[20];
char tmp2[20];
char sauvOpr[20];
int yyparse();



/* Line 189 of yacc.c  */
#line 101 "projet.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     mc_var_global = 258,
     mc_declaration = 259,
     mc_instruction = 260,
     accolade_ouv = 261,
     accolade_ferm = 262,
     mc_integer = 263,
     mc_float = 264,
     mc_const = 265,
     mc_if = 266,
     mc_else = 267,
     mc_for = 268,
     mc_read = 269,
     mc_write = 270,
     mc_while = 271,
     mc_struct = 272,
     crocher_ouv = 273,
     crocher_ferm = 274,
     aff = 275,
     diff = 276,
     msg = 277,
     egale = 278,
     par_ouvr = 279,
     par_ferm = 280,
     add = 281,
     sub = 282,
     division = 283,
     mul = 284,
     pvg = 285,
     vg = 286,
     pt = 287,
     dpt = 288,
     and = 289,
     or = 290,
     not = 291,
     inf = 292,
     sup = 293,
     inf_egale = 294,
     sup_egale = 295,
     idf = 296,
     reel = 297,
     entier = 298
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 28 "projet.y"
char* nom; struct {char* type;char* res;}NT;


/* Line 214 of yacc.c  */
#line 184 "projet.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 196 "projet.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   211

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  68
/* YYNRULES -- Number of states.  */
#define YYNSTATES  180

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   298

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    16,    19,    22,    25,    26,    30,    34,
      41,    48,    52,    58,    64,    66,    70,    72,    76,    79,
      80,    82,    84,    86,    88,    90,    92,    97,   105,   113,
     117,   121,   125,   129,   131,   133,   135,   140,   145,   149,
     153,   160,   166,   168,   171,   173,   175,   177,   179,   183,
     187,   191,   195,   199,   203,   211,   215,   218,   220,   222,
     226,   238,   240,   245,   248,   252,   254,   260,   270
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      45,     0,    -1,     3,     6,    46,     7,     4,     6,    46,
       7,     5,     6,    52,     7,    -1,    47,    46,    -1,    48,
      46,    -1,    49,    46,    -1,    -1,     8,    50,    30,    -1,
       9,    51,    30,    -1,     8,    41,    18,    43,    19,    30,
      -1,     9,    41,    18,    43,    19,    30,    -1,    10,    41,
      30,    -1,    10,    41,    20,    43,    30,    -1,    10,    41,
      20,    42,    30,    -1,    41,    -1,    41,    31,    50,    -1,
      41,    -1,    41,    31,    51,    -1,    53,    52,    -1,    -1,
      54,    -1,    56,    -1,    66,    -1,    69,    -1,    73,    -1,
      74,    -1,    41,    20,    55,    30,    -1,    41,    18,    41,
      19,    20,    55,    30,    -1,    41,    18,    43,    19,    20,
      55,    30,    -1,    55,    26,    55,    -1,    55,    27,    55,
      -1,    55,    28,    55,    -1,    55,    29,    55,    -1,    41,
      -1,    43,    -1,    42,    -1,    41,    18,    43,    19,    -1,
      41,    18,    41,    19,    -1,    24,    55,    25,    -1,    57,
      52,    58,    -1,    57,    52,    60,    59,    52,    61,    -1,
      11,    24,    62,    25,     6,    -1,     7,    -1,    12,     6,
      -1,     7,    -1,     7,    -1,    63,    -1,    64,    -1,    55,
      38,    55,    -1,    55,    37,    55,    -1,    55,    23,    55,
      -1,    55,    21,    55,    -1,    55,    40,    55,    -1,    55,
      39,    55,    -1,    24,    63,    25,    65,    24,    63,    25,
      -1,    55,    65,    55,    -1,    36,    55,    -1,    34,    -1,
      35,    -1,    67,    52,    68,    -1,    13,    24,    41,    33,
      43,    33,    43,    33,    41,    25,     6,    -1,     7,    -1,
      70,    71,    52,    72,    -1,    16,    24,    -1,    62,    25,
       6,    -1,     7,    -1,    14,    24,    41,    25,    30,    -1,
      15,    24,    22,    31,    41,    31,    22,    25,    30,    -1,
      15,    24,    22,    25,    30,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    47,    47,    53,    54,    55,    56,    60,    61,    65,
      67,    73,    74,    75,    78,    79,    82,    83,    89,    90,
      92,    93,    94,    95,    96,    97,   101,   113,   123,   134,
     149,   165,   178,   193,   194,   195,   196,   197,   198,   202,
     203,   206,   208,   210,   212,   214,   217,   218,   220,   221,
     222,   223,   224,   225,   228,   229,   230,   232,   233,   236,
     239,   247,   250,   251,   252,   258,   265,   268,   269
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "mc_var_global", "mc_declaration",
  "mc_instruction", "accolade_ouv", "accolade_ferm", "mc_integer",
  "mc_float", "mc_const", "mc_if", "mc_else", "mc_for", "mc_read",
  "mc_write", "mc_while", "mc_struct", "crocher_ouv", "crocher_ferm",
  "aff", "diff", "msg", "egale", "par_ouvr", "par_ferm", "add", "sub",
  "division", "mul", "pvg", "vg", "pt", "dpt", "and", "or", "not", "inf",
  "sup", "inf_egale", "sup_egale", "idf", "reel", "entier", "$accept",
  "program", "DEC", "simpleDEC", "TabDEC", "ConstDEC", "LISTVARINT",
  "LISTVARFLOAT", "list_inst", "INST", "affectation", "expressionAr",
  "CONDITION", "IF", "ACCF_SIMPLE", "ELSE", "ACCF_IF", "ACCF_ELSE", "cond",
  "comparaison", "expressionLog", "operateurLog", "BOUCLEFOR", "FOR",
  "ACCF1", "BOUCLEWHILE", "WHILE", "WLS", "ACCF", "READ", "WRITE", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    44,    45,    46,    46,    46,    46,    47,    47,    48,
      48,    49,    49,    49,    50,    50,    51,    51,    52,    52,
      53,    53,    53,    53,    53,    53,    54,    54,    54,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    56,
      56,    57,    58,    59,    60,    61,    62,    62,    63,    63,
      63,    63,    63,    63,    64,    64,    64,    65,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    74
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,    12,     2,     2,     2,     0,     3,     3,     6,
       6,     3,     5,     5,     1,     3,     1,     3,     2,     0,
       1,     1,     1,     1,     1,     1,     4,     7,     7,     3,
       3,     3,     3,     1,     1,     1,     4,     4,     3,     3,
       6,     5,     1,     2,     1,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     7,     3,     2,     1,     1,     3,
      11,     1,     4,     2,     3,     1,     5,     9,     5
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     6,     1,     0,     0,     0,     0,     6,
       6,     6,    14,     0,    16,     0,     0,     0,     3,     4,
       5,     0,     0,     7,     0,     0,     8,     0,    11,     0,
       0,    14,    15,     0,    16,    17,     0,     0,     6,     0,
       0,    13,    12,     0,     9,    10,     0,     0,    19,     0,
       0,     0,     0,     0,     0,     0,    19,    20,    21,    19,
      22,    19,    23,     0,    24,    25,     0,     0,     0,     0,
      63,     0,     0,     2,    18,     0,     0,     0,     0,    33,
      35,    34,     0,     0,    46,    47,    19,     0,     0,     0,
       0,     0,     0,     0,     0,    42,    39,     0,    61,    59,
       0,     0,    56,     0,     0,     0,     0,     0,     0,     0,
      57,    58,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,     0,    19,
      38,     0,     0,     0,    51,    50,    29,    30,    31,    32,
      49,    48,    53,    52,    55,    64,    65,    62,    41,     0,
      66,    68,     0,     0,     0,    43,     0,     0,    37,    36,
       0,     0,     0,     0,    45,    40,     0,     0,     0,    27,
      28,     0,     0,     0,     0,    54,     0,    67,     0,    60
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     8,     9,    10,    11,    13,    15,    55,    56,
      57,    82,    58,    59,    96,   129,    97,   165,    83,    84,
      85,   116,    60,    61,    99,    62,    63,    86,   147,    64,
      65
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -77
static const yytype_int16 yypact[] =
{
      13,    44,    55,    20,   -77,    35,    39,    51,    54,    20,
      20,    20,    -9,    40,    -4,    57,    48,    62,   -77,   -77,
     -77,    52,    96,   -77,    88,    97,   -77,    63,   -77,    83,
     120,   109,   -77,   122,   111,   -77,   113,   114,    20,   115,
     116,   -77,   -77,   140,   -77,   -77,   143,   144,    -3,   125,
     127,   128,   129,   130,    29,   148,    -3,   -77,   -77,    -3,
     -77,    -3,   -77,   -17,   -77,   -77,   -17,   117,   118,   134,
     -77,    36,    15,   -77,   -77,   150,   153,    15,    15,   145,
     -77,   -77,    25,   136,   -77,   -77,    -3,   137,   131,   141,
      -8,   146,   149,    15,    74,   155,   -77,   157,   -77,   -77,
      46,   147,   100,    89,    15,    15,    15,    15,    15,    15,
     -77,   -77,    15,    15,    15,    15,    15,   164,   166,   165,
     132,   151,   152,   133,   156,   158,    86,   -77,   171,    -3,
     -77,    99,   160,   161,   100,   100,   107,   107,   -77,   -77,
     100,   100,   100,   100,   100,   -77,   -77,   -77,   -77,   154,
     -77,   -77,   159,    15,    15,   -77,   176,   162,   -77,   -77,
     142,   167,    90,    95,   -77,   -77,    15,   163,   168,   -77,
     -77,    70,   169,   170,   172,   -77,   173,   -77,   178,   -77
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -77,   -77,    -7,   -77,   -77,   -77,   175,   174,   -41,   -77,
     -77,   -72,   -77,   -77,   -77,   -77,   -77,   -77,   126,   -76,
     -77,    60,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -45
static const yytype_int16 yytable[] =
{
      94,   101,    18,    19,    20,   100,   102,    77,    49,    21,
      50,    51,    52,    53,    24,    74,     1,   122,    75,    78,
      76,   126,    22,   123,    79,    80,    81,    25,     5,     6,
       7,    43,   134,   135,   136,   137,   138,   139,    54,    93,
     140,   141,   142,   143,   144,   118,   104,    71,   105,    72,
       3,   106,   107,   108,   109,     4,    79,    80,    81,   110,
     111,    17,   112,   113,   114,   115,    29,   104,    27,   105,
      23,   130,   106,   107,   108,   109,    12,    91,    28,    92,
      14,   162,   163,   112,   113,   114,   115,    26,   156,    38,
     172,   104,    16,   105,   171,    30,   106,   107,   108,   109,
     106,   107,   108,   109,   127,    36,    37,   112,   113,   114,
     115,   130,   106,   107,   108,   109,   106,   107,   108,   109,
     169,   106,   107,   108,   109,   170,   106,   107,   108,   109,
     132,    33,   133,   110,   111,   108,   109,    31,    34,    39,
      22,    40,    25,    41,    42,    44,    45,    46,    47,    66,
      48,    67,    68,    69,    70,    73,    90,    95,    88,    89,
      98,   117,   119,   103,   120,   124,   121,   -44,   125,   128,
     145,   148,   131,   146,   152,   149,   153,   155,   154,   158,
     159,   150,   151,   164,   179,   167,   166,   160,     0,   168,
     161,   157,    87,   174,   175,     0,   173,    32,   178,    35,
       0,     0,   177,     0,     0,     0,     0,     0,     0,     0,
       0,   176
};

static const yytype_int16 yycheck[] =
{
      72,    77,     9,    10,    11,    77,    78,    24,    11,    18,
      13,    14,    15,    16,    18,    56,     3,    25,    59,    36,
      61,    93,    31,    31,    41,    42,    43,    31,     8,     9,
      10,    38,   104,   105,   106,   107,   108,   109,    41,    24,
     112,   113,   114,   115,   116,    86,    21,    18,    23,    20,
       6,    26,    27,    28,    29,     0,    41,    42,    43,    34,
      35,     7,    37,    38,    39,    40,     4,    21,    20,    23,
      30,    25,    26,    27,    28,    29,    41,    41,    30,    43,
      41,   153,   154,    37,    38,    39,    40,    30,   129,     6,
     166,    21,    41,    23,   166,    43,    26,    27,    28,    29,
      26,    27,    28,    29,    30,    42,    43,    37,    38,    39,
      40,    25,    26,    27,    28,    29,    26,    27,    28,    29,
      30,    26,    27,    28,    29,    30,    26,    27,    28,    29,
      41,    43,    43,    34,    35,    28,    29,    41,    41,    19,
      31,    19,    31,    30,    30,    30,    30,     7,     5,    24,
       6,    24,    24,    24,    24,     7,    22,     7,    41,    41,
       7,    25,    25,    18,    33,    19,    25,    12,    19,    12,
       6,     6,    25,     7,    41,    43,    20,     6,    20,    19,
      19,    30,    30,     7,     6,    43,    24,    33,    -1,    22,
      31,   131,    66,    25,    25,    -1,    33,    22,    25,    25,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    41
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    45,     6,     0,     8,     9,    10,    46,    47,
      48,    49,    41,    50,    41,    51,    41,     7,    46,    46,
      46,    18,    31,    30,    18,    31,    30,    20,    30,     4,
      43,    41,    50,    43,    41,    51,    42,    43,     6,    19,
      19,    30,    30,    46,    30,    30,     7,     5,     6,    11,
      13,    14,    15,    16,    41,    52,    53,    54,    56,    57,
      66,    67,    69,    70,    73,    74,    24,    24,    24,    24,
      24,    18,    20,     7,    52,    52,    52,    24,    36,    41,
      42,    43,    55,    62,    63,    64,    71,    62,    41,    41,
      22,    41,    43,    24,    55,     7,    58,    60,     7,    68,
      55,    63,    55,    18,    21,    23,    26,    27,    28,    29,
      34,    35,    37,    38,    39,    40,    65,    25,    52,    25,
      33,    25,    25,    31,    19,    19,    55,    30,    12,    59,
      25,    25,    41,    43,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,     6,     7,    72,     6,    43,
      30,    30,    41,    20,    20,     6,    52,    65,    19,    19,
      33,    31,    55,    55,     7,    61,    24,    43,    22,    30,
      30,    55,    63,    33,    25,    25,    41,    30,    25,     6
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
	    /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 47 "projet.y"
    {
    printf("\n\n\t\tProgramme syntaxiquement correcte \n\n");
    YYACCEPT;
;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 66 "projet.y"
    {doubleDec ((yyvsp[(2) - (6)].nom));inserer((yyvsp[(2) - (6)].nom),"INTEGER");quad("BOUNDS","1",(yyvsp[(4) - (6)].nom),""); quad("ADEC",(yyvsp[(2) - (6)].nom),"","");;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 68 "projet.y"
    {doubleDec ((yyvsp[(2) - (6)].nom));inserer ((yyvsp[(2) - (6)].nom),"FLOAT");quad("BOUNDS","1",(yyvsp[(4) - (6)].nom),""); quad("ADEC",(yyvsp[(2) - (6)].nom),"","");;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 73 "projet.y"
    {doubleDec ((yyvsp[(2) - (3)].nom));inserer ((yyvsp[(2) - (3)].nom),"constant");;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 74 "projet.y"
    {doubleDec ((yyvsp[(2) - (5)].nom));inserer ((yyvsp[(2) - (5)].nom),"constant");;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 75 "projet.y"
    {doubleDec ((yyvsp[(2) - (5)].nom));inserer ((yyvsp[(2) - (5)].nom),"constant");;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 78 "projet.y"
    {doubleDec ((yyvsp[(1) - (1)].nom));inserer ((yyvsp[(1) - (1)].nom),"INTEGER");;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 79 "projet.y"
    {doubleDec ((yyvsp[(1) - (3)].nom));inserer ((yyvsp[(1) - (3)].nom),"INTEGER");;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 82 "projet.y"
    {doubleDec ((yyvsp[(1) - (1)].nom));inserer ((yyvsp[(1) - (1)].nom),"FLOAT");;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 83 "projet.y"
    {doubleDec ((yyvsp[(1) - (3)].nom));inserer ((yyvsp[(1) - (3)].nom),"FLOAT");;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 102 "projet.y"
    {dec ((yyvsp[(1) - (4)].nom));  if(typeIdf((yyvsp[(1) - (4)].nom))=="constant"){
									yyerror("erreur semantique modification d'une constante!");
								}
					
					
					if (typeIdf((yyvsp[(1) - (4)].nom))!=(yyvsp[(3) - (4)].NT).type)
					 					yyerror("erreur semantique incompatibilite des types affectation!");
								else {
										quad ("=",(yyvsp[(3) - (4)].NT).res,"",(yyvsp[(1) - (4)].nom));
										  };}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 114 "projet.y"
    {
								dec((yyvsp[(1) - (7)].nom));dec((yyvsp[(3) - (7)].nom));
								if(typeIdf((yyvsp[(1) - (7)].nom))!=(yyvsp[(6) - (7)].NT).type) 
										yyerror("erreur semantique incompatibilite des types affectation!");
										else{
											char* result=strcat(strcat(strdup((yyvsp[(1) - (7)].nom)),"["),strcat((yyvsp[(3) - (7)].nom),"]"));
											quad ("=",(yyvsp[(6) - (7)].NT).res,"",result);
										}
							;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 123 "projet.y"
    {
								dec((yyvsp[(1) - (7)].nom));
								if(typeIdf((yyvsp[(1) - (7)].nom))!=(yyvsp[(6) - (7)].NT).type) 
										yyerror("erreur semantique incompatibilite des types affectation!");
										else{
											char* result=strcat(strcat(strdup((yyvsp[(1) - (7)].nom)),"["),strcat((yyvsp[(3) - (7)].nom),"]"));
											quad ("=",(yyvsp[(6) - (7)].NT).res,"",result);
										}
							;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 134 "projet.y"
    {
								if ((yyvsp[(1) - (3)].NT).type=="constant" || (yyvsp[(3) - (3)].NT).type=="constant"){(yyval.NT).type=(yyvsp[(1) - (3)].NT).type; sprintf(tempC,"T%d",nTemp); nTemp++;
									(yyval.NT).res=strdup(tempC); tempC[0]='\0';
									quad ("+",(yyvsp[(1) - (3)].NT).res,(yyvsp[(3) - (3)].NT).res,(yyval.NT).res);}
								else if((yyvsp[(1) - (3)].NT).type==(yyvsp[(3) - (3)].NT).type){
									
									(yyval.NT).type=(yyvsp[(1) - (3)].NT).type;
									sprintf(tempC,"T%d",nTemp); nTemp++;
									(yyval.NT).res=strdup(tempC); tempC[0]='\0';
									quad ("+",(yyvsp[(1) - (3)].NT).res,(yyvsp[(3) - (3)].NT).res,(yyval.NT).res);
									
								}else {(yyval.NT).type="FLOAT"; sprintf(tempC,"T%d",nTemp); nTemp++;
									(yyval.NT).res=strdup(tempC); tempC[0]='\0';
									quad ("+",(yyvsp[(1) - (3)].NT).res,(yyvsp[(3) - (3)].NT).res,(yyval.NT).res);}
							;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 149 "projet.y"
    {
						if ((yyvsp[(1) - (3)].NT).type=="constant" || (yyvsp[(3) - (3)].NT).type=="constant"){(yyval.NT).type=(yyvsp[(1) - (3)].NT).type; 
						sprintf(tempC,"T%d",nTemp); nTemp++;
									(yyval.NT).res=strdup(tempC); tempC[0]='\0';
									quad ("-",(yyvsp[(1) - (3)].NT).res,(yyvsp[(3) - (3)].NT).res,(yyval.NT).res);}
								else
						         if ((yyvsp[(1) - (3)].NT).type==(yyvsp[(3) - (3)].NT).type) {(yyval.NT).type=(yyvsp[(1) - (3)].NT).type;
									sprintf(tempC,"T%d",nTemp); nTemp++;
									(yyval.NT).res=strdup(tempC); tempC[0]='\0';
									quad ("-",(yyvsp[(1) - (3)].NT).res,(yyvsp[(3) - (3)].NT).res,(yyval.NT).res);}
						else {
							(yyval.NT).type="FLOAT";  sprintf(tempC,"T%d",nTemp);nTemp++;
							(yyval.NT).res=strdup(tempC);tempC[0]='\0';
							quad ("-",(yyvsp[(1) - (3)].NT).res,(yyvsp[(3) - (3)].NT).res,(yyval.NT).res);
						}
					;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 165 "projet.y"
    {
						if ((yyvsp[(1) - (3)].NT).type=="constant" || (yyvsp[(3) - (3)].NT).type=="constant"){(yyval.NT).type=(yyvsp[(1) - (3)].NT).type; sprintf(tempC,"T%d",nTemp); nTemp++;
									(yyval.NT).res=strdup(tempC); tempC[0]='\0';
									quad ("/",(yyvsp[(1) - (3)].NT).res,(yyvsp[(3) - (3)].NT).res,(yyval.NT).res);}
								else{
						
								(yyval.NT).type="FLOAT";  sprintf(tempC,"T%d",nTemp);nTemp++;
								(yyval.NT).res=strdup(tempC);tempC[0]='\0';
								quad ("/",(yyvsp[(1) - (3)].NT).res,(yyvsp[(3) - (3)].NT).res,(yyval.NT).res);
								if(strcmp((yyvsp[(3) - (3)].NT).res,"0")==0) yyerror("erreur symantique DIVISION PAR ZERO");
						
						
					};}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 178 "projet.y"
    {
						if ((yyvsp[(1) - (3)].NT).type=="constant" || (yyvsp[(3) - (3)].NT).type=="constant"){(yyval.NT).type=(yyvsp[(1) - (3)].NT).type; sprintf(tempC,"T%d",nTemp); nTemp++;
									(yyval.NT).res=strdup(tempC); tempC[0]='\0';
									quad ("*",(yyvsp[(1) - (3)].NT).res,(yyvsp[(3) - (3)].NT).res,(yyval.NT).res);}
								else
						if ((yyvsp[(1) - (3)].NT).type!=(yyvsp[(3) - (3)].NT).type) {(yyval.NT).type="FLOAT";
												sprintf(tempC,"T%d",nTemp);
												(yyval.NT).res=strdup(tempC);nTemp++;tempC[0]='\0';
												quad ("*",(yyvsp[(1) - (3)].NT).res,(yyvsp[(3) - (3)].NT).res,(yyval.NT).res);}
						else {
								(yyval.NT).type=(yyvsp[(1) - (3)].NT).type;  sprintf(tempC,"T%d",nTemp);
								(yyval.NT).res=strdup(tempC);nTemp++;tempC[0]='\0';
								quad ("*",(yyvsp[(1) - (3)].NT).res,(yyvsp[(3) - (3)].NT).res,(yyval.NT).res);
						}
					;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 193 "projet.y"
    {dec ((yyvsp[(1) - (1)].nom)); (yyval.NT).type=typeIdf((yyvsp[(1) - (1)].nom));  (yyval.NT).res=strdup((yyvsp[(1) - (1)].nom));;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 194 "projet.y"
    {(yyval.NT).type="INTEGER";  (yyval.NT).res=(yyvsp[(1) - (1)].nom);;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 195 "projet.y"
    {(yyval.NT).type="FLOAT";  (yyval.NT).res=(yyvsp[(1) - (1)].nom);;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 196 "projet.y"
    {(yyval.NT).type=typeIdf((yyvsp[(1) - (4)].nom));char* chaine=strcat(strdup((yyvsp[(1) - (4)].nom)),"[");strcat(chaine,strdup((yyvsp[(3) - (4)].nom))); (yyval.NT).res=strcat(chaine,"]");;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 197 "projet.y"
    {(yyval.NT).type=typeIdf((yyvsp[(1) - (4)].nom));  char* chaine=strcat(strdup((yyvsp[(1) - (4)].nom)),"[");strcat(chaine,strdup((yyvsp[(3) - (4)].nom))); (yyval.NT).res=strcat(chaine,"]");;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 198 "projet.y"
    {(yyval.NT).type=(yyvsp[(2) - (3)].NT).type; (yyval.NT).res=(yyvsp[(2) - (3)].NT).res;;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 206 "projet.y"
    { quad("BZ",temp_branchement_if[i],"temp_cond","");;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 208 "projet.y"
    {sprintf(temp_branchement_if[i],"%d",indq); i=i+1;;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 210 "projet.y"
    {quad("BR",temp_branchement_if[i],"","");;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 212 "projet.y"
    {sprintf(temp_branchement_if[i],"%d",indq+1); i=i+1;;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 214 "projet.y"
    {sprintf(temp_branchement_if[i],"%d",indq); i=i+1;;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 220 "projet.y"
    {strcpy(sauvOpr,"BG");;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 221 "projet.y"
    {strcpy(sauvOpr,"BL");;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 222 "projet.y"
    {strcpy(sauvOpr,"BE");;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 223 "projet.y"
    {strcpy(sauvOpr,"BNE");;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 224 "projet.y"
    {strcpy(sauvOpr,"BGE");;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 225 "projet.y"
    {strcpy(sauvOpr,"BLE");;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 239 "projet.y"
    {
                                                            quad("=",(yyvsp[(5) - (11)].nom),"",(yyvsp[(3) - (11)].nom));
                                                            empiler_Pile(&pile1,indq);
                                                            quad("+",(yyvsp[(3) - (11)].nom),(yyvsp[(7) - (11)].nom),"temp_cond");
                                                            empiler_Pile(&pile2,indq);
                                                            quad("BG",tostr(indq),"temp_cond",(yyvsp[(9) - (11)].nom));
                                                            ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 247 "projet.y"
    {quad("BR",depiler_Pile(&pile1),"","");q[atoi(depiler_Pile(&pile2))].op1=tostr(indq);;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 251 "projet.y"
    {empiler_Pile(&pile1,indq);;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 252 "projet.y"
    {
						quad("BZ",tostr(indq),"temp_cond","");
						empiler_Pile(&pile2,indq-1);
					  ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 258 "projet.y"
    {
			quad("BR",depiler_Pile(&pile1),"","");
    		q[atoi(depiler_Pile(&pile2))].op1=tostr(indq);
			;}
    break;



/* Line 1455 of yacc.c  */
#line 1909 "projet.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 273 "projet.y"


int yyerror (char* msg){
    printf (" %s ligne %d  \n",msg,line,colo); exit (0);}

int main (){ 
    yyin = fopen("test.txt", "r");
    yyparse ();
	afficherTS ();
	
	afficherQuad();
	optimiser();
	printf("---------------||LISTE QUADS APRES OPTIMISATION ||---------------\n");
    afficherQuad();
	generateAssemblyCode(q,indq,"codeObj.asm");
    fclose (yyin);
}

