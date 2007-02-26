/* generated by Id 1.0 at 2007-02-22 05:40:21 Z */
/* with the command: -I../stage1/ -I. -I../st80 -m idc1.st -o ../stage2/idc1.c */

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <setjmp.h>
#include <string.h>
#include <ctype.h>
#include <fcntl.h>
#include <unistd.h>
#include <time.h>
#include <sys/time.h>
#include <sys/stat.h>
#include <sys/param.h>
#include <assert.h>
#define GC_DLL 1
#include <gc/gc.h>
#if defined(WIN32)
# include <malloc.h>
# include <windows.h>
  typedef HINSTANCE dlhandle_t;
# define dlopen(path, mode)	LoadLibrary(path)
# define dlsym(handle, name)	((void *)GetProcAddress(handle, name))
# define dlclose(handle)	FreeLibrary(handle)
# include <winbase.h>
  inline int gettimeofday(struct timeval *tp, void *tzp)
  {
     union {
       long long ns100;
       FILETIME ft;
     } _now;
     GetSystemTimeAsFileTime(&_now.ft);
     tp->tv_usec= (long)((_now.ns100 / 10LL) % 1000000LL);
     tp->tv_sec= (long)((_now.ns100 - (116444736000000000LL)) / 10000000LL);
     return 0;
   }
#else
# include <dlfcn.h>
  typedef void *dlhandle_t;
#endif
#ifndef O_BINARY
# define O_BINARY 0
#endif

typedef struct t__object *oop;

typedef oop (*_imp_t)(oop _thunk, oop receiver, ...);

struct __closure
{
  _imp_t method;
  oop	 data;
};

static void              *(*_local_param   )(int index)= 0;
static oop  		  (*_local_intern  )(const char *string)= 0;
static oop  		  (*_local_proto   )(oop base)= 0;
static oop  		  (*_local_import  )(const char *name)= 0;
static oop  		  (*_local_export  )(const char *name, oop value)= 0;
static void 		  (*_local_method  )(oop type, oop selector, _imp_t method)= 0;
static oop  		  (*_local_alloc   )(oop type, size_t size)= 0;
static oop  		 *(*_local_palloc  )(size_t size)= 0;
static void  		 *(*_local_balloc  )(size_t size)= 0;
static struct __closure  *(*_local_bind    )(oop selector, oop receiver)= 0;
static oop                (*_local_nlreturn)(oop nlr, oop result)= 0;
static oop                (*_local_nlresult)(void)= 0;
static oop  		    _local_object= 0;
static oop  		   *_local_tag_vtable= 0;
static oop  		   *_local_nil_vtable= 0;
static void               (*_local_gc_addRoots)(char *lo, char *hi)= 0;
static void	          (*_local_gc_unregisterDisappearingLink)(void *ptr)= 0;
static void		  (*_local_gc_generalRegisterDisappearingLink)(void *link, void *ptr)= 0;
static void		  (*_local_gc_gcollect)(void)= 0;

#define _param(INDEX)		_local_param(INDEX)
#define _selector(NAME)		_local_intern(NAME)
#define _proto(BASE)		_local_proto(BASE)
#define _id_import(NAME)	_local_import(NAME)
#define _id_export(NAME, VAL)	_local_export((NAME), (VAL))
#define _method(TYPE, SEL, IMP)	_local_method((TYPE), (SEL), (_imp_t)(IMP))
#define _alloc(RCV, LBS)	_local_alloc((RCV), (LBS))
#define _palloc(LBS)		_local_palloc((LBS))
#define _balloc(LBS)		_local_balloc((LBS))
#define _nlreturn(NLR, ARG)	_local_nlreturn((NLR), (ARG))
#define _nlresult()		_local_nlresult()

#define _send(MSG, RCV, ARG...) ({					\
  register oop _r= (RCV);						\
  struct __closure *_c= (struct __closure *)_local_bind((MSG), _r);	\
  (_c->method)((oop)_c, _r, _r, ##ARG);					\
})

#define _super(TYP, MSG, RCV, ARG...) ({				\
  register oop _r= (RCV);						\
  struct __closure *_c= (struct __closure *)_local_bind((MSG), (TYP));	\
  (_c->method)((oop)_c, _r, _r, ##ARG);					\
})

