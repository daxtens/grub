/* A Bison parser, made by GNU Bison 3.4.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
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
#define YYBISON_VERSION "3.4.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Substitute the type names.  */
#define YYSTYPE         _ASN1_YYSTYPE
/* Substitute the variable and function names.  */
#define yyparse         _asn1_yyparse
#define yylex           _asn1_yylex
#define yyerror         _asn1_yyerror
#define yydebug         _asn1_yydebug
#define yynerrs         _asn1_yynerrs

#define yylval          _asn1_yylval
#define yychar          _asn1_yychar

/* First part of user prologue.  */
#line 1 "ASN1.y"

/*
 * Copyright (C) 2001-2014 Free Software Foundation, Inc.
 *
 * This file is part of LIBTASN1.
 *
 * The LIBTASN1 library is free software; you can redistribute it
 * and/or modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA
 */

/*****************************************************/
/* File: x509_ASN.y                                  */
/* Description: input file for 'bison' program.      */
/*   The output file is a parser (in C language) for */
/*   ASN.1 syntax                                    */
/*****************************************************/

#include <int.h>
#include <parser_aux.h>
#include <structure.h>
#include <libtasn1.h>
#include "c-ctype.h"

static list_type *e_list = NULL;
static FILE *file_asn1;			/* Pointer to file to parse */
static int result_parse = 0;	/* result of the parser
					   algorithm */
static asn1_node p_tree;		/* pointer to the root of the
					   structure created by the
					   parser*/
static unsigned int line_number;	/* line number describing the
					   parser position inside the
					   file */
static char last_error[ASN1_MAX_ERROR_DESCRIPTION_SIZE] = "";
static char last_error_token[ASN1_MAX_ERROR_DESCRIPTION_SIZE+1] = ""; /* used when expected errors occur */
static char last_token[ASN1_MAX_NAME_SIZE+1] = ""; /* last token find in the file
					   to parse before the 'parse
					   error' */
extern char _asn1_identifierMissing[];
static const char *file_name;		/* file to parse */

static void _asn1_yyerror (const char *);
static int _asn1_yylex(void);

#ifdef FUZZING_BUILD_MODE_UNSAFE_FOR_PRODUCTION
#define SAFE_COPY(dst, dst_size, fmt, ...) { snprintf(dst, dst_size, fmt, __VA_ARGS__); }
#else
#define SAFE_COPY(dst, dst_size, fmt, ...) { \
  int _ret = snprintf(dst, dst_size, fmt, __VA_ARGS__); \
  if (_ret != (int)strlen(dst)) \
    { \
      fprintf(stderr, "%s:%u: Oversize value\n", \
               file_name, line_number); \
      exit(1); \
    } \
}
#endif

#line 150 "ASN1.c"

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
# define YYERROR_VERBOSE 1
#endif


/* Debug traces.  */
#ifndef _ASN1_YYDEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define _ASN1_YYDEBUG 1
#  else
#   define _ASN1_YYDEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define _ASN1_YYDEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined _ASN1_YYDEBUG */
#if _ASN1_YYDEBUG
extern int _asn1_yydebug;
#endif

/* Token type.  */
#ifndef _ASN1_YYTOKENTYPE
# define _ASN1_YYTOKENTYPE
  enum _asn1_yytokentype
  {
    ASSIG = 258,
    NUM = 259,
    IDENTIFIER = 260,
    OPTIONAL = 261,
    INTEGER = 262,
    SIZE = 263,
    OCTET = 264,
    STRING = 265,
    SEQUENCE = 266,
    BIT = 267,
    UNIVERSAL = 268,
    PRIVATE = 269,
    APPLICATION = 270,
    DEFAULT = 271,
    CHOICE = 272,
    OF = 273,
    OBJECT = 274,
    STR_IDENTIFIER = 275,
    BOOLEAN = 276,
    ASN1_TRUE = 277,
    ASN1_FALSE = 278,
    TOKEN_NULL = 279,
    ANY = 280,
    DEFINED = 281,
    BY = 282,
    SET = 283,
    EXPLICIT = 284,
    IMPLICIT = 285,
    DEFINITIONS = 286,
    TAGS = 287,
    BEGIN = 288,
    END = 289,
    UTCTime = 290,
    GeneralizedTime = 291,
    GeneralString = 292,
    NumericString = 293,
    IA5String = 294,
    TeletexString = 295,
    PrintableString = 296,
    UniversalString = 297,
    BMPString = 298,
    UTF8String = 299,
    VisibleString = 300,
    FROM = 301,
    IMPORTS = 302,
    ENUMERATED = 303
  };
#endif
/* Tokens.  */
#define ASSIG 258
#define NUM 259
#define IDENTIFIER 260
#define OPTIONAL 261
#define INTEGER 262
#define SIZE 263
#define OCTET 264
#define STRING 265
#define SEQUENCE 266
#define BIT 267
#define UNIVERSAL 268
#define PRIVATE 269
#define APPLICATION 270
#define DEFAULT 271
#define CHOICE 272
#define OF 273
#define OBJECT 274
#define STR_IDENTIFIER 275
#define BOOLEAN 276
#define ASN1_TRUE 277
#define ASN1_FALSE 278
#define TOKEN_NULL 279
#define ANY 280
#define DEFINED 281
#define BY 282
#define SET 283
#define EXPLICIT 284
#define IMPLICIT 285
#define DEFINITIONS 286
#define TAGS 287
#define BEGIN 288
#define END 289
#define UTCTime 290
#define GeneralizedTime 291
#define GeneralString 292
#define NumericString 293
#define IA5String 294
#define TeletexString 295
#define PrintableString 296
#define UniversalString 297
#define BMPString 298
#define UTF8String 299
#define VisibleString 300
#define FROM 301
#define IMPORTS 302
#define ENUMERATED 303

/* Value type.  */
#if ! defined _ASN1_YYSTYPE && ! defined _ASN1_YYSTYPE_IS_DECLARED
union _ASN1_YYSTYPE
{
#line 77 "ASN1.y"

  unsigned int constant;
  char str[ASN1_MAX_NAME_SIZE+1];
  asn1_node node;

#line 300 "ASN1.c"

};
typedef union _ASN1_YYSTYPE _ASN1_YYSTYPE;
# define _ASN1_YYSTYPE_IS_TRIVIAL 1
# define _ASN1_YYSTYPE_IS_DECLARED 1
#endif


extern _ASN1_YYSTYPE _asn1_yylval;

int _asn1_yyparse (void);





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
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
         || (defined _ASN1_YYSTYPE_IS_TRIVIAL && _ASN1_YYSTYPE_IS_TRIVIAL)))

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

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   248

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  54
/* YYNRULES -- Number of rules.  */
#define YYNRULES  137
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  238

#define YYUNDEFTOK  2
#define YYMAXUTOK   303

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      51,    52,     2,    49,    53,    50,    59,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    54,     2,    55,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    57,    56,    58,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48
};

#if _ASN1_YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   151,   151,   164,   165,   168,   171,   172,   175,   176,
     179,   180,   181,   184,   185,   188,   190,   195,   196,   200,
     202,   207,   208,   212,   213,   214,   217,   219,   223,   224,
     225,   228,   230,   231,   235,   236,   240,   241,   243,   244,
     248,   251,   252,   255,   256,   260,   261,   264,   265,   268,
     269,   272,   273,   276,   277,   280,   281,   284,   285,   288,
     289,   292,   293,   296,   297,   300,   301,   304,   309,   310,
     314,   315,   316,   321,   327,   330,   332,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   357,   358,
     363,   364,   367,   370,   373,   374,   378,   380,   382,   386,
     388,   390,   394,   398,   399,   404,   405,   406,   407,   408,
     409,   410,   411,   414,   421,   424,   428,   433,   439,   440,
     441,   444,   445,   449,   452,   454,   478,   479
};
#endif

