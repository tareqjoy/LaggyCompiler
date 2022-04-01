
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
#line 1 "laggycompiler.y"

	#include <stdio.h>
    #include <math.h>
    #include <string.h>

	void yyerror(char *);
	int yylex(void);

	int iSym[63][52];
    float fSym[63][52];
    char cSym[63][52];
    char sSym[63][52][256];
    int decleared[63][52];
    void *ptr, *reshead=NULL, *temphead=NULL;

    #define var 180
    #define pi  3.1416


/* Line 189 of yacc.c  */
#line 93 "laggycompiler.tab.c"

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
     INTEGER = 258,
     DATA_TYPE = 259,
     VARIABLE = 260,
     FLOAT = 261,
     CHARACTER = 262,
     STRING = 263,
     ADD = 264,
     TYPE_INT = 265,
     TYPE_CHAR = 266,
     TYPE_FLOAT = 267,
     TYPE_STRING = 268,
     SUBSTRACT = 269,
     MINUS = 270,
     INTO = 271,
     DEVIDE = 272,
     POWER = 273,
     MOD = 274,
     IF = 275,
     ELSE = 276,
     ELSEIF = 277,
     START = 278,
     END = 279,
     EQUAL = 280,
     GREATER = 281,
     LESS = 282,
     NEWLINE = 283,
     FACTORIAL = 284,
     SINE = 285,
     COSINE = 286,
     TANGENT = 287,
     LOGARITHM = 288,
     CHECK = 289,
     WITH = 290,
     OUTPUT = 291,
     ISGREATEREQU = 292,
     ISLESSEQU = 293,
     ISGREATER = 294,
     ISLESS = 295,
     IFX = 296
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 22 "laggycompiler.y"

    struct intPair{
        int arrIndex1;
	    int arrIndex2;
    } varData;

    struct allTypes{
        char charVal;
        int integerVal;
        float floatVal;
        char stringVal[256];
        int type;
    } genericData;


   struct expressionData{
        struct intPair varData;
        struct allTypes genericData;
    } *ifData;



	char charVal;
    int integerVal;
    float floatVal;
    char stringVal[256];