static oop s_new_5f_= 0;
static oop s_addFirst_= 0;
static oop s_value_5f_= 0;
static oop s__5fimport_= 0;
static oop s_arguments= 0;
static oop s_ifTrue_= 0;
static oop s__2c= 0;
static oop s_size= 0;
static oop s_first= 0;
static oop s_macroFlag_= 0;
static oop s_add_= 0;
static oop s_asString= 0;
static oop s_parse_startingAt_= 0;
static oop s__3c= 0;
static oop s_size_5f_value_5f_= 0;
static oop s_new= 0;
static oop s_compileFile_toFile_withOptions_= 0;
static oop s_outputType_= 0;
static oop s__3e= 0;
static oop s_function_5f_arity_5f_outer_state_nlr_5f_= 0;
static oop s_searchPaths= 0;
static oop s_cacheLevel_= 0;
static oop s_specialFlag_= 0;
static oop s_taggedFlag_= 0;
static oop s_default_= 0;
static oop s_verboseFlag_= 0;
static oop s_executionModel_= 0;
static oop s_function_5f_arity_5f_= 0;
static oop s_error_= 0;
static oop s_at_put_= 0;
static struct _Selector { const char *name; oop *addr; } _Selectors[]= {
  { "new_:", &s_new_5f_ },
  { "addFirst:", &s_addFirst_ },
  { "value_:", &s_value_5f_ },
  { "_import:", &s__5fimport_ },
  { "arguments", &s_arguments },
  { "ifTrue:", &s_ifTrue_ },
  { ",", &s__2c },
  { "size", &s_size },
  { "first", &s_first },
  { "macroFlag:", &s_macroFlag_ },
  { "add:", &s_add_ },
  { "asString", &s_asString },
  { "parse:startingAt:", &s_parse_startingAt_ },
  { "<", &s__3c },
  { "size_:value_:", &s_size_5f_value_5f_ },
  { "new", &s_new },
  { "compileFile:toFile:withOptions:", &s_compileFile_toFile_withOptions_ },
  { "outputType:", &s_outputType_ },
  { ">", &s__3e },
  { "function_:arity_:outer:state:nlr_:", &s_function_5f_arity_5f_outer_state_nlr_5f_ },
  { "searchPaths", &s_searchPaths },
  { "cacheLevel:", &s_cacheLevel_ },
  { "specialFlag:", &s_specialFlag_ },
  { "taggedFlag:", &s_taggedFlag_ },
  { "default:", &s_default_ },
  { "verboseFlag:", &s_verboseFlag_ },
  { "executionModel:", &s_executionModel_ },
  { "function_:arity_:", &s_function_5f_arity_5f_ },
  { "error:", &s_error_ },
  { "at:put:", &s_at_put_ },
  { 0, 0 }
};
struct t__object {
  struct _vtable *_vtable[0];
};
struct t__selector {
  struct _vtable *_vtable[0];
  oop v__size;
  oop v__elements;
};
struct t__assoc {
  struct _vtable *_vtable[0];
  oop v_key;
  oop v_value;
};
struct t__closure {
  struct _vtable *_vtable[0];
  oop v__method;
  oop v_data;
};
struct t__vector {
  struct _vtable *_vtable[0];
  oop v__size;
};
struct t__vtable {
  struct _vtable *_vtable[0];
  oop v__tally;
  oop v_bindings;
  oop v_delegate;
};
struct t_Object {
  struct _vtable *_vtable[0];
};
struct t_UndefinedObject {
  struct _vtable *_vtable[0];
};
struct t_StaticBlockClosure {
  struct _vtable *_vtable[0];
  oop v__function;
  oop v__arity;
};
struct t_BlockClosure {
  struct _vtable *_vtable[0];
  oop v__function;
  oop v__arity;
  oop v_outer;
  oop v_state;
  oop v__nlr;
};
struct t_Magnitude {
  struct _vtable *_vtable[0];
};
struct t_Character {
  struct _vtable *_vtable[0];
  oop v_value;
};
struct t_Number {
  struct _vtable *_vtable[0];
};
struct t_Fraction {
  struct _vtable *_vtable[0];
  oop v_numerator;
  oop v_denominator;
};
struct t_Float {
  struct _vtable *_vtable[0];
};
struct t_Integer {
  struct _vtable *_vtable[0];
};
struct t_SmallInteger {
  struct _vtable *_vtable[0];
};
struct t_LargePositiveInteger {
  struct _vtable *_vtable[0];
  oop v_bytes;
};
struct t_LargeNegativeInteger {
  struct _vtable *_vtable[0];
  oop v_bytes;
};
struct t_Collection {
  struct _vtable *_vtable[0];
};
struct t_SequenceableCollection {
  struct _vtable *_vtable[0];
};
struct t_ArrayedCollection {
  struct _vtable *_vtable[0];
  oop v_size;
};
struct t_Array {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__pointers;
};
struct t_ImmutableArray {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__pointers;
};
struct t_WordArray {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__words;
};
struct t_ImmutableWordArray {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__words;
};
struct t_ByteArray {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__bytes;
};
struct t_ImmutableByteArray {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__bytes;
};
struct t_String {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__bytes;
};
struct t_ImmutableString {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__bytes;
};
struct t_Symbol {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__bytes;
};
struct t_nil {
  struct _vtable *_vtable[0];
};
struct t_true {
  struct _vtable *_vtable[0];
};
struct t_false {
  struct _vtable *_vtable[0];
};
struct t_CharacterTable {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__pointers;
};
struct t_LookupKey {
  struct _vtable *_vtable[0];
  oop v_key;
};
struct t_Association {
  struct _vtable *_vtable[0];
  oop v_key;
  oop v_value;
};
struct t_AVLTreeNode {
  struct _vtable *_vtable[0];
  oop v_left;
  oop v_right;
  oop v_height;
  oop v_value;
};
struct t_AVLTree {
  struct _vtable *_vtable[0];
  oop v_rootNode;
  oop v_orderBlock;
};
struct t_Set {
  struct _vtable *_vtable[0];
  oop v_tally;
  oop v_array;
};
struct t_OrderedCollection {
  struct _vtable *_vtable[0];
  oop v_array;
  oop v_firstIndex;
  oop v_lastIndex;
};
struct t_Dictionary {
  struct _vtable *_vtable[0];
  oop v_tally;
  oop v_array;
};
struct t_IdentitySet {
  struct _vtable *_vtable[0];
  oop v_tally;
  oop v_array;
};
struct t_IdentityDictionary {
  struct _vtable *_vtable[0];
  oop v_tally;
  oop v_array;
};
struct t_Stream {
  struct _vtable *_vtable[0];
};
struct t_PositionableStream {
  struct _vtable *_vtable[0];
  oop v_collection;
  oop v_position;
  oop v_readLimit;
};
struct t_ReadStream {
  struct _vtable *_vtable[0];
  oop v_collection;
  oop v_position;
  oop v_readLimit;
};
struct t_GetOpt {
  struct _vtable *_vtable[0];
  oop v_tally;
  oop v_array;
  oop v_defaultBlock;
};
struct t_Smalltalk {
  struct _vtable *_vtable[0];
  oop v_argumentCount;
  oop v_argumentVector;
};
struct t_SymbolTable {
  struct _vtable *_vtable[0];
  oop v_tally;
  oop v_array;
};
struct t_WriteStream {
  struct _vtable *_vtable[0];
  oop v_collection;
  oop v_position;
  oop v_readLimit;
  oop v_writeLimit;
};
struct t_SelectorTable {
  struct _vtable *_vtable[0];
  oop v_tally;
  oop v_array;
};
struct t_PerformWithArgumentsSelectors {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__pointers;
};
struct t_EncodedVariableNode {
  struct _vtable *_vtable[0];
  oop v_name;
  oop v_position;
  oop v_scope;
  oop v_offset;
};
struct t_LocalVariableNode {
  struct _vtable *_vtable[0];
  oop v_name;
  oop v_position;
  oop v_scope;
  oop v_offset;
  oop v_index;
};
struct t_ArgumentVariableNode {
  struct _vtable *_vtable[0];
  oop v_name;
  oop v_position;
  oop v_scope;
  oop v_offset;
  oop v_index;
  oop v_tied;
};
struct t_ParseNode {
  struct _vtable *_vtable[0];
  oop v_position;
  oop v_location;
};
struct t_LiteralNode {
  struct _vtable *_vtable[0];
  oop v_position;
  oop v_location;
  oop v_value;
  oop v_tag;
  oop v_constructor;
};
struct t_ArrayLiteralNode {
  struct _vtable *_vtable[0];
  oop v_position;
  oop v_location;
  oop v_value;
  oop v_tag;
  oop v_constructor;
};
struct t_ArrayNode {
  struct _vtable *_vtable[0];
  oop v_position;
  oop v_location;
  oop v_value;
  oop v_tag;
  oop v_constructor;
};
struct t_AssignmentNode {
  struct _vtable *_vtable[0];
  oop v_position;
  oop v_location;
  oop v_value;
  oop v_variable;
};
struct t_SequenceNode {
  struct _vtable *_vtable[0];
  oop v_position;
  oop v_location;
  oop v_temporaries;
  oop v_statements;
  oop v_scope;
  oop v_literals;
  oop v_blocks;
};
struct t_VariableNode {
  struct _vtable *_vtable[0];
  oop v_position;
  oop v_location;
  oop v_name;
  oop v_variable;
  oop v_level;
};
struct t_ReturnNode {
  struct _vtable *_vtable[0];
  oop v_position;
  oop v_location;
  oop v_value;
  oop v_nonLocal;
};
struct t_LocalReturnNode {
  struct _vtable *_vtable[0];
  oop v_position;
  oop v_location;
  oop v_value;
  oop v_nonLocal;
};
struct t_BlockNode {
  struct _vtable *_vtable[0];
  oop v_position;
  oop v_location;
  oop v_temporaries;
  oop v_statements;
  oop v_scope;
  oop v_literals;
  oop v_blocks;
  oop v_arguments;
  oop v_tag;
  oop v_constructor;
  oop v_stateConstructor;
};
struct t_ByteArrayNode {
  struct _vtable *_vtable[0];
  oop v_position;
  oop v_location;
  oop v_value;
  oop v_tag;
  oop v_constructor;
};
struct t_SlotVariableNode {
  struct _vtable *_vtable[0];
  oop v_name;
  oop v_position;
  oop v_scope;
  oop v_receiver;
  oop v_type;
};
struct t_TemporaryVariableNode {
  struct _vtable *_vtable[0];
  oop v_name;
  oop v_position;
  oop v_scope;
  oop v_offset;
  oop v_index;
};
struct t_Scope {
  struct _vtable *_vtable[0];
  oop v_tally;
  oop v_array;
  oop v_argumentCount;
  oop v_temporaryCount;
  oop v_stackSize;
  oop v_outer;
  oop v_blocks;
  oop v_tag;
  oop v_level;
  oop v_lastOffset;
  oop v_encodings;
  oop v_exportFlag;
  oop v_importFlag;
  oop v_nlrFlag;
};
struct t_IntegerNode {
  struct _vtable *_vtable[0];
  oop v_position;
  oop v_location;
  oop v_value;
  oop v_tag;
  oop v_constructor;
};
struct t_SendNode {
  struct _vtable *_vtable[0];
  oop v_position;
  oop v_location;
  oop v_receiver;
  oop v_selector;
  oop v_arguments;
  oop v_cascades;
  oop v_superedType;
  oop v_specialGenerator;
};
struct t_GlobalVariableNode {
  struct _vtable *_vtable[0];
  oop v_name;
  oop v_position;
  oop v_scope;
  oop v_offset;
};
struct t_Encoder {
  struct _vtable *_vtable[0];
  oop v_globalContext;
  oop v_globals;
  oop v_scope;
  oop v_tempCount;
  oop v_tempMax;
  oop v_outerCount;
  oop v_selectors;
  oop v_literals;
  oop v_literalMap;
  oop v_literalTag;
  oop v_methodType;
  oop v_specialEncoders;
  oop v_implementations;
};
struct t_NameManglingTable {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__pointers;
};
struct t_CodeGenerator {
  struct _vtable *_vtable[0];
  oop v_compiler;
  oop v_encoder;
  oop v_nextLabel;
};
struct t_CCodeGenerator {
  struct _vtable *_vtable[0];
  oop v_compiler;
  oop v_encoder;
  oop v_nextLabel;
  oop v_output;
};
struct t_CManagedCodeGenerator {
  struct _vtable *_vtable[0];
  oop v_compiler;
  oop v_encoder;
  oop v_nextLabel;
  oop v_output;
};
struct t_CharacterNode {
  struct _vtable *_vtable[0];
  oop v_position;
  oop v_location;
  oop v_value;
  oop v_tag;
  oop v_constructor;
};
struct t_ImportNode {
  struct _vtable *_vtable[0];
  oop v_position;
  oop v_location;
  oop v_name;
};
struct t_ScannerPosition {
  struct _vtable *_vtable[0];
  oop v_file;
  oop v_line;
};
struct t_Scanner {
  struct _vtable *_vtable[0];
  oop v_charTable;
  oop v_charEscapes;
  oop v_context;
  oop v_c;
  oop v_token;
  oop v_type;
  oop v_prevHash;
  oop v_line;
};
struct t_WordArrayNode {
  struct _vtable *_vtable[0];
  oop v_position;
  oop v_location;
  oop v_value;
  oop v_tag;
  oop v_constructor;
};
struct t_SymbolNode {
  struct _vtable *_vtable[0];
  oop v_position;
  oop v_location;
  oop v_value;
  oop v_tag;
  oop v_constructor;
};
struct t_StringNode {
  struct _vtable *_vtable[0];
  oop v_position;
  oop v_location;
  oop v_value;
  oop v_tag;
  oop v_constructor;
};
struct t_FloatNode {
  struct _vtable *_vtable[0];
  oop v_position;
  oop v_location;
  oop v_value;
  oop v_tag;
  oop v_constructor;
};
struct t_MethodNode {
  struct _vtable *_vtable[0];
  oop v_position;
  oop v_location;
  oop v_temporaries;
  oop v_statements;
  oop v_scope;
  oop v_literals;
  oop v_blocks;
  oop v_arguments;
  oop v_tag;
  oop v_constructor;
  oop v_stateConstructor;
  oop v_type;
  oop v_selector;
  oop v_sequenceNumber;
  oop v_variadic;
};
struct t_ExecNode {
  struct _vtable *_vtable[0];
  oop v_position;
  oop v_location;
  oop v_temporaries;
  oop v_statements;
  oop v_scope;
  oop v_literals;
  oop v_blocks;
  oop v_stateConstructor;
};
struct t_IncludeNode {
  struct _vtable *_vtable[0];
  oop v_position;
  oop v_location;
  oop v_name;
};
struct t_ExternNode {
  struct _vtable *_vtable[0];
  oop v_position;
  oop v_location;
  oop v_code;
};
struct t_PrimitiveNode {
  struct _vtable *_vtable[0];
  oop v_position;
  oop v_location;
  oop v_code;
  oop v_mtype;
};
struct t_PrototypeNode {
  struct _vtable *_vtable[0];
  oop v_position;
  oop v_location;
  oop v_name;
  oop v_base;
  oop v_slots;
  oop v_used;
  oop v_external;
};
struct t_DefinitionNode {
  struct _vtable *_vtable[0];
  oop v_position;
  oop v_location;
  oop v_name;
  oop v_exec;
  oop v_used;
  oop v_external;
};
struct t_Parser {
  struct _vtable *_vtable[0];
  oop v_charTable;
  oop v_charEscapes;
  oop v_context;
  oop v_c;
  oop v_token;
  oop v_type;
  oop v_prevHash;
  oop v_line;
  oop v_client;
};
struct t_ScannerContext {
  struct _vtable *_vtable[0];
  oop v_file;
  oop v_line;
  oop v_stream;
};
struct t_Compiler {
  struct _vtable *_vtable[0];
  oop v_parser;
  oop v_options;
  oop v_including;
  oop v_program;
  oop v_types;
  oop v_sources;
  oop v_imports;
  oop v_externalFlags;
  oop v_intrinsicTypes;
};
struct t_CompilerOptions {
  struct _vtable *_vtable[0];
  oop v_searchPaths;
  oop v_outputType;
  oop v_verboseFlag;
  oop v_macroFlag;
  oop v_specialFlag;
  oop v_taggedFlag;
  oop v_cacheLevel;
  oop v_executionModel;
};
static oop l_1= 0;
static oop l_3= 0;
static oop l_5= 0;
static oop l_7= 0;
static oop l_9= 0;
static oop l_11= 0;
static oop l_13= 0;
static oop l_15= 0;
static oop l_17= 0;
static oop l_19= 0;
static oop l_21= 0;
static oop l_23= 0;
static oop l_26= 0;
static oop l_27= 0;
static oop l_28= 0;
static oop l_29= 0;
static oop l_30= 0;
static oop l_31= 0;
static oop l_32= 0;
static oop l_33= 0;
static oop l_24= 0;
static oop v__object= 0;
static oop v__vector= 0;
static oop v_Object= 0;
static oop v_UndefinedObject= 0;
static oop v_StaticBlockClosure= 0;
static oop v_BlockClosure= 0;
static oop v_Magnitude= 0;
static oop v_Character= 0;
static oop v_Number= 0;
static oop v_Integer= 0;
static oop v_SmallInteger= 0;
static oop v_LargePositiveInteger= 0;
static oop v_Collection= 0;
static oop v_SequenceableCollection= 0;
static oop v_ArrayedCollection= 0;
static oop v_Array= 0;
static oop v_WordArray= 0;
static oop v_ByteArray= 0;
static oop v_String= 0;
static oop v_ImmutableString= 0;
static oop v_Symbol= 0;
static oop v_nil= 0;
static oop v_true= 0;
static oop v_false= 0;
static oop v_LookupKey= 0;
static oop v_Set= 0;
static oop v_OrderedCollection= 0;
static oop v_Dictionary= 0;
static oop v_IdentityDictionary= 0;
static oop v_Stream= 0;
static oop v_PositionableStream= 0;
static oop v_GetOpt= 0;
static oop v_Smalltalk= 0;
static oop v_EncodedVariableNode= 0;
static oop v_LocalVariableNode= 0;
static oop v_ParseNode= 0;
static oop v_LiteralNode= 0;
static oop v_ArrayLiteralNode= 0;
static oop v_SequenceNode= 0;
static oop v_ReturnNode= 0;
static oop v_BlockNode= 0;
static oop v_CodeGenerator= 0;
static oop v_Scanner= 0;
static oop v_Compiler= 0;
static oop v_CompilerOptions= 0;
static oop b_2(oop v__closure, oop v__self, oop v_opt)
 {
  oop _1= 0;
  oop _2= 0;
  _1= ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[1];  /* options */
  _2= l_30;
  _1=_send(s_outputType_, _1, _2);
  return _1;
 }