#if _ASN1_YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "\"::=\"", "NUM", "IDENTIFIER",
  "OPTIONAL", "INTEGER", "SIZE", "OCTET", "STRING", "SEQUENCE", "BIT",
  "UNIVERSAL", "PRIVATE", "APPLICATION", "DEFAULT", "CHOICE", "OF",
  "OBJECT", "STR_IDENTIFIER", "BOOLEAN", "ASN1_TRUE", "ASN1_FALSE",
  "TOKEN_NULL", "ANY", "DEFINED", "BY", "SET", "EXPLICIT", "IMPLICIT",
  "DEFINITIONS", "TAGS", "BEGIN", "END", "UTCTime", "GeneralizedTime",
  "GeneralString", "NumericString", "IA5String", "TeletexString",
  "PrintableString", "UniversalString", "BMPString", "UTF8String",
  "VisibleString", "FROM", "IMPORTS", "ENUMERATED", "'+'", "'-'", "'('",
  "')'", "','", "'['", "']'", "'|'", "'{'", "'}'", "'.'", "$accept",
  "definitions", "pos_num", "neg_num", "pos_neg_num", "num_identifier",
  "int_identifier", "pos_neg_identifier", "constant", "constant_list",
  "obj_constant", "obj_constant_list", "class", "tag_type", "tag",
  "default", "pos_neg_list", "integer_def", "boolean_def", "Time",
  "size_def2", "size_def", "generalstring_def", "numericstring_def",
  "ia5string_def", "teletexstring_def", "printablestring_def",
  "universalstring_def", "bmpstring_def", "utf8string_def",
  "visiblestring_def", "octet_string_def", "bit_element",
  "bit_element_list", "bit_string_def", "enumerated_def", "object_def",
  "type_assig_right", "type_assig_right_tag",
  "type_assig_right_tag_default", "type_assig", "type_assig_list",
  "sequence_def", "set_def", "choise_def", "any_def", "known_string",
  "type_invalid", "type_def", "constant_def", "type_constant",
  "type_constant_list", "definitions_id", "explicit_implicit", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,    43,
      45,    40,    41,    44,    91,    93,   124,   123,   125,    46
};
# endif

#define YYPACT_NINF -140

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-140)))

#define YYTABLE_NINF -12

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      41,   -27,    32,    17,     0,  -140,    90,  -140,    19,  -140,
    -140,  -140,     3,  -140,  -140,    24,   126,  -140,  -140,    98,
      80,   105,  -140,   141,    30,  -140,  -140,  -140,  -140,  -140,
    -140,  -140,  -140,   131,  -140,  -140,  -140,  -140,    84,    67,
     148,   155,   170,   107,  -140,  -140,     6,    91,   184,    18,
     185,   139,   177,  -140,  -140,   172,    36,  -140,  -140,     6,
       6,     6,     6,     6,     6,     6,     6,     6,   142,    25,
     145,   128,   149,  -140,  -140,  -140,  -140,  -140,  -140,  -140,
    -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,
    -140,  -140,  -140,  -140,   144,    64,   199,   174,   152,   196,
    -140,  -140,    26,     6,   128,   200,   189,    43,   200,  -140,
     179,   128,   200,   190,  -140,  -140,  -140,  -140,  -140,  -140,
    -140,  -140,  -140,   204,   156,  -140,  -140,  -140,   206,  -140,
    -140,  -140,    92,   173,  -140,   208,   209,  -140,  -140,  -140,
     157,   211,   188,   164,   166,    64,  -140,   -11,  -140,  -140,
      67,  -140,    27,   128,   204,  -140,    78,   213,  -140,    97,
     128,   168,  -140,   101,  -140,   165,   162,  -140,   218,  -140,
     167,    10,     5,  -140,  -140,   173,   169,  -140,    -7,  -140,
      64,   171,    26,  -140,    37,  -140,   200,  -140,  -140,   104,
    -140,  -140,  -140,  -140,   221,   204,  -140,  -140,   175,   176,
    -140,    64,  -140,     7,   197,  -140,   178,   180,  -140,  -140,
    -140,    94,  -140,  -140,  -140,   181,  -140,    23,  -140,  -140,
     219,   188,  -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,
     225,   186,   220,   187,  -140,  -140,  -140,  -140
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   135,     0,     0,     0,     1,     0,     8,     9,   134,
      19,    21,     0,   136,   137,     0,     0,   133,    22,     0,
       0,     0,    20,     0,     0,   120,   119,   121,   117,   118,
     122,   115,   116,     0,   129,   128,   130,   131,     0,     0,
       0,     0,     0,     0,     2,   132,    75,    36,     0,     0,
       0,     0,     0,    40,    97,   113,     0,    41,    42,    47,
      49,    51,    53,    55,    57,    59,    61,    63,     0,     0,
      28,     0,    77,    79,    80,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    81,    82,    78,    93,    98,   124,
      92,    96,    94,    95,     0,     0,     0,     0,     0,     0,
      45,    76,     0,    65,     0,     0,     0,    70,     0,    74,
       0,     0,     0,     0,    48,    50,    52,    54,    56,    58,
      60,    62,    64,     0,     0,    23,    24,    25,     0,    29,
      30,    99,     0,     0,     3,     0,     0,     6,     7,   127,
       0,     0,     0,     0,     0,     0,    17,     0,    66,   107,
       0,   104,     0,     0,     0,    71,     0,     0,   110,     0,
       0,     0,    68,     0,    26,     0,     3,    12,     0,    34,
       0,     0,     0,     4,     5,     0,     0,     9,     0,    46,
       0,     0,     0,    37,   100,   103,     0,   106,   108,     0,
     112,   114,   109,   111,     0,     0,    73,    27,     5,     0,
      38,     0,   126,     0,     0,    43,     0,     0,    15,    18,
     102,     0,   101,   105,    72,     0,    69,     0,    35,   125,
       0,     0,    16,    14,    32,    33,    13,    31,    67,    10,
       0,     0,     0,     0,    11,    39,   123,    44
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -140,  -140,  -140,  -140,  -130,  -139,    14,  -140,    54,  -140,
     -12,  -108,   143,  -140,  -140,  -140,  -140,  -140,  -140,  -140,
     146,   -43,  -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,
    -140,  -140,    46,    88,  -140,  -140,  -140,   -70,    93,  -140,
      58,   -53,  -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,
     210,  -140,  -140,  -140
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,   137,   138,   139,    10,   170,   227,   146,   147,
      11,    12,   128,    70,    71,   212,   171,    72,    73,    74,
     100,   101,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,   162,   163,    85,    86,    87,    88,    89,   185,
     151,   152,    90,    91,    92,    93,    33,    34,    35,    36,
      37,    38,     3,    15
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      18,   131,   169,   178,     7,     8,   106,     7,     8,     7,
       8,     7,     8,   113,    98,   181,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   172,    98,   229,   167,   124,
       4,   144,     5,    39,   149,    40,   104,    41,   125,   126,
     127,   158,   182,   210,    98,   205,     1,   183,     6,    42,
     207,    98,   206,   211,   111,   156,    19,    99,     9,   159,
     148,    17,   200,   202,   155,   219,   201,   203,   134,    99,
      16,   218,    46,   230,    47,   105,    48,   145,    49,    50,
     186,   226,   233,   188,    51,   187,    52,    99,    53,    24,
     193,    54,    55,   112,    99,    56,   166,   167,   134,   223,
     154,    21,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,   135,   136,    68,   224,   225,    44,    13,
      14,    69,    25,    26,    27,    28,    29,    30,    31,    32,
      20,   186,    22,    46,    43,    47,   190,    48,    23,    49,
      50,   135,   168,   135,   136,    51,    24,    52,   102,    53,
     186,    94,    54,    55,   195,   192,    56,   195,    95,   196,
      18,    97,   214,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,   129,   130,    68,     7,     8,    25,
      26,    27,    28,    29,    30,    31,    32,   125,   126,   127,
      96,    18,     7,   177,   103,   107,   108,   109,   110,   123,
     132,   133,   140,   142,    98,   150,   157,   153,   160,   161,
     165,   164,   173,   174,   175,   176,   179,   180,   191,   194,
     197,   -10,   198,   208,   204,   215,   199,   220,   232,   234,
     236,   231,   222,   228,   -11,   217,   209,   221,   235,   237,
     141,   216,   189,   184,   213,   143,     0,     0,    45
};