/* Line 214 of yacc.c  */
#line 200 "laggycompiler.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 212 "laggycompiler.tab.c"

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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   323

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  17
/* YYNRULES -- Number of rules.  */
#define YYNRULES  58
/* YYNRULES -- Number of states.  */
#define YYNSTATES  147

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   296

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      44,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      41,    42,     2,     2,    48,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    45,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    46,     2,    47,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    43
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     7,     8,    10,    12,    16,    18,    20,
      23,    28,    32,    36,    40,    44,    48,    49,    51,    55,
      59,    60,    62,    66,    70,    71,    73,    77,    81,    82,
      84,    88,    90,    92,    94,    96,    98,   103,   108,   113,
     118,   121,   125,   129,   133,   137,   141,   144,   148,   152,
     156,   160,   164,   175,   186,   194,   195,   206,   218
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      50,     0,    -1,    50,    51,    44,    -1,    -1,    52,    -1,
      61,    -1,     5,    45,    61,    -1,    62,    -1,    64,    -1,
      44,    51,    -1,    36,    46,     8,    47,    -1,    10,    54,
      53,    -1,    12,    56,    55,    -1,    11,    58,    57,    -1,
      13,    60,    59,    -1,    48,    54,    53,    -1,    -1,     5,
      -1,     5,    45,     3,    -1,    48,    56,    55,    -1,    -1,
       5,    -1,     5,    45,     6,    -1,    48,    58,    57,    -1,
      -1,     5,    -1,     5,    45,     7,    -1,    48,    60,    59,
      -1,    -1,     5,    -1,     5,    45,     8,    -1,     3,    -1,
       5,    -1,     6,    -1,     7,    -1,     8,    -1,    30,    46,
      61,    47,    -1,    31,    46,    61,    47,    -1,    32,    46,
      61,    47,    -1,    33,    46,    61,    47,    -1,    15,    61,
      -1,    61,     9,    61,    -1,    61,    14,    61,    -1,    61,
      16,    61,    -1,    61,    19,    61,    -1,    61,    17,    61,
      -1,    61,    29,    -1,    61,    18,    61,    -1,    41,    61,
      42,    -1,    61,    25,    61,    -1,    61,    26,    61,    -1,
      61,    27,    61,    -1,    20,    61,    44,    23,    44,    51,
      44,    24,    44,    63,    -1,    22,    61,    44,    23,    44,
      51,    44,    24,    44,    63,    -1,    21,    44,    23,    44,
      51,    44,    24,    -1,    -1,    34,    44,    23,    65,    24,
      44,    35,    46,    61,    47,    -1,    44,    46,    61,    47,
      44,    23,    44,    51,    44,    24,    65,    -1,    44,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    81,    81,   105,   108,   109,   110,   119,   123,   124,
     125,   129,   129,   129,   129,   132,   132,   134,   146,   160,
     160,   162,   174,   188,   188,   190,   202,   216,   216,   218,
     230,   244,   245,   270,   271,   272,   273,   283,   293,   303,
     313,   323,   335,   349,   363,   377,   411,   426,   440,   444,
     461,   478,   497,   511,   524,   528,   532,   534,   535
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INTEGER", "DATA_TYPE", "VARIABLE",
  "FLOAT", "CHARACTER", "STRING", "ADD", "TYPE_INT", "TYPE_CHAR",
  "TYPE_FLOAT", "TYPE_STRING", "SUBSTRACT", "MINUS", "INTO", "DEVIDE",
  "POWER", "MOD", "IF", "ELSE", "ELSEIF", "START", "END", "EQUAL",
  "GREATER", "LESS", "NEWLINE", "FACTORIAL", "SINE", "COSINE", "TANGENT",
  "LOGARITHM", "CHECK", "WITH", "OUTPUT", "ISGREATEREQU", "ISLESSEQU",
  "ISGREATER", "ISLESS", "'('", "')'", "IFX", "'\\n'", "'='", "'['", "']'",
  "','", "$accept", "program", "statement", "variable_decleration",
  "int_var_loop", "int_var", "float_var_loop", "float_var",
  "char_var_loop", "char_var", "string_var_loop", "string_var",
  "expression", "if_else", "else_if_loop", "check_stmt", "case_loop", 0
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
     295,    40,    41,   296,    10,    61,    91,    93,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    49,    50,    50,    51,    51,    51,    51,    51,    51,
      51,    52,    52,    52,    52,    53,    53,    54,    54,    55,
      55,    56,    56,    57,    57,    58,    58,    59,    59,    60,
      60,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    62,    63,    63,    63,    64,    65,    65
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     0,     1,     1,     3,     1,     1,     2,
       4,     3,     3,     3,     3,     3,     0,     1,     3,     3,
       0,     1,     3,     3,     0,     1,     3,     3,     0,     1,
       3,     1,     1,     1,     1,     1,     4,     4,     4,     4,
       2,     3,     3,     3,     3,     3,     2,     3,     3,     3,
       3,     3,    10,    10,     7,     0,    10,    11,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     1,    31,    32,    33,    34,    35,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     4,     5,     7,     8,     0,    17,    16,
      25,    24,    21,    20,    29,    28,    32,    40,     0,     0,
       0,     0,     0,     0,     0,     0,     9,     2,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    46,     6,     0,
       0,    11,     0,     0,    13,     0,     0,    12,     0,     0,
      14,     0,     0,     0,     0,     0,     0,     0,    48,    41,
      42,    43,    45,    47,    44,    49,    50,    51,    18,    16,
      26,    24,    22,    20,    30,    28,     0,    36,    37,    38,
      39,    58,     0,    10,    15,    23,    19,    27,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      55,     0,     0,     0,     0,    52,     0,    56,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    57,
       0,     0,    54,     0,     0,    55,    53
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,    22,    23,    61,    29,    67,    33,    64,    31,
      70,    35,    24,    25,   125,    26,   102
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -45
static const yytype_int16 yypact[] =
{
     -45,    47,   -45,   -45,   -44,   -45,   -45,   -45,    14,    20,
      28,    30,   133,   133,     2,     3,    10,    15,    -8,    17,
     133,   113,     7,   -45,   294,   -45,   -45,   133,    21,    22,
      23,    27,    31,    34,    40,    38,   -45,   -11,   258,   133,
     133,   133,   133,    42,    81,    -5,   -45,   -45,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   -45,   294,    87,
      14,   -45,    85,    20,   -45,    88,    28,   -45,    89,    30,
     -45,    70,   142,   161,   184,   198,    51,    49,   -45,   -11,
     -11,    -3,    -3,   -45,     5,    55,    55,    55,   -45,    22,
     -45,    27,   -45,    34,   -45,    38,    54,   -45,   -45,   -45,
     -45,    56,    76,   -45,   -45,   -45,   -45,   -45,   113,   133,
      57,    59,   221,    69,    82,    63,    62,    66,    92,   133,
       6,    67,   235,    68,   133,   -45,   113,   -45,    99,   272,
      83,    86,   106,   107,   113,    90,    51,    91,   113,   -45,
     108,    93,   -45,   118,   109,     6,   -45
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -45,   -45,   -21,   -45,    61,    95,    79,    96,    94,   110,
      97,   112,   -10,   -45,    37,   -45,    16
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      46,    27,    37,    38,    48,    50,    51,    52,    53,    49,
      45,    50,    51,    52,    53,    52,    53,    58,    57,    28,
      54,    55,    56,    52,    57,    30,    57,   123,   124,    72,
      73,    74,    75,    32,    57,    34,    43,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,     2,    39,    40,
       3,    47,     4,     5,     6,     7,    41,     8,     9,    10,
      11,    42,    12,    44,    48,    76,    59,    13,    62,    49,
      60,    50,    51,    52,    53,    63,    65,    14,    15,    16,
      17,    18,    66,    19,    57,    68,    69,   111,    20,    77,
      88,    21,    90,    96,    92,   101,   103,    94,   108,   112,
     110,   113,   109,   114,   116,   130,   117,   118,   119,   122,
     120,   126,   128,   137,   129,   121,     3,   141,     4,     5,
       6,     7,   131,     8,     9,    10,    11,   133,    12,   135,
     134,   136,   142,    13,   138,   140,     3,   143,    36,     5,
       6,     7,   144,    14,    15,    16,    17,    18,    12,    19,
     104,    48,   139,   145,    20,    89,    49,    21,    50,    51,
      52,    53,    93,    14,    15,    16,    17,    54,    55,    56,
      48,    57,   106,    91,    20,    49,     0,    50,    51,    52,
      53,    95,   146,     0,     0,   105,    54,    55,    56,    97,
      57,     0,   107,    48,     0,     0,     0,     0,    49,     0,
      50,    51,    52,    53,     0,     0,     0,    48,    98,    54,
      55,    56,    49,    57,    50,    51,    52,    53,     0,     0,
       0,     0,     0,    54,    55,    56,     0,    57,     0,     0,
      48,    99,     0,     0,     0,    49,     0,    50,    51,    52,
      53,     0,     0,     0,    48,   100,    54,    55,    56,    49,
      57,    50,    51,    52,    53,     0,     0,     0,     0,     0,
      54,    55,    56,     0,    57,     0,     0,    48,   115,     0,
       0,     0,    49,     0,    50,    51,    52,    53,     0,     0,
       0,    48,   127,    54,    55,    56,    49,    57,    50,    51,
      52,    53,     0,     0,     0,     0,     0,    54,    55,    56,
       0,    57,    71,    48,     0,     0,     0,     0,    49,     0,
      50,    51,    52,    53,     0,     0,   132,     0,     0,    54,
      55,    56,     0,    57
};