static oop b_4(oop v__closure, oop v__self, oop v_opt, oop v_arg)
 {
  oop _1= 0;
  oop _2= 0;
  _1= ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[1];  /* options */
  _1=_send(s_searchPaths, _1);
  _2= v_arg;
  _1=_send(s_addFirst_, _1, _2);
  return _1;
 }
static oop b_6(oop v__closure, oop v__self, oop v_opt)
 {
  oop _1= 0;
  oop _2= 0;
  _1= ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[1];  /* options */
  _2= l_31;
  _1=_send(s_outputType_, _1, _2);
  return _1;
 }
static oop b_8(oop v__closure, oop v__self, oop v_opt)
 {
  oop _1= 0;
  oop _2= 0;
  _1= ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[1];  /* options */
  _2= v_false;
  _1=_send(s_macroFlag_, _1, _2);
  return _1;
 }
static oop b_10(oop v__closure, oop v__self, oop v_opt, oop v_arg)
 {
  oop _1= 0;
  oop _2= 0;
  _1= ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[1];  /* options */
  _2= v_arg;
  _1=_send(s_cacheLevel_, _1, _2);
  return _1;
 }
static oop b_12(oop v__closure, oop v__self, oop v_opt, oop v_arg)
 {
  oop _1= 0;
  _1= v_arg;
  ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[2]= _1;  /* outputPath */
  return _1;
 }