static const yytype_int16 yycheck[] =
{
      12,    71,   132,   142,     4,     5,    49,     4,     5,     4,
       5,     4,     5,    56,     8,   145,    59,    60,    61,    62,
      63,    64,    65,    66,    67,   133,     8,     4,     5,     4,
      57,     5,     0,     3,   104,     5,    18,     7,    13,    14,
      15,   111,    53,     6,     8,    52,     5,    58,    31,    19,
     180,     8,    59,    16,    18,   108,    32,    51,    58,   112,
     103,    58,    52,    58,   107,    58,    56,   175,     4,    51,
      51,   201,     5,    50,     7,    57,     9,    51,    11,    12,
      53,   211,   221,   153,    17,    58,    19,    51,    21,     5,
     160,    24,    25,    57,    51,    28,     4,     5,     4,     5,
      57,     3,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    49,    50,    48,    22,    23,    34,    29,
      30,    54,    38,    39,    40,    41,    42,    43,    44,    45,
       4,    53,    52,     5,     3,     7,    58,     9,    33,    11,
      12,    49,    50,    49,    50,    17,     5,    19,    57,    21,
      53,     3,    24,    25,    53,    58,    28,    53,     3,    58,
     172,    54,    58,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    29,    30,    48,     4,     5,    38,
      39,    40,    41,    42,    43,    44,    45,    13,    14,    15,
      20,   203,     4,     5,    10,    10,    57,    20,    26,    57,
      51,    57,     3,    51,     8,     5,    27,    18,    18,     5,
       4,    55,     4,     4,    57,     4,    52,    51,     5,    51,
      55,    59,     4,    52,    55,     4,    59,    30,     9,     4,
      10,   217,    52,    52,    59,    59,   182,    59,    52,    52,
      97,   195,   154,   150,   186,    99,    -1,    -1,    38
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,    61,   112,    57,     0,    31,     4,     5,    58,
      65,    70,    71,    29,    30,   113,    51,    58,    70,    32,
       4,     3,    52,    33,     5,    38,    39,    40,    41,    42,
      43,    44,    45,   106,   107,   108,   109,   110,   111,     3,
       5,     7,    19,     3,    34,   110,     5,     7,     9,    11,
      12,    17,    19,    21,    24,    25,    28,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    48,    54,
      73,    74,    77,    78,    79,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    94,    95,    96,    97,    98,
     102,   103,   104,   105,     3,     3,    20,    54,     8,    51,
      80,    81,    57,    10,    18,    57,    81,    10,    57,    20,
      26,    18,    57,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    57,     4,    13,    14,    15,    72,    29,
      30,    97,    51,    57,     4,    49,    50,    62,    63,    64,
       3,    72,    51,    80,     5,    51,    68,    69,    81,    97,
       5,   100,   101,    18,    57,    81,   101,    27,    97,   101,
      18,     5,    92,    93,    55,     4,     4,     5,    50,    64,
      66,    76,    71,     4,     4,    57,     4,     5,    65,    52,
      51,    64,    53,    58,    98,    99,    53,    58,    97,    93,
      58,     5,    58,    97,    51,    53,    58,    55,     4,    59,
      52,    56,    58,    71,    55,    52,    59,    64,    52,    68,
       6,    16,    75,   100,    58,     4,    92,    59,    64,    58,
      30,    59,    52,     5,    22,    23,    64,    67,    52,     4,
      50,    66,     9,    65,     4,    52,    10,    52
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    60,    61,    62,    62,    63,    64,    64,    65,    65,
      66,    66,    66,    67,    67,    68,    68,    69,    69,    70,
      70,    71,    71,    72,    72,    72,    73,    73,    74,    74,
      74,    75,    75,    75,    76,    76,    77,    77,    77,    77,
      78,    79,    79,    80,    80,    81,    81,    82,    82,    83,
      83,    84,    84,    85,    85,    86,    86,    87,    87,    88,
      88,    89,    89,    90,    90,    91,    91,    92,    93,    93,
      94,    94,    94,    95,    96,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    98,    98,
      99,    99,    99,   100,   101,   101,   102,   102,   102,   103,
     103,   103,   104,   105,   105,   106,   106,   106,   106,   106,
     106,   106,   106,   107,   108,   109,   109,   109,   110,   110,
     110,   111,   111,   112,   112,   112,   113,   113
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     8,     1,     2,     2,     1,     1,     1,     1,
       1,     2,     1,     1,     1,     3,     4,     1,     3,     1,
       4,     1,     2,     1,     1,     1,     3,     4,     1,     2,
       2,     2,     2,     2,     1,     3,     1,     4,     4,     7,
       1,     1,     1,     4,     7,     1,     3,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     2,     2,     3,     4,     1,     3,
       2,     3,     5,     4,     2,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     2,     2,     2,     1,     3,     4,     3,     4,     4,
       3,     4,     4,     1,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     9,     3,     7,     6,     4,     1,     1,
       1,     1,     2,     4,     3,     1,     1,     1
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
#if _ASN1_YYDEBUG

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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
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
#else /* !_ASN1_YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !_ASN1_YYDEBUG */


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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
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

  if (! yyres)
    return yystrlen (yystr);

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
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
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

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
      int yyn = yypact[*yyssp];
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
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
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
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
          yyp++;
          yyformat++;
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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
| yynewstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

# if defined yyoverflow
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
# else /* defined YYSTACK_RELOCATE */
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
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
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
  case 2:
#line 154 "ASN1.y"
    {(yyval.node)=_asn1_add_static_node(&e_list, ASN1_ETYPE_DEFINITIONS|(yyvsp[-5].constant));
                    _asn1_set_name((yyval.node),_asn1_get_name((yyvsp[-7].node)));
                    _asn1_set_name((yyvsp[-7].node),"");
                    _asn1_set_right((yyvsp[-7].node),(yyvsp[-1].node));
                    _asn1_set_down((yyval.node),(yyvsp[-7].node));

		    p_tree=(yyval.node);
		    }
#line 1588 "ASN1.c"
    break;

  case 3:
#line 164 "ASN1.y"
    {snprintf((yyval.str),sizeof((yyval.str)),"%s",(yyvsp[0].str));}
#line 1594 "ASN1.c"
    break;

  case 4:
#line 165 "ASN1.y"
    {snprintf((yyval.str),sizeof((yyval.str)),"%s",(yyvsp[0].str));}
#line 1600 "ASN1.c"
    break;

  case 5:
#line 168 "ASN1.y"
    {SAFE_COPY((yyval.str),sizeof((yyval.str)),"-%s",(yyvsp[0].str));}
#line 1606 "ASN1.c"
    break;

  case 6:
#line 171 "ASN1.y"
    {snprintf((yyval.str),sizeof((yyval.str)),"%s",(yyvsp[0].str));}
#line 1612 "ASN1.c"
    break;

  case 7:
#line 172 "ASN1.y"
    {snprintf((yyval.str),sizeof((yyval.str)),"%s",(yyvsp[0].str));}
#line 1618 "ASN1.c"
    break;

  case 8:
#line 175 "ASN1.y"
    {snprintf((yyval.str),sizeof((yyval.str)),"%s",(yyvsp[0].str));}
#line 1624 "ASN1.c"
    break;

  case 9:
#line 176 "ASN1.y"
    {snprintf((yyval.str),sizeof((yyval.str)),"%s",(yyvsp[0].str));}
#line 1630 "ASN1.c"
    break;

  case 10:
#line 179 "ASN1.y"
    {snprintf((yyval.str),sizeof((yyval.str)),"%s",(yyvsp[0].str));}
#line 1636 "ASN1.c"
    break;

  case 11:
#line 180 "ASN1.y"
    {SAFE_COPY((yyval.str),sizeof((yyval.str)),"-%s",(yyvsp[0].str));}
#line 1642 "ASN1.c"
    break;

  case 12:
#line 181 "ASN1.y"
    {snprintf((yyval.str),sizeof((yyval.str)),"%s",(yyvsp[0].str));}
#line 1648 "ASN1.c"
    break;

  case 13:
#line 184 "ASN1.y"
    {snprintf((yyval.str),sizeof((yyval.str)),"%s",(yyvsp[0].str));}
#line 1654 "ASN1.c"
    break;

  case 14:
#line 185 "ASN1.y"
    {snprintf((yyval.str),sizeof((yyval.str)),"%s",(yyvsp[0].str));}
#line 1660 "ASN1.c"
    break;

  case 15:
#line 188 "ASN1.y"
    {(yyval.node)=_asn1_add_static_node(&e_list, ASN1_ETYPE_CONSTANT);
                                       _asn1_set_value((yyval.node),(yyvsp[-1].str),strlen((yyvsp[-1].str))+1);}
#line 1667 "ASN1.c"
    break;

  case 16:
#line 190 "ASN1.y"
    {(yyval.node)=_asn1_add_static_node(&e_list, ASN1_ETYPE_CONSTANT);
	                               _asn1_set_name((yyval.node),(yyvsp[-3].str));
                                       _asn1_set_value((yyval.node),(yyvsp[-1].str),strlen((yyvsp[-1].str))+1);}
#line 1675 "ASN1.c"
    break;

  case 17:
#line 195 "ASN1.y"
    {(yyval.node)=(yyvsp[0].node);}
#line 1681 "ASN1.c"
    break;

  case 18:
#line 196 "ASN1.y"
    {(yyval.node)=(yyvsp[-2].node);
                                            _asn1_set_right(_asn1_get_last_right((yyvsp[-2].node)),(yyvsp[0].node));}
#line 1688 "ASN1.c"
    break;

  case 19:
#line 200 "ASN1.y"
    {(yyval.node)=_asn1_add_static_node(&e_list, ASN1_ETYPE_CONSTANT);
                                   _asn1_set_value((yyval.node),(yyvsp[0].str),strlen((yyvsp[0].str))+1);}
#line 1695 "ASN1.c"
    break;

  case 20:
#line 202 "ASN1.y"
    {(yyval.node)=_asn1_add_static_node(&e_list, ASN1_ETYPE_CONSTANT);
	                            _asn1_set_name((yyval.node),(yyvsp[-3].str));
                                    _asn1_set_value((yyval.node),(yyvsp[-1].str),strlen((yyvsp[-1].str))+1);}
#line 1703 "ASN1.c"
    break;

  case 21:
#line 207 "ASN1.y"
    {(yyval.node)=(yyvsp[0].node);}
#line 1709 "ASN1.c"
    break;

  case 22:
#line 208 "ASN1.y"
    {(yyval.node)=(yyvsp[-1].node);
                                                    _asn1_set_right(_asn1_get_last_right((yyvsp[-1].node)),(yyvsp[0].node));}
#line 1716 "ASN1.c"
    break;

  case 23:
#line 212 "ASN1.y"
    {(yyval.constant)=CONST_UNIVERSAL;}
#line 1722 "ASN1.c"
    break;

  case 24:
#line 213 "ASN1.y"
    {(yyval.constant)=CONST_PRIVATE;}
#line 1728 "ASN1.c"
    break;

  case 25:
#line 214 "ASN1.y"
    {(yyval.constant)=CONST_APPLICATION;}
#line 1734 "ASN1.c"
    break;

  case 26:
#line 217 "ASN1.y"
    {(yyval.node)=_asn1_add_static_node(&e_list, ASN1_ETYPE_TAG);
                            _asn1_set_value((yyval.node),(yyvsp[-1].str),strlen((yyvsp[-1].str))+1);}
#line 1741 "ASN1.c"
    break;

  case 27:
#line 219 "ASN1.y"
    {(yyval.node)=_asn1_add_static_node(&e_list, ASN1_ETYPE_TAG | (yyvsp[-2].constant));
                                _asn1_set_value((yyval.node),(yyvsp[-1].str),strlen((yyvsp[-1].str))+1);}
#line 1748 "ASN1.c"
    break;

  case 28:
#line 223 "ASN1.y"
    {(yyval.node)=(yyvsp[0].node);}
#line 1754 "ASN1.c"
    break;

  case 29:
#line 224 "ASN1.y"
    {(yyval.node)=_asn1_mod_type((yyvsp[-1].node),CONST_EXPLICIT);}
#line 1760 "ASN1.c"
    break;

  case 30:
#line 225 "ASN1.y"
    {(yyval.node)=_asn1_mod_type((yyvsp[-1].node),CONST_IMPLICIT);}
#line 1766 "ASN1.c"
    break;

  case 31:
#line 228 "ASN1.y"
    {(yyval.node)=_asn1_add_static_node(&e_list, ASN1_ETYPE_DEFAULT);
                                       _asn1_set_value((yyval.node),(yyvsp[0].str),strlen((yyvsp[0].str))+1);}
#line 1773 "ASN1.c"
    break;

  case 32:
#line 230 "ASN1.y"
    {(yyval.node)=_asn1_add_static_node(&e_list, ASN1_ETYPE_DEFAULT|CONST_TRUE);}
#line 1779 "ASN1.c"
    break;

  case 33:
#line 231 "ASN1.y"
    {(yyval.node)=_asn1_add_static_node(&e_list, ASN1_ETYPE_DEFAULT|CONST_FALSE);}
#line 1785 "ASN1.c"
    break;

  case 36:
#line 240 "ASN1.y"
    {(yyval.node)=_asn1_add_static_node(&e_list, ASN1_ETYPE_INTEGER);}
#line 1791 "ASN1.c"
    break;

  case 37:
#line 241 "ASN1.y"
    {(yyval.node)=_asn1_add_static_node(&e_list, ASN1_ETYPE_INTEGER|CONST_LIST);
	                                 _asn1_set_down((yyval.node),(yyvsp[-1].node));}
#line 1798 "ASN1.c"
    break;

  case 38:
#line 243 "ASN1.y"
    {(yyval.node)=(yyvsp[-3].node);}
#line 1804 "ASN1.c"
    break;

  case 39:
#line 245 "ASN1.y"
    {(yyval.node)=(yyvsp[-6].node);}
#line 1810 "ASN1.c"
    break;

  case 40:
#line 248 "ASN1.y"
    {(yyval.node)=_asn1_add_static_node(&e_list, ASN1_ETYPE_BOOLEAN);}
#line 1816 "ASN1.c"
    break;

  case 41:
#line 251 "ASN1.y"
    {(yyval.node)=_asn1_add_static_node(&e_list, ASN1_ETYPE_UTC_TIME);}
#line 1822 "ASN1.c"
    break;

  case 42:
#line 252 "ASN1.y"
    {(yyval.node)=_asn1_add_static_node(&e_list, ASN1_ETYPE_GENERALIZED_TIME);}
#line 1828 "ASN1.c"
    break;

  case 43:
#line 255 "ASN1.y"
    { }
#line 1834 "ASN1.c"
    break;

  case 44:
#line 257 "ASN1.y"
    { }
#line 1840 "ASN1.c"
    break;

  case 45:
#line 260 "ASN1.y"
    {(yyval.node)=(yyvsp[0].node);}
#line 1846 "ASN1.c"
    break;

  case 46:
#line 261 "ASN1.y"
    {(yyval.node)=(yyvsp[-1].node);}
#line 1852 "ASN1.c"
    break;

  case 47:
#line 264 "ASN1.y"
    {(yyval.node)=_asn1_add_static_node(&e_list, ASN1_ETYPE_GENERALSTRING);}
#line 1858 "ASN1.c"
    break;

  case 48:
#line 265 "ASN1.y"
    {(yyval.node)=_asn1_add_static_node(&e_list, ASN1_ETYPE_GENERALSTRING|CONST_SIZE);}
#line 1864 "ASN1.c"
    break;

  case 49:
#line 268 "ASN1.y"
    {(yyval.node)=_asn1_add_static_node(&e_list, ASN1_ETYPE_NUMERIC_STRING|CONST_UNIVERSAL);}
#line 1870 "ASN1.c"
    break;

  case 50:
#line 269 "ASN1.y"
    {(yyval.node)=_asn1_add_static_node(&e_list, ASN1_ETYPE_NUMERIC_STRING|CONST_SIZE);}
#line 1876 "ASN1.c"
    break;

  case 51:
#line 272 "ASN1.y"
    {(yyval.node)=_asn1_add_static_node(&e_list, ASN1_ETYPE_IA5_STRING);}
#line 1882 "ASN1.c"
    break;

  case 52:
#line 273 "ASN1.y"
    {(yyval.node)=_asn1_add_static_node(&e_list, ASN1_ETYPE_IA5_STRING|CONST_SIZE);}
#line 1888 "ASN1.c"
    break;

  case 53:
#line 276 "ASN1.y"
    {(yyval.node)=_asn1_add_static_node(&e_list, ASN1_ETYPE_TELETEX_STRING);}
#line 1894 "ASN1.c"
    break;

  case 54:
#line 277 "ASN1.y"
    {(yyval.node)=_asn1_add_static_node(&e_list, ASN1_ETYPE_TELETEX_STRING|CONST_SIZE);}
#line 1900 "ASN1.c"
    break;

  case 55:
#line 280 "ASN1.y"
    {(yyval.node)=_asn1_add_static_node(&e_list, ASN1_ETYPE_PRINTABLE_STRING);}
#line 1906 "ASN1.c"
    break;

  case 56:
#line 281 "ASN1.y"
    {(yyval.node)=_asn1_add_static_node(&e_list, ASN1_ETYPE_PRINTABLE_STRING|CONST_SIZE);}
#line 1912 "ASN1.c"
    break;

  case 57:
#line 284 "ASN1.y"
    {(yyval.node)=_asn1_add_static_node(&e_list, ASN1_ETYPE_UNIVERSAL_STRING);}
#line 1918 "ASN1.c"
    break;

  case 58:
#line 285 "ASN1.y"
    {(yyval.node)=_asn1_add_static_node(&e_list, ASN1_ETYPE_UNIVERSAL_STRING|CONST_SIZE);}
#line 1924 "ASN1.c"
    break;

  case 59:
#line 288 "ASN1.y"
    {(yyval.node)=_asn1_add_static_node(&e_list, ASN1_ETYPE_BMP_STRING);}
#line 1930 "ASN1.c"
    break;

  case 60:
#line 289 "ASN1.y"
    {(yyval.node)=_asn1_add_static_node(&e_list, ASN1_ETYPE_BMP_STRING|CONST_SIZE);}
#line 1936 "ASN1.c"
    break;

  case 61:
#line 292 "ASN1.y"
    {(yyval.node)=_asn1_add_static_node(&e_list, ASN1_ETYPE_UTF8_STRING);}
#line 1942 "ASN1.c"
    break;

  case 62:
#line 293 "ASN1.y"
    {(yyval.node)=_asn1_add_static_node(&e_list, ASN1_ETYPE_UTF8_STRING|CONST_SIZE);}
#line 1948 "ASN1.c"
    break;

  case 63:
#line 296 "ASN1.y"
    {(yyval.node)=_asn1_add_static_node(&e_list, ASN1_ETYPE_VISIBLE_STRING);}
#line 1954 "ASN1.c"
    break;

  case 64:
#line 297 "ASN1.y"
    {(yyval.node)=_asn1_add_static_node(&e_list, ASN1_ETYPE_VISIBLE_STRING|CONST_SIZE);}
#line 1960 "ASN1.c"
    break;

  case 65:
#line 300 "ASN1.y"
    {(yyval.node)=_asn1_add_static_node(&e_list, ASN1_ETYPE_OCTET_STRING);}
#line 1966 "ASN1.c"
    break;

  case 66:
#line 301 "ASN1.y"
    {(yyval.node)=_asn1_add_static_node(&e_list, ASN1_ETYPE_OCTET_STRING|CONST_SIZE);}
#line 1972 "ASN1.c"
    break;

  case 67:
#line 304 "ASN1.y"
    {(yyval.node)=_asn1_add_static_node(&e_list, ASN1_ETYPE_CONSTANT);
	                           _asn1_set_name((yyval.node),(yyvsp[-3].str));
                                    _asn1_set_value((yyval.node),(yyvsp[-1].str),strlen((yyvsp[-1].str))+1);}
#line 1980 "ASN1.c"
    break;

  case 68:
#line 309 "ASN1.y"
    {(yyval.node)=(yyvsp[0].node);}
#line 1986 "ASN1.c"
    break;

  case 69:
#line 310 "ASN1.y"
    {(yyval.node)=(yyvsp[-2].node);
                                                       _asn1_set_right(_asn1_get_last_right((yyvsp[-2].node)),(yyvsp[0].node));}
#line 1993 "ASN1.c"
    break;

  case 70:
#line 314 "ASN1.y"
    {(yyval.node)=_asn1_add_static_node(&e_list, ASN1_ETYPE_BIT_STRING);}
#line 1999 "ASN1.c"
    break;

  case 71:
#line 315 "ASN1.y"
    {(yyval.node)=_asn1_add_static_node(&e_list, ASN1_ETYPE_BIT_STRING|CONST_SIZE);}
#line 2005 "ASN1.c"
    break;

  case 72:
#line 317 "ASN1.y"
    {(yyval.node)=_asn1_add_static_node(&e_list, ASN1_ETYPE_BIT_STRING|CONST_LIST);
                                _asn1_set_down((yyval.node),(yyvsp[-1].node));}
#line 2012 "ASN1.c"
    break;

  case 73:
#line 322 "ASN1.y"
    {(yyval.node)=_asn1_add_static_node(&e_list, ASN1_ETYPE_ENUMERATED|CONST_LIST);
                                _asn1_set_down((yyval.node),(yyvsp[-1].node));}
#line 2019 "ASN1.c"
    break;

  case 74:
#line 327 "ASN1.y"
    {(yyval.node)=_asn1_add_static_node(&e_list, ASN1_ETYPE_OBJECT_ID);}
#line 2025 "ASN1.c"
    break;

  case 75:
#line 330 "ASN1.y"
    {(yyval.node)=_asn1_add_static_node(&e_list, ASN1_ETYPE_IDENTIFIER);
                                       _asn1_set_value((yyval.node),(yyvsp[0].str),strlen((yyvsp[0].str))+1);}
#line 2032 "ASN1.c"
    break;

  case 76:
#line 332 "ASN1.y"
    {(yyval.node)=_asn1_add_static_node(&e_list, ASN1_ETYPE_IDENTIFIER|CONST_SIZE);
                                       _asn1_set_value((yyval.node),(yyvsp[-1].str),strlen((yyvsp[-1].str))+1);}
#line 2039 "ASN1.c"
    break;

  case 77:
#line 334 "ASN1.y"
    {(yyval.node)=(yyvsp[0].node);}
#line 2045 "ASN1.c"
    break;

  case 78:
#line 335 "ASN1.y"
    {(yyval.node)=(yyvsp[0].node);}
#line 2051 "ASN1.c"
    break;

  case 79:
#line 336 "ASN1.y"
    {(yyval.node)=(yyvsp[0].node);}
#line 2057 "ASN1.c"
    break;

  case 81:
#line 338 "ASN1.y"
    {(yyval.node)=(yyvsp[0].node);}
#line 2063 "ASN1.c"
    break;

  case 82:
#line 339 "ASN1.y"
    {(yyval.node)=(yyvsp[0].node);}
#line 2069 "ASN1.c"
    break;

  case 83:
#line 340 "ASN1.y"
    {(yyval.node)=(yyvsp[0].node);}
#line 2075 "ASN1.c"
    break;

  case 84:
#line 341 "ASN1.y"
    {(yyval.node)=(yyvsp[0].node);}
#line 2081 "ASN1.c"
    break;

  case 85:
#line 342 "ASN1.y"
    {(yyval.node)=(yyvsp[0].node);}
#line 2087 "ASN1.c"
    break;

  case 86:
#line 343 "ASN1.y"
    {(yyval.node)=(yyvsp[0].node);}
#line 2093 "ASN1.c"
    break;

  case 87:
#line 344 "ASN1.y"
    {(yyval.node)=(yyvsp[0].node);}
#line 2099 "ASN1.c"
    break;

  case 88:
#line 345 "ASN1.y"
    {(yyval.node)=(yyvsp[0].node);}
#line 2105 "ASN1.c"
    break;

  case 89:
#line 346 "ASN1.y"
    {(yyval.node)=(yyvsp[0].node);}
#line 2111 "ASN1.c"
    break;

  case 90:
#line 347 "ASN1.y"
    {(yyval.node)=(yyvsp[0].node);}
#line 2117 "ASN1.c"
    break;

  case 91:
#line 348 "ASN1.y"
    {(yyval.node)=(yyvsp[0].node);}
#line 2123 "ASN1.c"
    break;

  case 92:
#line 349 "ASN1.y"
    {(yyval.node)=(yyvsp[0].node);}
#line 2129 "ASN1.c"
    break;

  case 93:
#line 350 "ASN1.y"
    {(yyval.node)=(yyvsp[0].node);}
#line 2135 "ASN1.c"
    break;

  case 94:
#line 351 "ASN1.y"
    {(yyval.node)=(yyvsp[0].node);}
#line 2141 "ASN1.c"
    break;

  case 95:
#line 352 "ASN1.y"
    {(yyval.node)=(yyvsp[0].node);}
#line 2147 "ASN1.c"
    break;

  case 96:
#line 353 "ASN1.y"
    {(yyval.node)=(yyvsp[0].node);}
#line 2153 "ASN1.c"
    break;

  case 97:
#line 354 "ASN1.y"
    {(yyval.node)=_asn1_add_static_node(&e_list, ASN1_ETYPE_NULL);}
#line 2159 "ASN1.c"
    break;

  case 98:
#line 357 "ASN1.y"
    {(yyval.node)=(yyvsp[0].node);}
#line 2165 "ASN1.c"
    break;

  case 99:
#line 358 "ASN1.y"
    {(yyval.node)=_asn1_mod_type((yyvsp[0].node),CONST_TAG);
                                               _asn1_set_right((yyvsp[-1].node),_asn1_get_down((yyval.node)));
                                               _asn1_set_down((yyval.node),(yyvsp[-1].node));}
#line 2173 "ASN1.c"
    break;

  case 100:
#line 363 "ASN1.y"
    {(yyval.node)=(yyvsp[0].node);}
#line 2179 "ASN1.c"
    break;

  case 101:
#line 364 "ASN1.y"
    {(yyval.node)=_asn1_mod_type((yyvsp[-1].node),CONST_DEFAULT);
                                                       _asn1_set_right((yyvsp[0].node),_asn1_get_down((yyval.node)));
						       _asn1_set_down((yyval.node),(yyvsp[0].node));}
#line 2187 "ASN1.c"
    break;

  case 102:
#line 367 "ASN1.y"
    {(yyval.node)=_asn1_mod_type((yyvsp[-1].node),CONST_OPTION);}
#line 2193 "ASN1.c"
    break;

  case 103:
#line 370 "ASN1.y"
    {(yyval.node)=_asn1_set_name((yyvsp[0].node),(yyvsp[-1].str));}
#line 2199 "ASN1.c"
    break;

  case 104:
#line 373 "ASN1.y"
    {(yyval.node)=(yyvsp[0].node);}
#line 2205 "ASN1.c"
    break;

  case 105:
#line 374 "ASN1.y"
    {(yyval.node)=(yyvsp[-2].node);
                                                _asn1_set_right(_asn1_get_last_right((yyvsp[-2].node)),(yyvsp[0].node));}
#line 2212 "ASN1.c"
    break;

  case 106:
#line 378 "ASN1.y"
    {(yyval.node)=_asn1_add_static_node(&e_list, ASN1_ETYPE_SEQUENCE);
                                              _asn1_set_down((yyval.node),(yyvsp[-1].node));}
#line 2219 "ASN1.c"
    break;

  case 107:
#line 380 "ASN1.y"
    {(yyval.node)=_asn1_add_static_node(&e_list, ASN1_ETYPE_SEQUENCE_OF);
                                              _asn1_set_down((yyval.node),(yyvsp[0].node));}
#line 2226 "ASN1.c"
    break;

  case 108:
#line 382 "ASN1.y"
    {(yyval.node)=_asn1_add_static_node(&e_list, ASN1_ETYPE_SEQUENCE_OF|CONST_SIZE);
                                            _asn1_set_down((yyval.node),(yyvsp[0].node));}
#line 2233 "ASN1.c"
    break;

  case 109:
#line 386 "ASN1.y"
    {(yyval.node)=_asn1_add_static_node(&e_list, ASN1_ETYPE_SET);
                                     _asn1_set_down((yyval.node),(yyvsp[-1].node));}
#line 2240 "ASN1.c"
    break;

  case 110:
#line 388 "ASN1.y"
    {(yyval.node)=_asn1_add_static_node(&e_list, ASN1_ETYPE_SET_OF);
                                     _asn1_set_down((yyval.node),(yyvsp[0].node));}
#line 2247 "ASN1.c"
    break;

  case 111:
#line 390 "ASN1.y"
    {(yyval.node)=_asn1_add_static_node(&e_list, ASN1_ETYPE_SET_OF|CONST_SIZE);
                                       _asn1_set_down((yyval.node),(yyvsp[0].node));}
#line 2254 "ASN1.c"
    break;

  case 112:
#line 394 "ASN1.y"
    {(yyval.node)=_asn1_add_static_node(&e_list, ASN1_ETYPE_CHOICE);
                                             _asn1_set_down((yyval.node),(yyvsp[-1].node));}
#line 2261 "ASN1.c"
    break;

  case 113:
#line 398 "ASN1.y"
    {(yyval.node)=_asn1_add_static_node(&e_list, ASN1_ETYPE_ANY);}
#line 2267 "ASN1.c"
    break;

  case 114:
#line 399 "ASN1.y"
    {(yyval.node)=_asn1_add_static_node(&e_list, ASN1_ETYPE_ANY|CONST_DEFINED_BY);
                                        _asn1_set_down((yyval.node),_asn1_add_static_node(&e_list, ASN1_ETYPE_CONSTANT));
	                                _asn1_set_name(_asn1_get_down((yyval.node)),(yyvsp[0].str));}
#line 2275 "ASN1.c"
    break;

  case 115:
#line 404 "ASN1.y"
    { SAFE_COPY((yyval.str),sizeof((yyval.str)),"%s",last_token); }
#line 2281 "ASN1.c"
    break;

  case 116:
#line 405 "ASN1.y"
    { SAFE_COPY((yyval.str),sizeof((yyval.str)),"%s",last_token); }
#line 2287 "ASN1.c"
    break;

  case 117:
#line 406 "ASN1.y"
    { SAFE_COPY((yyval.str),sizeof((yyval.str)),"%s",last_token); }
#line 2293 "ASN1.c"
    break;

  case 118:
#line 407 "ASN1.y"
    { SAFE_COPY((yyval.str),sizeof((yyval.str)),"%s",last_token); }
#line 2299 "ASN1.c"
    break;

  case 119:
#line 408 "ASN1.y"
    { SAFE_COPY((yyval.str),sizeof((yyval.str)),"%s",last_token); }
#line 2305 "ASN1.c"
    break;

  case 120:
#line 409 "ASN1.y"
    { SAFE_COPY((yyval.str),sizeof((yyval.str)),"%s",last_token); }
#line 2311 "ASN1.c"
    break;

  case 121:
#line 410 "ASN1.y"
    { SAFE_COPY((yyval.str),sizeof((yyval.str)),"%s",last_token); }
#line 2317 "ASN1.c"
    break;

  case 122:
#line 411 "ASN1.y"
    { SAFE_COPY((yyval.str),sizeof((yyval.str)),"%s",last_token); }
#line 2323 "ASN1.c"
    break;

  case 123:
#line 414 "ASN1.y"
    {
#ifndef FUZZING_BUILD_MODE_UNSAFE_FOR_PRODUCTION
	fprintf(stderr, "%s:%u: Warning: %s is a built-in ASN.1 type.\n", file_name, line_number, (yyvsp[-8].str));
#endif
}
#line 2333 "ASN1.c"
    break;

  case 124:
#line 421 "ASN1.y"
    { (yyval.node)=_asn1_set_name((yyvsp[0].node),(yyvsp[-2].str));}
#line 2339 "ASN1.c"
    break;

  case 125:
#line 425 "ASN1.y"
    {(yyval.node)=_asn1_add_static_node(&e_list, ASN1_ETYPE_OBJECT_ID|CONST_ASSIGN);
                         _asn1_set_name((yyval.node),(yyvsp[-6].str));
                         _asn1_set_down((yyval.node),(yyvsp[-1].node));}
#line 2347 "ASN1.c"
    break;

  case 126:
#line 429 "ASN1.y"
    {(yyval.node)=_asn1_add_static_node(&e_list, ASN1_ETYPE_OBJECT_ID|CONST_ASSIGN|CONST_1_PARAM);
                         _asn1_set_name((yyval.node),(yyvsp[-5].str));
                         _asn1_set_value((yyval.node),(yyvsp[-4].str),strlen((yyvsp[-4].str))+1);
                         _asn1_set_down((yyval.node),(yyvsp[-1].node));}
#line 2356 "ASN1.c"
    break;

  case 127:
#line 434 "ASN1.y"
    {(yyval.node)=_asn1_add_static_node(&e_list, ASN1_ETYPE_INTEGER|CONST_ASSIGN);
                         _asn1_set_name((yyval.node),(yyvsp[-3].str));
                         _asn1_set_value((yyval.node),(yyvsp[0].str),strlen((yyvsp[0].str))+1);}
#line 2364 "ASN1.c"
    break;

  case 128:
#line 439 "ASN1.y"
    {(yyval.node)=(yyvsp[0].node);}
#line 2370 "ASN1.c"
    break;

  case 129:
#line 440 "ASN1.y"
    {(yyval.node)=NULL;}
#line 2376 "ASN1.c"
    break;

  case 130:
#line 441 "ASN1.y"
    {(yyval.node)=(yyvsp[0].node);}
#line 2382 "ASN1.c"
    break;

  case 131:
#line 444 "ASN1.y"
    {(yyval.node)=(yyvsp[0].node);}
#line 2388 "ASN1.c"
    break;

  case 132:
#line 445 "ASN1.y"
    {(yyval.node)=(yyvsp[-1].node);
                                                          if ((yyvsp[-1].node) && (yyvsp[0].node)) _asn1_set_right(_asn1_get_last_right((yyvsp[-1].node)),(yyvsp[0].node));}
#line 2395 "ASN1.c"
    break;

  case 133:
#line 449 "ASN1.y"
    {(yyval.node)=_asn1_add_static_node(&e_list, ASN1_ETYPE_OBJECT_ID);
                                                          _asn1_set_down((yyval.node),(yyvsp[-1].node));
                                                          _asn1_set_name((yyval.node),(yyvsp[-3].str));}
#line 2403 "ASN1.c"
    break;

  case 134:
#line 452 "ASN1.y"
    {(yyval.node)=_asn1_add_static_node(&e_list, ASN1_ETYPE_OBJECT_ID);
                                                          _asn1_set_name((yyval.node),(yyvsp[-2].str));}
#line 2410 "ASN1.c"
    break;

  case 135:
#line 454 "ASN1.y"
    {(yyval.node)=_asn1_add_static_node(&e_list, ASN1_ETYPE_OBJECT_ID);
                                                          _asn1_set_name((yyval.node),(yyvsp[0].str));}
#line 2417 "ASN1.c"
    break;

  case 136:
#line 478 "ASN1.y"
    {(yyval.constant)=CONST_EXPLICIT;}
#line 2423 "ASN1.c"
    break;

  case 137:
#line 479 "ASN1.y"
    {(yyval.constant)=CONST_IMPLICIT;}
#line 2429 "ASN1.c"
    break;


#line 2433 "ASN1.c"

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
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
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
  return yyresult;
}
#line 483 "ASN1.y"