static const yytype_int16 yycheck[] =
{
      21,    45,    12,    13,     9,    16,    17,    18,    19,    14,
      20,    16,    17,    18,    19,    18,    19,    27,    29,     5,
      25,    26,    27,    18,    29,     5,    29,    21,    22,    39,
      40,    41,    42,     5,    29,     5,    44,    42,    48,    49,
      50,    51,    52,    53,    54,    55,    56,     0,    46,    46,
       3,    44,     5,     6,     7,     8,    46,    10,    11,    12,
      13,    46,    15,    46,     9,    23,    45,    20,    45,    14,
      48,    16,    17,    18,    19,    48,    45,    30,    31,    32,
      33,    34,    48,    36,    29,    45,    48,   108,    41,     8,
       3,    44,     7,    23,     6,    44,    47,     8,    44,   109,
      24,    44,    46,    44,    35,   126,    24,    44,    46,   119,
      44,    44,    44,   134,   124,    23,     3,   138,     5,     6,
       7,     8,    23,    10,    11,    12,    13,    44,    15,    23,
      44,    24,    24,    20,    44,    44,     3,    44,     5,     6,
       7,     8,    24,    30,    31,    32,    33,    34,    15,    36,
      89,     9,   136,    44,    41,    60,    14,    44,    16,    17,
      18,    19,    66,    30,    31,    32,    33,    25,    26,    27,
       9,    29,    93,    63,    41,    14,    -1,    16,    17,    18,
      19,    69,   145,    -1,    -1,    91,    25,    26,    27,    47,
      29,    -1,    95,     9,    -1,    -1,    -1,    -1,    14,    -1,
      16,    17,    18,    19,    -1,    -1,    -1,     9,    47,    25,
      26,    27,    14,    29,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    25,    26,    27,    -1,    29,    -1,    -1,
       9,    47,    -1,    -1,    -1,    14,    -1,    16,    17,    18,
      19,    -1,    -1,    -1,     9,    47,    25,    26,    27,    14,
      29,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      25,    26,    27,    -1,    29,    -1,    -1,     9,    47,    -1,
      -1,    -1,    14,    -1,    16,    17,    18,    19,    -1,    -1,
      -1,     9,    47,    25,    26,    27,    14,    29,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    25,    26,    27,
      -1,    29,    44,     9,    -1,    -1,    -1,    -1,    14,    -1,
      16,    17,    18,    19,    -1,    -1,    44,    -1,    -1,    25,
      26,    27,    -1,    29
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    50,     0,     3,     5,     6,     7,     8,    10,    11,
      12,    13,    15,    20,    30,    31,    32,    33,    34,    36,
      41,    44,    51,    52,    61,    62,    64,    45,     5,    54,
       5,    58,     5,    56,     5,    60,     5,    61,    61,    46,
      46,    46,    46,    44,    46,    61,    51,    44,     9,    14,
      16,    17,    18,    19,    25,    26,    27,    29,    61,    45,
      48,    53,    45,    48,    57,    45,    48,    55,    45,    48,
      59,    44,    61,    61,    61,    61,    23,     8,    42,    61,
      61,    61,    61,    61,    61,    61,    61,    61,     3,    54,
       7,    58,     6,    56,     8,    60,    23,    47,    47,    47,
      47,    44,    65,    47,    53,    57,    55,    59,    44,    46,
      24,    51,    61,    44,    44,    47,    35,    24,    44,    46,
      44,    23,    61,    21,    22,    63,    44,    47,    44,    61,
      51,    23,    44,    44,    44,    23,    24,    51,    44,    65,
      44,    51,    24,    44,    24,    44,    63
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
#line 82 "laggycompiler.y"
    {
                ptr=(yyvsp[(2) - (3)].ifData);
                if(ptr!=NULL){

                    int i=((struct expressionData*)ptr)->varData.arrIndex1;
                    int j=((struct expressionData*)ptr)->varData.arrIndex2;

                     if(decleared[i][j]==-1){
                            printf("Error: Variable not declared.\n");
                        } else if(decleared[i][j]!=((struct expressionData*)ptr)->genericData.type){
                            printf("Error: Data type mismatched.\n");
                        }else{
                            iSym[i][j]=((struct expressionData*)ptr)->genericData.integerVal;
                            fSym[i][j]=((struct expressionData*)ptr)->genericData.floatVal;
                            cSym[i][j]=((struct expressionData*)ptr)->genericData.charVal;
                            strcpy(sSym[i][j], ((struct expressionData*)ptr)->genericData.stringVal);
                            printf("Message: Value assigned.\n");
                        }
                    free(ptr);
                }
                 printf("Message: A statement.\n");
            ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 109 "laggycompiler.y"
    { (yyval.ifData)=NULL; ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 111 "laggycompiler.y"
    {
                        int i=(yyvsp[(1) - (3)].varData).arrIndex1;
                        int j=(yyvsp[(1) - (3)].varData).arrIndex2;
                         (yyval.ifData) = malloc(sizeof(struct expressionData));
                            (yyval.ifData)->varData=(yyvsp[(1) - (3)].varData);
                            (yyval.ifData)->genericData=(yyvsp[(3) - (3)].genericData);
                    ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 120 "laggycompiler.y"
    {
                        (yyval.ifData)=(yyvsp[(1) - (1)].ifData);
                    ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 124 "laggycompiler.y"
    { (yyval.ifData)=(yyvsp[(2) - (2)].ifData);;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 125 "laggycompiler.y"
    {
                printf("%s\n",(yyvsp[(3) - (4)].stringVal));
            ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 135 "laggycompiler.y"
    {
                        int i=(yyvsp[(1) - (1)].varData).arrIndex1;
                        int j=(yyvsp[(1) - (1)].varData).arrIndex2;
                        if (decleared[i][j]==-1){
                            iSym[i][j]=0;
                            decleared[i][j]=0;
                            printf("Message: Variable created successfully.\n");
                        } else {
                            printf("Error: Variable name already declared before.\n");
                        }
                    ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 147 "laggycompiler.y"
    {
                        int i=(yyvsp[(1) - (3)].varData).arrIndex1;
                        int j=(yyvsp[(1) - (3)].varData).arrIndex2;
                        if (decleared[i][j]==-1){
                            iSym[i][j]=(yyvsp[(3) - (3)].integerVal);
                            decleared[i][j]=0;
                            printf("Message: Variable created successfully.\n");
                        } else {
                            printf("Error: Variable name already declared before.\n");
                        }
                    ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 163 "laggycompiler.y"
    {
                        int i=(yyvsp[(1) - (1)].varData).arrIndex1;
                        int j=(yyvsp[(1) - (1)].varData).arrIndex2;
                        if (decleared[i][j]==-1){
                            fSym[i][j]=0;
                            decleared[i][j]=1;
                            printf("Message: Variable created successfully.\n");
                        } else {
                            printf("Error: Variable name already declared before.\n");
                        }
                    ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 175 "laggycompiler.y"
    {
                        int i=(yyvsp[(1) - (3)].varData).arrIndex1;
                        int j=(yyvsp[(1) - (3)].varData).arrIndex2;
                        if (decleared[i][j]==-1){
                            fSym[i][j]=(yyvsp[(3) - (3)].floatVal);
                            decleared[i][j]=1;
                            printf("Message: Variable created successfully.\n");
                        } else {
                            printf("Error: Variable name already declared before.\n");
                        }
                    ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 191 "laggycompiler.y"
    {
                        int i=(yyvsp[(1) - (1)].varData).arrIndex1;
                        int j=(yyvsp[(1) - (1)].varData).arrIndex2;
                        if (decleared[i][j]==-1){
                            cSym[i][j]='\0';
                            decleared[i][j]=2;
                            printf("Message: Variable created successfully.\n");
                        } else {
                            printf("Error: Variable name already declared before.\n");
                        }
                    ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 203 "laggycompiler.y"
    {
                        int i=(yyvsp[(1) - (3)].varData).arrIndex1;
                        int j=(yyvsp[(1) - (3)].varData).arrIndex2;
                        if (decleared[i][j]==-1){
                            cSym[i][j]=(yyvsp[(3) - (3)].charVal);
                            decleared[i][j]=2;
                            printf("Message: Variable created successfully.\n");
                        } else {
                            printf("Error: Variable name already declared before.\n");
                        }
                    ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 219 "laggycompiler.y"
    {
                        int i=(yyvsp[(1) - (1)].varData).arrIndex1;
                        int j=(yyvsp[(1) - (1)].varData).arrIndex2;
                        if (decleared[i][j]==-1){
                            strcpy(sSym[i][j], "\0");
                            decleared[i][j]=3;
                            printf("Message: Variable created successfully.\n");
                        } else {
                            printf("Error: Variable name already declared before.\n");
                        }
                    ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 231 "laggycompiler.y"
    {
                        int i=(yyvsp[(1) - (3)].varData).arrIndex1;
                        int j=(yyvsp[(1) - (3)].varData).arrIndex2;
                        if (decleared[i][j]==-1){
                            strcpy(sSym[i][j], (yyvsp[(3) - (3)].stringVal));
                            decleared[i][j]=3;
                            printf("Message: Variable created successfully.\n");
                        } else {
                            printf("Error: Variable name already declared before.\n");
                        }
                    ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 244 "laggycompiler.y"
    { (yyval.genericData).integerVal = (yyvsp[(1) - (1)].integerVal) ; (yyval.genericData).type=0;;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 246 "laggycompiler.y"
    {
                        int i=(yyvsp[(1) - (1)].varData).arrIndex1;
                        int j=(yyvsp[(1) - (1)].varData).arrIndex2;
                        if(decleared[i][j]!=-1){
                            (yyval.genericData).integerVal=iSym[i][j];
                            (yyval.genericData).floatVal=fSym[i][j];
                            (yyval.genericData).charVal=cSym[i][j];
                            strcpy((yyval.genericData).stringVal, sSym[i][j]);

                            (yyval.genericData).type=decleared[i][j];

                            if(decleared[i][j]==0){
                                printf("Message: Value = %d\n",iSym[i][j]);
                            } else if(decleared[i][j]==1){
                                printf("Message: Value = %f\n",fSym[i][j]);
                            }else if(decleared[i][j]==2){
                                printf("Message: Value = %c\n",cSym[i][j]);
                            }else{
                                printf("Message: Value = %s\n",sSym[i][j]);
                            } 
                        }  else{
                            printf("Error: Variable not declared.\n");
                        }
                    ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 270 "laggycompiler.y"
    { (yyval.genericData).floatVal = (yyvsp[(1) - (1)].floatVal) ;  (yyval.genericData).type=1;;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 271 "laggycompiler.y"
    { (yyval.genericData).charVal = (yyvsp[(1) - (1)].charVal) ;  (yyval.genericData).type=2;;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 272 "laggycompiler.y"
    { strcat((yyval.genericData).stringVal, (yyvsp[(1) - (1)].stringVal)) ;  (yyval.genericData).type=3;;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 274 "laggycompiler.y"
    {
                        (yyval.genericData).type=(yyvsp[(3) - (4)].genericData).type;
                        (yyval.genericData).integerVal = ceil(sin((float)(yyvsp[(3) - (4)].genericData).integerVal * pi / var));
                        (yyval.genericData).floatVal = sin((yyvsp[(3) - (4)].genericData).floatVal * pi / var);
                        (yyval.genericData).charVal = sin((yyvsp[(3) - (4)].genericData).charVal * pi / var);
                        if((yyvsp[(3) - (4)].genericData).type==3){
                            printf("Error: Wrong operation.\n");
                        }
                    ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 284 "laggycompiler.y"
    {
                        (yyval.genericData).type=(yyvsp[(3) - (4)].genericData).type;
                        (yyval.genericData).integerVal = ceil(cos((float)(yyvsp[(3) - (4)].genericData).integerVal * pi / var));
                        (yyval.genericData).floatVal = cos((yyvsp[(3) - (4)].genericData).floatVal * pi / var);
                        (yyval.genericData).charVal = cos((yyvsp[(3) - (4)].genericData).charVal * pi / var);
                        if((yyvsp[(3) - (4)].genericData).type==3){
                            printf("Error: Wrong operation.\n");
                        }
                    ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 294 "laggycompiler.y"
    {
                        (yyval.genericData).type=(yyvsp[(3) - (4)].genericData).type;
                        (yyval.genericData).integerVal = tan((float)(yyvsp[(3) - (4)].genericData).integerVal * pi / var);
                        (yyval.genericData).floatVal = tan((yyvsp[(3) - (4)].genericData).floatVal * pi / var);
                        (yyval.genericData).charVal = tan((yyvsp[(3) - (4)].genericData).charVal * pi / var);
                        if((yyvsp[(3) - (4)].genericData).type==3){
                            printf("Error: Wrong operation.\n");
                        }
                    ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 304 "laggycompiler.y"
    {
                        (yyval.genericData).type=(yyvsp[(3) - (4)].genericData).type;
                        (yyval.genericData).integerVal = log((yyvsp[(3) - (4)].genericData).integerVal);
                        (yyval.genericData).floatVal = log((yyvsp[(3) - (4)].genericData).floatVal);
                        (yyval.genericData).charVal = log((yyvsp[(3) - (4)].genericData).charVal);
                        if((yyvsp[(3) - (4)].genericData).type==3){
                            printf("Error: Wrong operation.\n");
                        }
                    ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 314 "laggycompiler.y"
    {
                            (yyval.genericData).type=(yyvsp[(2) - (2)].genericData).type;
                            (yyval.genericData).integerVal = - (yyvsp[(2) - (2)].genericData).integerVal;
                            (yyval.genericData).floatVal = - (yyvsp[(2) - (2)].genericData).floatVal ;
                            (yyval.genericData).charVal = - (yyvsp[(2) - (2)].genericData).charVal;
                            if((yyvsp[(2) - (2)].genericData).type==3){
                                printf("Error: Wrong operation.\n");
                            }
                    ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 324 "laggycompiler.y"
    {
                        if((yyvsp[(1) - (3)].genericData).type == (yyvsp[(3) - (3)].genericData).type){
                            (yyval.genericData).type=(yyvsp[(1) - (3)].genericData).type;
                            (yyval.genericData).integerVal =  (yyvsp[(1) - (3)].genericData).integerVal + (yyvsp[(3) - (3)].genericData).integerVal;
                            (yyval.genericData).floatVal =  (yyvsp[(1) - (3)].genericData).floatVal + (yyvsp[(3) - (3)].genericData).floatVal;
                            (yyval.genericData).charVal =  (yyvsp[(1) - (3)].genericData).charVal + (yyvsp[(3) - (3)].genericData).charVal;
                            strcpy((yyval.genericData).stringVal, strcat((yyvsp[(1) - (3)].genericData).stringVal, (yyvsp[(3) - (3)].genericData).stringVal));
                        } else {
                            printf("Error: Data type mismatched.\n");
                        }
                    ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 336 "laggycompiler.y"
    {
                        if((yyvsp[(1) - (3)].genericData).type == (yyvsp[(3) - (3)].genericData).type){
                            (yyval.genericData).type=(yyvsp[(1) - (3)].genericData).type;
                            (yyval.genericData).integerVal =  (yyvsp[(1) - (3)].genericData).integerVal - (yyvsp[(3) - (3)].genericData).integerVal;
                            (yyval.genericData).floatVal =  (yyvsp[(1) - (3)].genericData).floatVal - (yyvsp[(3) - (3)].genericData).floatVal;
                            (yyval.genericData).charVal =  (yyvsp[(1) - (3)].genericData).charVal - (yyvsp[(3) - (3)].genericData).charVal;
                            if((yyvsp[(1) - (3)].genericData).type==3){
                                printf("Error: Wrong operation.\n");
                            }
                        } else {
                            printf("Error: Data type mismatched.\n");
                        }
                    ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 350 "laggycompiler.y"
    {
                        if((yyvsp[(1) - (3)].genericData).type == (yyvsp[(3) - (3)].genericData).type){
                            (yyval.genericData).type=(yyvsp[(1) - (3)].genericData).type;
                            (yyval.genericData).integerVal =  (yyvsp[(1) - (3)].genericData).integerVal * (yyvsp[(3) - (3)].genericData).integerVal;
                            (yyval.genericData).floatVal =  (yyvsp[(1) - (3)].genericData).floatVal * (yyvsp[(3) - (3)].genericData).floatVal;
                            (yyval.genericData).charVal =  (yyvsp[(1) - (3)].genericData).charVal * (yyvsp[(3) - (3)].genericData).charVal;
                            if((yyvsp[(1) - (3)].genericData).type==3){
                                printf("Error: Wrong operation.\n");
                            }
                        } else {
                            printf("Error: Data type mismatched.\n");
                        }
                    ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 364 "laggycompiler.y"
    {
                        if((yyvsp[(1) - (3)].genericData).type == (yyvsp[(3) - (3)].genericData).type && (yyvsp[(1) - (3)].genericData).type==0 ){
                            
                            if((yyvsp[(3) - (3)].genericData).integerVal ==0){
                                printf("Error: Wrong operation.\n");
                            } else{
                                (yyval.genericData).type=(yyvsp[(1) - (3)].genericData).type;
                                (yyval.genericData).integerVal =  (yyvsp[(1) - (3)].genericData).integerVal % (yyvsp[(3) - (3)].genericData).integerVal;
                            }
                        } else {
                            printf("Error: Wrong operation.\n");
                        }
                    ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 378 "laggycompiler.y"
    {
                        if((yyvsp[(1) - (3)].genericData).type == (yyvsp[(3) - (3)].genericData).type){
                            if((yyvsp[(1) - (3)].genericData).type==0){
                                if((yyvsp[(3) - (3)].genericData).integerVal!=0){
                                    (yyval.genericData).type=(yyvsp[(1) - (3)].genericData).type;
                                    (yyval.genericData).integerVal =  (yyvsp[(1) - (3)].genericData).integerVal / (yyvsp[(3) - (3)].genericData).integerVal;
                                } else{
                                    printf("Error: Wrong operation.\n");
                                }
                            }
                            if((yyvsp[(1) - (3)].genericData).type==1){
                                if((yyvsp[(3) - (3)].genericData).floatVal!=0){
                                    (yyval.genericData).type=(yyvsp[(1) - (3)].genericData).type;
                                    (yyval.genericData).floatVal =  (yyvsp[(1) - (3)].genericData).floatVal / (yyvsp[(3) - (3)].genericData).floatVal;
                                } else{
                                    printf("Error: Wrong operation.\n");
                                }
                            }
                             if((yyvsp[(1) - (3)].genericData).type==2){
                                if((yyvsp[(3) - (3)].genericData).charVal!=0){
                                    (yyval.genericData).type=(yyvsp[(1) - (3)].genericData).type;
                                    (yyval.genericData).charVal =  (yyvsp[(1) - (3)].genericData).charVal / (yyvsp[(3) - (3)].genericData).charVal;
                                } else{
                                    printf("Error: Wrong operation.\n");
                                }
                            }
                            if((yyvsp[(1) - (3)].genericData).type==3){
                                printf("Error: Wrong operation.\n");
                            }
                        } else {
                            printf("Error: Data type mismatched.\n");
                        }
                    ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 412 "laggycompiler.y"
    {
                        if((yyvsp[(1) - (2)].genericData).type==0){
                            (yyval.genericData).type=(yyvsp[(1) - (2)].genericData).type;
                            int mult=1 ,i;
						    for(i=(yyvsp[(1) - (2)].genericData).integerVal;i>0;i--)
						    {
						    	mult=mult*i;
						    }
						    (yyval.genericData).integerVal=mult;
                        } else{
                            printf("Error: Wrong operation.\n");
                        }
                            
                    ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 427 "laggycompiler.y"
    {
                        if((yyvsp[(1) - (3)].genericData).type == (yyvsp[(3) - (3)].genericData).type){
                            (yyval.genericData).type=(yyvsp[(1) - (3)].genericData).type;
                            (yyval.genericData).integerVal = ceil(pow((yyvsp[(1) - (3)].genericData).integerVal, (yyvsp[(3) - (3)].genericData).integerVal));
                            (yyval.genericData).floatVal =  ceil(pow((yyvsp[(1) - (3)].genericData).floatVal, (yyvsp[(3) - (3)].genericData).floatVal));
                            (yyval.genericData).charVal =  ceil(pow((yyvsp[(1) - (3)].genericData).charVal , (yyvsp[(3) - (3)].genericData).charVal));
                            if((yyvsp[(1) - (3)].genericData).type==3){
                                printf("Error: Wrong operation.\n");
                            }
                        } else {
                            printf("Error: Data type mismatched.\n");
                        }
                    ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 441 "laggycompiler.y"
    {
                        (yyval.genericData) = (yyvsp[(2) - (3)].genericData);
                    ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 445 "laggycompiler.y"
    {
                        if((yyvsp[(1) - (3)].genericData).type == (yyvsp[(3) - (3)].genericData).type){
                            (yyval.genericData).type=0;
                            if((yyvsp[(1) - (3)].genericData).type==0){
                                (yyval.genericData).integerVal = ((yyvsp[(1) - (3)].genericData).integerVal == (yyvsp[(3) - (3)].genericData).integerVal);
                            } else if((yyvsp[(1) - (3)].genericData).type==1){
                                (yyval.genericData).integerVal = ((yyvsp[(1) - (3)].genericData).floatVal == (yyvsp[(3) - (3)].genericData).floatVal);
                            } else if((yyvsp[(1) - (3)].genericData).type==2){
                                (yyval.genericData).integerVal = ((yyvsp[(1) - (3)].genericData).charVal == (yyvsp[(3) - (3)].genericData).charVal);
                            } else{
                                (yyval.genericData).integerVal = !strcmp((yyvsp[(1) - (3)].genericData).stringVal, (yyvsp[(3) - (3)].genericData).stringVal);
                            }  
                        } else {
                            printf("Error: Data type mismatched.\n");
                        }
                    ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 462 "laggycompiler.y"
    {
                        if((yyvsp[(1) - (3)].genericData).type == (yyvsp[(3) - (3)].genericData).type){
                            (yyval.genericData).type=0;
                            if((yyvsp[(1) - (3)].genericData).type==0){
                                (yyval.genericData).integerVal = ((yyvsp[(1) - (3)].genericData).integerVal > (yyvsp[(3) - (3)].genericData).integerVal);
                            } else if((yyvsp[(1) - (3)].genericData).type==1){
                                (yyval.genericData).integerVal = ((yyvsp[(1) - (3)].genericData).floatVal > (yyvsp[(3) - (3)].genericData).floatVal);
                            } else if((yyvsp[(1) - (3)].genericData).type==2){
                                (yyval.genericData).integerVal = ((yyvsp[(1) - (3)].genericData).charVal > (yyvsp[(3) - (3)].genericData).charVal);
                            } else{
                                printf("Error: Wrong operation.\n");
                            }  
                        } else {
                            printf("Error: Data type mismatched.\n");
                        }
                    ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 479 "laggycompiler.y"
    { 
                        if((yyvsp[(1) - (3)].genericData).type == (yyvsp[(3) - (3)].genericData).type){
                            (yyval.genericData).type=0;
                            if((yyvsp[(1) - (3)].genericData).type==0){
                                (yyval.genericData).integerVal = ((yyvsp[(1) - (3)].genericData).integerVal < (yyvsp[(3) - (3)].genericData).integerVal);
                            } else if((yyvsp[(1) - (3)].genericData).type==1){
                                (yyval.genericData).integerVal = ((yyvsp[(1) - (3)].genericData).floatVal < (yyvsp[(3) - (3)].genericData).floatVal);
                            } else if((yyvsp[(1) - (3)].genericData).type==2){
                                (yyval.genericData).integerVal = ((yyvsp[(1) - (3)].genericData).charVal < (yyvsp[(3) - (3)].genericData).charVal);
                            } else{
                                printf("Error: Wrong operation.\n");
                            }  
                        } else {
                            printf("Error: Data type mismatched.\n");
                        }
                    ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 498 "laggycompiler.y"
    {
                        if((yyvsp[(2) - (10)].genericData).type==0){
                            if((yyvsp[(2) - (10)].genericData).integerVal){
                                (yyval.ifData)=(yyvsp[(6) - (10)].ifData);
                            } else{
                                (yyval.ifData)=(yyvsp[(10) - (10)].ifData);   
                            }
                        } else{
                            printf("Error: Wrong data type in condition.\n");
                        }
                    ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 512 "laggycompiler.y"
    {
                    if((yyvsp[(2) - (10)].genericData).type==0){
                        if((yyvsp[(2) - (10)].genericData).integerVal){
                            (yyval.ifData)=(yyvsp[(6) - (10)].ifData);
                        } else{
                            (yyval.ifData)=(yyvsp[(10) - (10)].ifData);
                        }  
                    } else{
                        printf("Error: Wrong format in condition.\n");
                    }
                    
                ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 525 "laggycompiler.y"
    {
                    (yyval.ifData)=(yyvsp[(5) - (7)].ifData);
                ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 528 "laggycompiler.y"
    {
                (yyval.ifData)=NULL;
                ;}
    break;



/* Line 1455 of yacc.c  */
#line 2177 "laggycompiler.tab.c"
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
#line 537 "laggycompiler.y"




void yyerror(char *s)
{
	fprintf(stderr, "%s\n", s);
}

int main(void)
{
 
    int i,j;
    for(i=0; i<63; i++){
        for(j=0; j<52; j++){
            decleared[i][j]=-1;
        }
    }
	yyparse();
}