static oop b_14(oop v__closure, oop v__self, oop v_opt)
 {
  oop _1= 0;
  oop _2= 0;
  _1= ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[1];  /* options */
  _2= l_32;
  _1=_send(s_outputType_, _1, _2);
  return _1;
 }
static oop b_16(oop v__closure, oop v__self, oop v_opt)
 {
  oop _1= 0;
  oop _2= 0;
  _1= ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[1];  /* options */
  _2= v_false;
  _1=_send(s_specialFlag_, _1, _2);
  return _1;
 }
static oop b_18(oop v__closure, oop v__self, oop v_opt)
 {
  oop _1= 0;
  oop _2= 0;
  _1= ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[1];  /* options */
  _2= v_false;
  _1=_send(s_taggedFlag_, _1, _2);
  return _1;
 }
static oop b_20(oop v__closure, oop v__self, oop v_opt)
 {
  oop _1= 0;
  oop _2= 0;
  _1= ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[1];  /* options */
  _2= v_true;
  _1=_send(s_verboseFlag_, _1, _2);
  return _1;
 }
static oop b_22(oop v__closure, oop v__self, oop v_opt, oop v_arg)
 {
  oop _1= 0;
  oop _2= 0;
  _1= ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[1];  /* options */
  _2= v_arg;
  _1=_send(s_executionModel_, _1, _2);
  return _1;
 }