static const char *key_word[] = {
  "::=","OPTIONAL","INTEGER","SIZE","OCTET","STRING",
  "SEQUENCE","BIT","UNIVERSAL","PRIVATE","OPTIONAL",
  "DEFAULT","CHOICE","OF","OBJECT","IDENTIFIER",
  "BOOLEAN","TRUE","FALSE","APPLICATION","ANY","DEFINED",
  "SET","BY","EXPLICIT","IMPLICIT","DEFINITIONS","TAGS",
  "BEGIN","END","UTCTime","GeneralizedTime",
  "GeneralString","FROM","IMPORTS","NULL","ENUMERATED",
  "NumericString", "IA5String", "TeletexString", "PrintableString",
  "UniversalString", "BMPString", "UTF8String", "VisibleString"};

static const int key_word_token[] = {
  ASSIG, OPTIONAL, INTEGER, SIZE, OCTET, STRING, SEQUENCE, BIT, UNIVERSAL,
      PRIVATE, OPTIONAL, DEFAULT, CHOICE, OF, OBJECT, STR_IDENTIFIER,
      BOOLEAN, ASN1_TRUE, ASN1_FALSE, APPLICATION, ANY, DEFINED, SET, BY,
      EXPLICIT, IMPLICIT, DEFINITIONS, TAGS, BEGIN, END, UTCTime,
      GeneralizedTime, GeneralString, FROM, IMPORTS, TOKEN_NULL,
      ENUMERATED, NumericString, IA5String, TeletexString, PrintableString,
      UniversalString, BMPString, UTF8String, VisibleString
};