static oop b_24(oop v__closure, oop v__self, oop v_opt)
 {
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  _1= v_Compiler;
  _2= l_33;
  _3= v_opt;
  _3=_send(s_asString, _3);
  _2=_send(s__2c, _2, _3);
  _1=_send(s_error_, _1, _2);
  return _1;
 }
static oop b_25(oop v__closure, oop v__self, oop v_arg)
 {
  oop _1= 0;
  oop _2= 0;
  _1= ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[3];  /* files */
  _2= v_arg;
  _1=_send(s_add_, _1, _2);
  return _1;
 }

void __id__init__(void)
{
  if (_local_object) return;
  { 
    dlhandle_t global= dlopen(0, RTLD_LAZY);
    _local_object= *(oop *)dlsym(global, "_libid_object");
    _local_param= dlsym(global, "_libid_param");
    _local_intern= dlsym(global, "_libid_intern");
    _local_proto= dlsym(global, "_libid_proto");
    _local_import= dlsym(global, "_libid_import");
    _local_export= dlsym(global, "_libid_export");
    _local_method= dlsym(global, "_libid_method");
    _local_alloc= dlsym(global, "_libid_alloc");
    _local_palloc= dlsym(global, "_libid_palloc");
    _local_balloc= dlsym(global, "_libid_balloc");
    _local_bind= dlsym(global, "_libid_bind");
    _local_nlreturn= dlsym(global, "_libid_nlreturn");
    _local_nlresult= dlsym(global, "_libid_nlresult");
    _local_tag_vtable= dlsym(global, "_libid_tag_vtable");
    _local_nil_vtable= dlsym(global, "_libid_nil_vtable");
    _local_gc_addRoots= dlsym(global, "GC_add_roots");
    _local_gc_unregisterDisappearingLink= dlsym(global, "GC_unregister_disappearing_link");
    _local_gc_generalRegisterDisappearingLink= dlsym(global, "GC_general_register_disappearing_link");
    _local_gc_gcollect= dlsym(global, "GC_gcollect");
    dlclose(global);
  }
  {
    struct _Selector *s= 0;
    for (s= _Selectors;  s->name;  ++s)
      *s->addr= _selector(s->name);
  }

  _send(s__5fimport_, _local_object, "st80", "__id__init__st80");
  _send(s__5fimport_, _local_object, "Array", "__id__init__Array");
  _send(s__5fimport_, _local_object, "ArrayedCollection", "__id__init__ArrayedCollection");
  _send(s__5fimport_, _local_object, "SequenceableCollection", "__id__init__SequenceableCollection");
  _send(s__5fimport_, _local_object, "Collection", "__id__init__Collection");
  _send(s__5fimport_, _local_object, "Object", "__id__init__Object");
  _send(s__5fimport_, _local_object, "_object", "__id__init___5fobject");
  v__object= _id_import("_object");
  v__vector= _id_import("_vector");
  v_Object= _id_import("Object");
  v_UndefinedObject= _id_import("UndefinedObject");
  v_StaticBlockClosure= _id_import("StaticBlockClosure");
  v_BlockClosure= _id_import("BlockClosure");
  v_Magnitude= _id_import("Magnitude");
  v_Character= _id_import("Character");
  v_Number= _id_import("Number");
  v_Integer= _id_import("Integer");
  v_SmallInteger= _id_import("SmallInteger");
  v_LargePositiveInteger= _id_import("LargePositiveInteger");
  v_Collection= _id_import("Collection");
  v_SequenceableCollection= _id_import("SequenceableCollection");
  v_ArrayedCollection= _id_import("ArrayedCollection");
  v_Array= _id_import("Array");
  v_WordArray= _id_import("WordArray");
  v_ByteArray= _id_import("ByteArray");
  v_String= _id_import("String");
  v_ImmutableString= _id_import("ImmutableString");
  v_Symbol= _id_import("Symbol");
  v_nil= _id_import("nil");
  v_true= _id_import("true");
  v_false= _id_import("false");
  _send(s__5fimport_, _local_object, "BlockClosure", "__id__init__BlockClosure");
  _send(s__5fimport_, _local_object, "SmallInteger", "__id__init__SmallInteger");
  _send(s__5fimport_, _local_object, "Integer", "__id__init__Integer");
  _send(s__5fimport_, _local_object, "Number", "__id__init__Number");
  _send(s__5fimport_, _local_object, "Magnitude", "__id__init__Magnitude");
  _send(s__5fimport_, _local_object, "Character", "__id__init__Character");
  _send(s__5fimport_, _local_object, "String", "__id__init__String");
  _send(s__5fimport_, _local_object, "ByteArray", "__id__init__ByteArray");
  _send(s__5fimport_, _local_object, "WordArray", "__id__init__WordArray");
  _send(s__5fimport_, _local_object, "Association", "__id__init__Association");
  _send(s__5fimport_, _local_object, "LookupKey", "__id__init__LookupKey");
  v_LookupKey= _id_import("LookupKey");
  _send(s__5fimport_, _local_object, "AVLTree", "__id__init__AVLTree");
  _send(s__5fimport_, _local_object, "Dictionary", "__id__init__Dictionary");
  _send(s__5fimport_, _local_object, "Set", "__id__init__Set");
  v_Set= _id_import("Set");
  _send(s__5fimport_, _local_object, "OrderedCollection", "__id__init__OrderedCollection");
  v_OrderedCollection= _id_import("OrderedCollection");
  v_Dictionary= _id_import("Dictionary");
  _send(s__5fimport_, _local_object, "Float", "__id__init__Float");
  _send(s__5fimport_, _local_object, "GetOpt", "__id__init__GetOpt");
  _send(s__5fimport_, _local_object, "IdentityDictionary", "__id__init__IdentityDictionary");
  _send(s__5fimport_, _local_object, "IdentitySet", "__id__init__IdentitySet");
  v_IdentityDictionary= _id_import("IdentityDictionary");
  _send(s__5fimport_, _local_object, "ReadStream", "__id__init__ReadStream");
  _send(s__5fimport_, _local_object, "PositionableStream", "__id__init__PositionableStream");
  _send(s__5fimport_, _local_object, "Stream", "__id__init__Stream");
  v_Stream= _id_import("Stream");
  v_PositionableStream= _id_import("PositionableStream");
  v_GetOpt= _id_import("GetOpt");
  _send(s__5fimport_, _local_object, "LargeInteger", "__id__init__LargeInteger");
  _send(s__5fimport_, _local_object, "LargePositiveInteger", "__id__init__LargePositiveInteger");
  _send(s__5fimport_, _local_object, "LargeNegativeInteger", "__id__init__LargeNegativeInteger");
  _send(s__5fimport_, _local_object, "Smalltalk", "__id__init__Smalltalk");
  v_Smalltalk= _id_import("Smalltalk");
  _send(s__5fimport_, _local_object, "Symbol", "__id__init__Symbol");
  _send(s__5fimport_, _local_object, "WriteStream", "__id__init__WriteStream");
  _send(s__5fimport_, _local_object, "perform", "__id__init__perform");
  _send(s__5fimport_, _local_object, "tokenization", "__id__init__tokenization");
  _send(s__5fimport_, _local_object, "idst", "__id__init__idst");
  _send(s__5fimport_, _local_object, "ArgumentVariableNode", "__id__init__ArgumentVariableNode");
  _send(s__5fimport_, _local_object, "LocalVariableNode", "__id__init__LocalVariableNode");
  _send(s__5fimport_, _local_object, "EncodedVariableNode", "__id__init__EncodedVariableNode");
  v_EncodedVariableNode= _id_import("EncodedVariableNode");
  v_LocalVariableNode= _id_import("LocalVariableNode");
  _send(s__5fimport_, _local_object, "ArrayLiteralNode", "__id__init__ArrayLiteralNode");
  _send(s__5fimport_, _local_object, "LiteralNode", "__id__init__LiteralNode");
  _send(s__5fimport_, _local_object, "ParseNode", "__id__init__ParseNode");
  v_ParseNode= _id_import("ParseNode");
  v_LiteralNode= _id_import("LiteralNode");
  v_ArrayLiteralNode= _id_import("ArrayLiteralNode");
  _send(s__5fimport_, _local_object, "ArrayNode", "__id__init__ArrayNode");
  _send(s__5fimport_, _local_object, "AssignmentNode", "__id__init__AssignmentNode");
  _send(s__5fimport_, _local_object, "BlockNode", "__id__init__BlockNode");
  _send(s__5fimport_, _local_object, "SequenceNode", "__id__init__SequenceNode");
  v_SequenceNode= _id_import("SequenceNode");
  _send(s__5fimport_, _local_object, "VariableNode", "__id__init__VariableNode");
  _send(s__5fimport_, _local_object, "ReturnNode", "__id__init__ReturnNode");
  v_ReturnNode= _id_import("ReturnNode");
  v_BlockNode= _id_import("BlockNode");
  _send(s__5fimport_, _local_object, "ByteArrayNode", "__id__init__ByteArrayNode");
  _send(s__5fimport_, _local_object, "CCodeGenerator", "__id__init__CCodeGenerator");
  _send(s__5fimport_, _local_object, "CodeGenerator", "__id__init__CodeGenerator");
  _send(s__5fimport_, _local_object, "Encoder", "__id__init__Encoder");
  _send(s__5fimport_, _local_object, "Scope", "__id__init__Scope");
  _send(s__5fimport_, _local_object, "SlotVariableNode", "__id__init__SlotVariableNode");
  _send(s__5fimport_, _local_object, "TemporaryVariableNode", "__id__init__TemporaryVariableNode");
  _send(s__5fimport_, _local_object, "SendNode", "__id__init__SendNode");
  _send(s__5fimport_, _local_object, "IntegerNode", "__id__init__IntegerNode");
  _send(s__5fimport_, _local_object, "GlobalVariableNode", "__id__init__GlobalVariableNode");
  v_CodeGenerator= _id_import("CodeGenerator");
  _send(s__5fimport_, _local_object, "CManagedCodeGenerator", "__id__init__CManagedCodeGenerator");
  _send(s__5fimport_, _local_object, "CharacterNode", "__id__init__CharacterNode");
  _send(s__5fimport_, _local_object, "Compiler", "__id__init__Compiler");
  _send(s__5fimport_, _local_object, "ImportNode", "__id__init__ImportNode");
  _send(s__5fimport_, _local_object, "Parser", "__id__init__Parser");
  _send(s__5fimport_, _local_object, "Scanner", "__id__init__Scanner");
  _send(s__5fimport_, _local_object, "ScannerPosition", "__id__init__ScannerPosition");
  v_Scanner= _id_import("Scanner");
  _send(s__5fimport_, _local_object, "WordArrayNode", "__id__init__WordArrayNode");
  _send(s__5fimport_, _local_object, "SymbolNode", "__id__init__SymbolNode");
  _send(s__5fimport_, _local_object, "StringNode", "__id__init__StringNode");
  _send(s__5fimport_, _local_object, "FloatNode", "__id__init__FloatNode");
  _send(s__5fimport_, _local_object, "MethodNode", "__id__init__MethodNode");
  _send(s__5fimport_, _local_object, "ExecNode", "__id__init__ExecNode");
  _send(s__5fimport_, _local_object, "IncludeNode", "__id__init__IncludeNode");
  _send(s__5fimport_, _local_object, "ExternNode", "__id__init__ExternNode");
  _send(s__5fimport_, _local_object, "PrimitiveNode", "__id__init__PrimitiveNode");
  _send(s__5fimport_, _local_object, "PrototypeNode", "__id__init__PrototypeNode");
  _send(s__5fimport_, _local_object, "DefinitionNode", "__id__init__DefinitionNode");
  _send(s__5fimport_, _local_object, "ScannerContext", "__id__init__ScannerContext");
  _send(s__5fimport_, _local_object, "StringIO", "__id__init__StringIO");
  v_Compiler= _id_import("Compiler");
  _send(s__5fimport_, _local_object, "CompilerOptions", "__id__init__CompilerOptions");
  v_CompilerOptions= _id_import("CompilerOptions");
  l_1= _send(s_value_5f_, v_Character, 99);
  l_3= _send(s_value_5f_, v_Character, 73);
  l_5= _send(s_value_5f_, v_Character, 109);
  l_7= _send(s_value_5f_, v_Character, 77);
  l_9= _send(s_value_5f_, v_Character, 78);
  l_11= _send(s_value_5f_, v_Character, 111);
  l_13= _send(s_value_5f_, v_Character, 115);
  l_15= _send(s_value_5f_, v_Character, 83);
  l_17= _send(s_value_5f_, v_Character, 84);
  l_19= _send(s_value_5f_, v_Character, 118);
  l_21= _send(s_value_5f_, v_Character, 120);
  l_23= _send(s_value_5f_, v_Character, 63);
  l_26= _send(s_value_5f_, v_SmallInteger, 0);
  l_27= _send(s_value_5f_, v_SmallInteger, 1);
  l_28= _send(s_size_5f_value_5f_, v_ImmutableString, 24, "no source file specified");
  l_29= _send(s_size_5f_value_5f_, v_ImmutableString, 31, "multiple source files specified");
  l_30= _send(s_size_5f_value_5f_, v_Symbol, 6, "object");
  l_31= _send(s_size_5f_value_5f_, v_Symbol, 7, "program");
  l_32= _send(s_size_5f_value_5f_, v_Symbol, 6, "shared");
  l_33= _send(s_size_5f_value_5f_, v_ImmutableString, 17, "illegal option: -");
  l_24= _send(s_function_5f_arity_5f_, v_StaticBlockClosure, b_24, 1);
 {
  oop _state1= _send(s_new_5f_, v__vector, 4);
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  oop _4= 0;
  _1= v_OrderedCollection;
  _1=_send(s_new, _1);
  ((oop *)_state1)[3]= _1;  /* files */
  _1= v_CompilerOptions;
  _1=_send(s_new, _1);
  ((oop *)_state1)[1]= _1;  /* options */
  _1= v_nil;
  ((oop *)_state1)[2]= _1;  /* outputPath */
  _1= v_GetOpt;
  _1=_send(s_new, _1);
  _2= l_1;
  /* Scope('opt'->ArgumentVariableNode) */
  /* Scope('outputPath'->TemporaryVariableNode 'files'->TemporaryVariableNode 'options'->TemporaryVariableNode) */
  /* nil */
  /* 2 */
  /* 1 */
  _3= _send(s_function_5f_arity_5f_outer_state_nlr_5f_, v_BlockClosure, (oop)b_2, 1, 0, ((oop *)_state1), 0);
  _send(s_at_put_, _1, _2, _3);
  _2= l_3;
  /* Scope('opt'->ArgumentVariableNode 'arg'->ArgumentVariableNode) */
  /* Scope('outputPath'->TemporaryVariableNode 'files'->TemporaryVariableNode 'options'->TemporaryVariableNode) */
  /* nil */
  /* 2 */
  /* 1 */
  _3= _send(s_function_5f_arity_5f_outer_state_nlr_5f_, v_BlockClosure, (oop)b_4, 2, 0, ((oop *)_state1), 0);
  _send(s_at_put_, _1, _2, _3);
  _2= l_5;
  /* Scope('opt'->ArgumentVariableNode) */
  /* Scope('outputPath'->TemporaryVariableNode 'files'->TemporaryVariableNode 'options'->TemporaryVariableNode) */
  /* nil */
  /* 2 */
  /* 1 */
  _3= _send(s_function_5f_arity_5f_outer_state_nlr_5f_, v_BlockClosure, (oop)b_6, 1, 0, ((oop *)_state1), 0);
  _send(s_at_put_, _1, _2, _3);
  _2= l_7;
  /* Scope('opt'->ArgumentVariableNode) */
  /* Scope('outputPath'->TemporaryVariableNode 'files'->TemporaryVariableNode 'options'->TemporaryVariableNode) */
  /* nil */
  /* 2 */
  /* 1 */
  _3= _send(s_function_5f_arity_5f_outer_state_nlr_5f_, v_BlockClosure, (oop)b_8, 1, 0, ((oop *)_state1), 0);
  _send(s_at_put_, _1, _2, _3);
  _2= l_9;
  /* Scope('opt'->ArgumentVariableNode 'arg'->ArgumentVariableNode) */
  /* Scope('outputPath'->TemporaryVariableNode 'files'->TemporaryVariableNode 'options'->TemporaryVariableNode) */
  /* nil */
  /* 2 */
  /* 1 */
  _3= _send(s_function_5f_arity_5f_outer_state_nlr_5f_, v_BlockClosure, (oop)b_10, 2, 0, ((oop *)_state1), 0);
  _send(s_at_put_, _1, _2, _3);
  _2= l_11;
  /* Scope('opt'->ArgumentVariableNode 'arg'->ArgumentVariableNode) */
  /* Scope('outputPath'->TemporaryVariableNode 'files'->TemporaryVariableNode 'options'->TemporaryVariableNode) */
  /* nil */
  /* 2 */
  /* 1 */
  _3= _send(s_function_5f_arity_5f_outer_state_nlr_5f_, v_BlockClosure, (oop)b_12, 2, 0, ((oop *)_state1), 0);
  _send(s_at_put_, _1, _2, _3);
  _2= l_13;
  /* Scope('opt'->ArgumentVariableNode) */
  /* Scope('outputPath'->TemporaryVariableNode 'files'->TemporaryVariableNode 'options'->TemporaryVariableNode) */
  /* nil */
  /* 2 */
  /* 1 */
  _3= _send(s_function_5f_arity_5f_outer_state_nlr_5f_, v_BlockClosure, (oop)b_14, 1, 0, ((oop *)_state1), 0);
  _send(s_at_put_, _1, _2, _3);
  _2= l_15;
  /* Scope('opt'->ArgumentVariableNode) */
  /* Scope('outputPath'->TemporaryVariableNode 'files'->TemporaryVariableNode 'options'->TemporaryVariableNode) */
  /* nil */
  /* 2 */
  /* 1 */
  _3= _send(s_function_5f_arity_5f_outer_state_nlr_5f_, v_BlockClosure, (oop)b_16, 1, 0, ((oop *)_state1), 0);
  _send(s_at_put_, _1, _2, _3);
  _2= l_17;
  /* Scope('opt'->ArgumentVariableNode) */
  /* Scope('outputPath'->TemporaryVariableNode 'files'->TemporaryVariableNode 'options'->TemporaryVariableNode) */
  /* nil */
  /* 2 */
  /* 1 */
  _3= _send(s_function_5f_arity_5f_outer_state_nlr_5f_, v_BlockClosure, (oop)b_18, 1, 0, ((oop *)_state1), 0);
  _send(s_at_put_, _1, _2, _3);
  _2= l_19;
  /* Scope('opt'->ArgumentVariableNode) */
  /* Scope('outputPath'->TemporaryVariableNode 'files'->TemporaryVariableNode 'options'->TemporaryVariableNode) */
  /* nil */
  /* 2 */
  /* 1 */
  _3= _send(s_function_5f_arity_5f_outer_state_nlr_5f_, v_BlockClosure, (oop)b_20, 1, 0, ((oop *)_state1), 0);
  _send(s_at_put_, _1, _2, _3);
  _2= l_21;
  /* Scope('opt'->ArgumentVariableNode 'arg'->ArgumentVariableNode) */
  /* Scope('outputPath'->TemporaryVariableNode 'files'->TemporaryVariableNode 'options'->TemporaryVariableNode) */
  /* nil */
  /* 2 */
  /* 1 */
  _3= _send(s_function_5f_arity_5f_outer_state_nlr_5f_, v_BlockClosure, (oop)b_22, 2, 0, ((oop *)_state1), 0);
  _send(s_at_put_, _1, _2, _3);
  _2= l_23;
  _3= l_24;
  _send(s_at_put_, _1, _2, _3);
  /* Scope('arg'->ArgumentVariableNode) */
  /* Scope('outputPath'->TemporaryVariableNode 'files'->TemporaryVariableNode 'options'->TemporaryVariableNode) */
  /* nil */
  /* 2 */
  /* 1 */
  _2= _send(s_function_5f_arity_5f_outer_state_nlr_5f_, v_BlockClosure, (oop)b_25, 1, 0, ((oop *)_state1), 0);
  _send(s_default_, _1, _2);
  _2= v_Smalltalk;
  _2=_send(s_arguments, _2);
  _3= l_26;
  _1=_send(s_parse_startingAt_, _1, _2, _3);
  /* ifTrue: */
  _1= 0;
  _2= ((oop *)_state1)[3];  /* files */
  _2=_send(s_size, _2);
  _3= l_27;
  if (1 & (int)_2) {
    _2= (((int)_2 < (int)_3) ? v_true : v_false);
  } else _2= _send(s__3c, _2, _3);
  if (!_2) goto _l1;
 {
  _1= v_Compiler;
  _2= l_28;
  _1=_send(s_error_, _1, _2);
 }
 _l1:;
  /* ifTrue: */
  _1= 0;
  _2= ((oop *)_state1)[3];  /* files */
  _2=_send(s_size, _2);
  _3= l_27;
  if (1 & (int)_2) {
    _2= (((int)_2 > (int)_3) ? v_true : v_false);
  } else _2= _send(s__3e, _2, _3);
  if (!_2) goto _l2;
 {
  _1= v_Compiler;
  _2= l_29;
  _1=_send(s_error_, _1, _2);
 }
 _l2:;
  _1= v_Compiler;
  _2= ((oop *)_state1)[3];  /* files */
  _2=_send(s_first, _2);
  _3= ((oop *)_state1)[2];  /* outputPath */
  _4= ((oop *)_state1)[1];  /* options */
  _1=_send(s_compileFile_toFile_withOptions_, _1, _2, _3, _4);
 }
}

int main(int argc, char **argv, char **envp)
{
  dlhandle_t global= dlopen(0, RTLD_LAZY);
  void *_local_init= dlsym(global, "_libid_init");
  if (!_local_init) { fprintf(stderr, "id runtime not found\n");  abort(); }
  ((void (*)(int *, char ***, char ***))_local_init)(&argc, &argv, &envp);
  __id__init__();
  dlclose(global);
  return 0;
}