/*************************************************************/
/*  Function: _asn1_yylex                                    */
/*  Description: looks for tokens in file_asn1 pointer file. */
/*  Return: int                                              */
/*    Token identifier or ASCII code or 0(zero: End Of File) */
/*************************************************************/
static int
_asn1_yylex (void)
{
  int c, counter = 0, k, lastc;
  char string[ASN1_MAX_NAME_SIZE + 1];  /* will contain the next token */
  size_t i;

  while (1)
    {
      while ((c = fgetc (file_asn1)) == ' ' || c == '\t' || c == '\n')
        if (c == '\n')
          line_number++;

      if (c == EOF)
        {
          snprintf (last_token, sizeof(last_token), "End Of File");
          return 0;
        }

      if (c == '(' || c == ')' || c == '[' || c == ']' ||
          c == '{' || c == '}' || c == ',' || c == '.' ||
          c == '+' || c == '|')
        {
          last_token[0] = c;
          last_token[1] = 0;
          return c;
        }
      if (c == '-')
        {                       /* Maybe the first '-' of a comment */
          if ((c = fgetc (file_asn1)) != '-')
            {
              ungetc (c, file_asn1);
              last_token[0] = '-';
              last_token[1] = 0;
              return '-';
            }
          else
            {                   /* Comments */
              lastc = 0;
              counter = 0;
              /* A comment finishes at the next double hypen or the end of line */
              while ((c = fgetc (file_asn1)) != EOF && c != '\n' &&
                     (lastc != '-' || (lastc == '-' && c != '-')))
                lastc = c;
              if (c == EOF)
                {
                  snprintf (last_token, sizeof(last_token), "End Of File");
                  return 0;
                }
              else
                {
                  if (c == '\n')
                    line_number++;
                  continue;     /* next char, please! (repeat the search) */
                }
            }
        }
      string[counter++] = (char) c;
      /* Till the end of the token */
      while (!
             ((c = fgetc (file_asn1)) == EOF || c == ' ' || c == '\t'
              || c == '\n' || c == '(' || c == ')' || c == '[' || c == ']'
              || c == '{' || c == '}' || c == ',' || c == '.'))
        {
          if (counter >= ASN1_MAX_NAME_SIZE)
            {
              result_parse = ASN1_NAME_TOO_LONG;
              return 0;
            }
          string[counter++] = (char) c;
        }
      ungetc (c, file_asn1);
      string[counter] = 0;
      snprintf (last_token, sizeof(last_token), "%s", string);

      /* Is STRING a number? */
      for (k = 0; k < counter; k++)
        if (!c_isdigit ((int)string[k]))
          break;
      if (k >= counter)
        {
          snprintf (yylval.str, sizeof(yylval.str), "%s", string);
          return NUM;           /* return the number */
        }

      /* Is STRING a keyword? */
      for (i = 0; i < (sizeof (key_word) / sizeof (char *)); i++)
        if (!strcmp (string, key_word[i]))
          return key_word_token[i];

      /* STRING is an IDENTIFIER */
      snprintf (yylval.str, sizeof(yylval.str), "%s", string);
      return IDENTIFIER;
    }
}

/*************************************************************/
/*  Function: _asn1_create_errorDescription                  */
/*  Description: creates a string with the description of the*/
/*    error.                                                 */
/*  Parameters:                                              */
/*    error : error to describe.                             */
/*    error_desc: string that will contain the         */
/*                      description.                         */
/*************************************************************/
static void
_asn1_create_errorDescription (int error, char *error_desc)
{
  if (error_desc == NULL)
    return;


  switch (error)
    {
    case ASN1_FILE_NOT_FOUND:
      snprintf(error_desc, ASN1_MAX_ERROR_DESCRIPTION_SIZE, "%s file was not found", file_name);
      break;
    case ASN1_SYNTAX_ERROR:
      snprintf(error_desc, ASN1_MAX_ERROR_DESCRIPTION_SIZE, "%s", last_error);
      break;
    case ASN1_NAME_TOO_LONG:
      snprintf (error_desc, ASN1_MAX_ERROR_DESCRIPTION_SIZE,
                "%s:%u: name too long (more than %u characters)", file_name,
                line_number, (unsigned)ASN1_MAX_NAME_SIZE);
      break;
    case ASN1_IDENTIFIER_NOT_FOUND:
      snprintf (error_desc, ASN1_MAX_ERROR_DESCRIPTION_SIZE,
                "%s:: identifier '%s' not found", file_name,
                _asn1_identifierMissing);
      break;
    default:
      error_desc[0] = 0;
      break;
    }

}

/**
 * asn1_parser2tree:
 * @file: specify the path and the name of file that contains
 *   ASN.1 declarations.
 * @definitions: return the pointer to the structure created from
 *   "file" ASN.1 declarations.
 * @error_desc: return the error description or an empty
 * string if success.
 *
 * Function used to start the parse algorithm.  Creates the structures
 * needed to manage the definitions included in @file file.
 *
 * Returns: %ASN1_SUCCESS if the file has a correct syntax and every
 *   identifier is known, %ASN1_ELEMENT_NOT_EMPTY if @definitions not
 *   %NULL, %ASN1_FILE_NOT_FOUND if an error occurred while
 *   opening @file, %ASN1_SYNTAX_ERROR if the syntax is not
 *   correct, %ASN1_IDENTIFIER_NOT_FOUND if in the file there is an
 *   identifier that is not defined, %ASN1_NAME_TOO_LONG if in the
 *   file there is an identifier with more than %ASN1_MAX_NAME_SIZE
 *   characters.
 **/
int
asn1_parser2tree (const char *file, asn1_node * definitions,
                  char *error_desc)
{
  if (*definitions != NULL)
    {
      result_parse = ASN1_ELEMENT_NOT_EMPTY;
      goto error;
    }

  file_name = file;

  /* open the file to parse */
  file_asn1 = fopen (file, "r");

  if (file_asn1 == NULL)
    {
      result_parse = ASN1_FILE_NOT_FOUND;
      goto error;
    }

  result_parse = ASN1_SUCCESS;

  line_number = 1;
  yyparse ();

  fclose (file_asn1);

  if (result_parse != ASN1_SUCCESS)
    goto error;

  /* set IMPLICIT or EXPLICIT property */
  _asn1_set_default_tag (p_tree);
  /* set CONST_SET and CONST_NOT_USED */
  _asn1_type_set_config (p_tree);
  /* check the identifier definitions */
  result_parse = _asn1_check_identifier (p_tree);
  if (result_parse != ASN1_SUCCESS)
    goto error;

  /* Convert into DER coding the value assign to INTEGER constants */
  _asn1_change_integer_value (p_tree);
  /* Expand the IDs of OBJECT IDENTIFIER constants */
  result_parse = _asn1_expand_object_id (&e_list, p_tree);
  if (result_parse != ASN1_SUCCESS)
    goto error;

  /* success */
  *definitions = p_tree;
  _asn1_delete_list (e_list);
  e_list = NULL;
  p_tree = NULL;
  *error_desc = 0;
  return result_parse;

error:
  _asn1_delete_list_and_nodes (e_list);
  e_list = NULL;
  p_tree = NULL;

  _asn1_create_errorDescription (result_parse, error_desc);

  return result_parse;
}

/**
 * asn1_parser2array:
 * @inputFileName: specify the path and the name of file that
 *   contains ASN.1 declarations.
 * @outputFileName: specify the path and the name of file that will
 *   contain the C vector definition.
 * @vectorName: specify the name of the C vector.
 * @error_desc: return the error description or an empty
 *   string if success.
 *
 * Function that generates a C structure from an ASN1 file.  Creates a
 * file containing a C vector to use to manage the definitions
 * included in @inputFileName file. If @inputFileName is
 * "/aa/bb/xx.yy" and @outputFileName is %NULL, the file created is
 * "/aa/bb/xx_asn1_tab.c".  If @vectorName is %NULL the vector name
 * will be "xx_asn1_tab".
 *
 * Returns: %ASN1_SUCCESS if the file has a correct syntax and every
 *   identifier is known, %ASN1_FILE_NOT_FOUND if an error occurred
 *   while opening @inputFileName, %ASN1_SYNTAX_ERROR if the syntax is
 *   not correct, %ASN1_IDENTIFIER_NOT_FOUND if in the file there is
 *   an identifier that is not defined, %ASN1_NAME_TOO_LONG if in the
 *   file there is an identifier with more than %ASN1_MAX_NAME_SIZE
 *   characters.
 **/
int
asn1_parser2array (const char *inputFileName, const char *outputFileName,
                   const char *vectorName, char *error_desc)
{
  char *file_out_name = NULL;
  char *vector_name = NULL;
  const char *char_p, *slash_p, *dot_p;

  p_tree = NULL;

  file_name = inputFileName;

  /* open the file to parse */
  file_asn1 = fopen (inputFileName, "r");

  if (file_asn1 == NULL)
    {
      result_parse = ASN1_FILE_NOT_FOUND;
      goto error2;
    }

  result_parse = ASN1_SUCCESS;

  line_number = 1;
  yyparse ();

  fclose (file_asn1);
  if (result_parse != ASN1_SUCCESS)
    goto error1;

  /* set IMPLICIT or EXPLICIT property */
  _asn1_set_default_tag (p_tree);
  /* set CONST_SET and CONST_NOT_USED */
  _asn1_type_set_config (p_tree);
  /* check the identifier definitions */
  result_parse = _asn1_check_identifier (p_tree);
  if (result_parse != ASN1_SUCCESS)
    goto error2;

  /* all identifier defined */
  /* searching the last '/' and '.' in inputFileName */
  char_p = inputFileName;
  slash_p = inputFileName;
  while ((char_p = strchr (char_p, '/')))
    {
      char_p++;
      slash_p = char_p;
    }

  char_p = slash_p;
  dot_p = inputFileName + strlen (inputFileName);

  while ((char_p = strchr (char_p, '.')))
    {
      dot_p = char_p;
      char_p++;
    }

  if (outputFileName == NULL)
    {
      /* file_out_name = inputFileName + _asn1_tab.c */
      file_out_name = malloc (dot_p - inputFileName + 1 +
                              sizeof ("_asn1_tab.c")-1);
      memcpy (file_out_name, inputFileName,
              dot_p - inputFileName);
      file_out_name[dot_p - inputFileName] = 0;
      strcat (file_out_name, "_asn1_tab.c");
    }
  else
    {
      /* file_out_name = inputFileName */
      file_out_name = strdup(outputFileName);
    }

  if (vectorName == NULL)
    {
      unsigned len, i;
      /* vector_name = file name + _asn1_tab */
      vector_name = malloc (dot_p - slash_p + 1 +
                            sizeof("_asn1_tab") - 1);
      memcpy (vector_name, slash_p, dot_p - slash_p);
      vector_name[dot_p - slash_p] = 0;
      strcat (vector_name, "_asn1_tab");

      len = strlen(vector_name);
      for (i=0;i<len;i++)
        {
          if (vector_name[i] == '-')
          vector_name[i] = '_';
        }
    }
  else
    {
      /* vector_name = vectorName */
      vector_name = strdup(vectorName);
    }

  /* Save structure in a file */
  _asn1_create_static_structure (p_tree,
                                 file_out_name, vector_name);

  free (file_out_name);
  free (vector_name);

 error1:
  _asn1_delete_list_and_nodes (e_list);
  e_list = NULL;

 error2:
  _asn1_create_errorDescription (result_parse, error_desc);

  return result_parse;
}

/*************************************************************/
/*  Function: _asn1_yyerror                                  */
/*  Description: function called when there are syntax errors*/
/*  Parameters:                                              */
/*    char *s : error description                            */
/*  Return: int                                              */
/*                                                           */
/*************************************************************/
static void
_asn1_yyerror (const char *s)
{
  /* Sends the error description to the std_out */
  last_error_token[0] = 0;

  if (result_parse != ASN1_NAME_TOO_LONG)
    {
      snprintf (last_error, sizeof(last_error),
                "%s:%u: Error: %s near '%s'", file_name,
                line_number, s, last_token);
      result_parse = ASN1_SYNTAX_ERROR;
    }

  return;
}
