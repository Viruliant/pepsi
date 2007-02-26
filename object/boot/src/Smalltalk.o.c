/* generated by Id 1.0 at 2007-02-22 05:39:44 Z */
/* with the command: -I../stage1/ -I. -c Smalltalk.st -o ../stage2/Smalltalk.o.c */

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
static oop s_new_= 0;
static oop s__3c_3d= 0;
static oop s_copyFrom_to_= 0;
static oop s_value_5f_= 0;
static oop s__5fimport_= 0;
static oop s_ifNil_= 0;
static oop s_arguments= 0;
static oop s__2d= 0;
static oop s_to_do_= 0;
static oop s_ifTrue_= 0;
static oop s__2c= 0;
static oop s_size= 0;
static oop s_osWarning_= 0;
static oop s__5fargumentCount= 0;
static oop s__5fdebugName= 0;
static oop s__5fargumentAt_5f_= 0;
static oop s_new= 0;
static oop s__5fosErrorString_5f_= 0;
static oop s_osErrorString= 0;
static oop s_osErrorString_5f_= 0;
static oop s_osErrorString_= 0;
static oop s__5fintegerValue= 0;
static oop s_size_5f_value_5f_= 0;
static oop s_argumentCount= 0;
static oop s_function_5f_arity_5f_outer_state_nlr_5f_= 0;
static oop s_quit= 0;
static oop s_argumentVector= 0;
static oop s__5fosError= 0;
static oop s_osError= 0;
static oop s_putln= 0;
static oop s_makeArgumentVector= 0;
static oop s_argumentAt_= 0;
static oop s_and_= 0;
static oop s_osError_= 0;
static oop s__3e= 0;
static oop s__5fsizeof= 0;
static oop s_abort= 0;
static oop s_at_put_= 0;
static oop s_at_= 0;
static struct _Selector { const char *name; oop *addr; } _Selectors[]= {
  { "new_:", &s_new_5f_ },
  { "new:", &s_new_ },
  { "<=", &s__3c_3d },
  { "copyFrom:to:", &s_copyFrom_to_ },
  { "value_:", &s_value_5f_ },
  { "_import:", &s__5fimport_ },
  { "ifNil:", &s_ifNil_ },
  { "arguments", &s_arguments },
  { "-", &s__2d },
  { "to:do:", &s_to_do_ },
  { "ifTrue:", &s_ifTrue_ },
  { ",", &s__2c },
  { "size", &s_size },
  { "osWarning:", &s_osWarning_ },
  { "_argumentCount", &s__5fargumentCount },
  { "_debugName", &s__5fdebugName },
  { "_argumentAt_:", &s__5fargumentAt_5f_ },
  { "new", &s_new },
  { "_osErrorString_:", &s__5fosErrorString_5f_ },
  { "osErrorString", &s_osErrorString },
  { "osErrorString_:", &s_osErrorString_5f_ },
  { "osErrorString:", &s_osErrorString_ },
  { "_integerValue", &s__5fintegerValue },
  { "size_:value_:", &s_size_5f_value_5f_ },
  { "argumentCount", &s_argumentCount },
  { "function_:arity_:outer:state:nlr_:", &s_function_5f_arity_5f_outer_state_nlr_5f_ },
  { "quit", &s_quit },
  { "argumentVector", &s_argumentVector },
  { "_osError", &s__5fosError },
  { "osError", &s_osError },
  { "putln", &s_putln },
  { "makeArgumentVector", &s_makeArgumentVector },
  { "argumentAt:", &s_argumentAt_ },
  { "and:", &s_and_ },
  { "osError:", &s_osError_ },
  { ">", &s__3e },
  { "_sizeof", &s__5fsizeof },
  { "abort", &s_abort },
  { "at:put:", &s_at_put_ },
  { "at:", &s_at_ },
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
struct t_Smalltalk {
  struct _vtable *_vtable[0];
  oop v_argumentCount;
  oop v_argumentVector;
};
static oop l_1= 0;
static oop l_4= 0;
static oop l_6= 0;
static oop l_7= 0;
static oop v__object= 0;
static oop v__vector= 0;
static oop v_Object= 0;
static oop v_UndefinedObject= 0;
static oop v_StaticBlockClosure= 0;
static oop v_BlockClosure= 0;
static oop v_Magnitude= 0;
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
static oop v_true= 0;
static oop v_false= 0;
static oop v_Smalltalk= 0;
static size_t Smalltalk___5fsizeof(oop _closure, oop v_self) { return sizeof(struct t_Smalltalk); }
static char *Smalltalk___5fdebugName(oop _closure, oop v_self) { return "Smalltalk"; }
static oop Smalltalk__quit(oop v__closure, oop v_stateful_self, oop v_self)
 {
  oop _1= 0;
 {
# define self ((struct t_Smalltalk *)v_self)

  exit(0);

# undef self
 }
  _1= 0;
  _1= v_self;
  return _1;
 }
static oop Smalltalk__abort(oop v__closure, oop v_stateful_self, oop v_self)
 {
  oop _1= 0;
 {
# define self ((struct t_Smalltalk *)v_self)

  fflush(stdout);
  fprintf(stderr, "\nSmalltalk abort\n");
  fflush(stderr);
  abort();

# undef self
 }
  _1= 0;
  _1= v_self;
  return _1;
 }
static oop Smalltalk___5fosError(oop v__closure, oop v_stateful_self, oop v_self)
 {
  oop _1= 0;
 {
# define self ((struct t_Smalltalk *)v_self)
 return (oop)_param(-1); 
# undef self
 }
  _1= 0;
  _1= v_self;
  return _1;
 }
static oop Smalltalk___5fargumentCount(oop v__closure, oop v_stateful_self, oop v_self)
 {
  oop _1= 0;
 {
# define self ((struct t_Smalltalk *)v_self)
 return (oop)_param(0); 
# undef self
 }
  _1= 0;
  _1= v_self;
  return _1;
 }
static oop Smalltalk___5fargumentAt_5f_(oop v__closure, oop v_stateful_self, oop v_self, oop v__index)
 {
  oop _1= 0;
 {
# define self ((struct t_Smalltalk *)v_self)
 return (oop)(((char **)_param(1))[(int)v__index]); 
# undef self
 }
  _1= 0;
  _1= v_self;
  return _1;
 }
static oop Smalltalk___5fosErrorString_5f_(oop v__closure, oop v_stateful_self, oop v_self, oop v__errno)
 {
  oop _1= 0;
 {
# define self ((struct t_Smalltalk *)v_self)
 return (oop)strerror((int)v__errno); 
# undef self
 }
  _1= 0;
  _1= v_self;
  return _1;
 }
static oop Smalltalk__osError(oop v__closure, oop v_stateful_self, oop v_self)
 {
  oop _1= 0;
  oop _2= 0;
  _1= v_SmallInteger;
  _2= v_self;
  _2=_send(s__5fosError, _2);
  _1=_send(s_value_5f_, _1, _2);
  return _1;
 }
static oop Smalltalk__osErrorString(oop v__closure, oop v_stateful_self, oop v_self)
 {
  oop _1= 0;
  oop _2= 0;
  _1= v_self;
  _2= v_self;
  _2=_send(s__5fosError, _2);
  _1=_send(s_osErrorString_5f_, _1, _2);
  return _1;
 }
static oop Smalltalk__osErrorString_(oop v__closure, oop v_stateful_self, oop v_self, oop v_errno)
 {
  oop _1= 0;
  oop _2= 0;
  _1= v_self;
  _2= v_errno;
  _2=_send(s__5fintegerValue, _2);
  _1=_send(s_osErrorString_5f_, _1, _2);
  return _1;
 }
static oop Smalltalk__osErrorString_5f_(oop v__closure, oop v_stateful_self, oop v_self, oop v__errno)
 {
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  _1= v_ImmutableString;
  _2= v_self;
  _3= v__errno;
  _2=_send(s__5fosErrorString_5f_, _2, _3);
  _1=_send(s_value_5f_, _1, _2);
  return _1;
 }
static oop Smalltalk__osWarning_(oop v__closure, oop v_stateful_self, oop v_self, oop v_message)
 {
  oop _1= 0;
  oop _2= 0;
  _1= v_message;
  _2= l_1;
  _1=_send(s__2c, _1, _2);
  _2= v_self;
  _2=_send(s_osErrorString, _2);
  _1=_send(s__2c, _1, _2);
  _1=_send(s_putln, _1);
  _1= v_self;
  return _1;
 }
static oop Smalltalk__osError_(oop v__closure, oop v_stateful_self, oop v_self, oop v_message)
 {
  oop _1= 0;
  oop _2= 0;
  _1= v_self;
  _2= v_message;
  _send(s_osWarning_, _1, _2);
  _1=_send(s_quit, _1);
  _1= v_self;
  return _1;
 }
static oop b_2(oop v__closure, oop v__self)
 {
  oop _1= 0;
  oop _2= 0;
  _1= v_SmallInteger;
  _2= ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[1];  /* self */
  _2=_send(s__5fargumentCount, _2);
  _1=_send(s_value_5f_, _1, _2);
  ((struct t_Smalltalk *)((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[2])->v_argumentCount= _1;  /* argumentCount */
  return _1;
 }
static oop Smalltalk__argumentCount(oop v__closure, oop v_stateful_self, oop v_self)
 {
  oop _state1= _send(s_new_5f_, v__vector, 5);
  oop _1= 0;
  oop _2= 0;
  ((oop *)_state1)[2]= v_stateful_self;
  ((oop *)_state1)[1]= v_self;
  _1= ((struct t_Smalltalk *)((oop *)_state1)[2])->v_argumentCount;  /* argumentCount */
  /* Scope() */
  /* Scope('stateful_self'->ArgumentVariableNode 'self'->ArgumentVariableNode 'argumentCount'->SlotVariableNode 'argumentVector'->SlotVariableNode) */
  /* nil */
  /* 2 */
  /* 1 */
  _2= _send(s_function_5f_arity_5f_outer_state_nlr_5f_, v_BlockClosure, (oop)b_2, 0, 0, ((oop *)_state1), 0);
  _1=_send(s_ifNil_, _1, _2);
  return _1;
 }
static oop b_3(oop v__closure, oop v__self)
 {
  oop _1= 0;
  _1= ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[1];  /* self */
  _1=_send(s_makeArgumentVector, _1);
  ((struct t_Smalltalk *)((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[2])->v_argumentVector= _1;  /* argumentVector */
  return _1;
 }
static oop Smalltalk__argumentVector(oop v__closure, oop v_stateful_self, oop v_self)
 {
  oop _state1= _send(s_new_5f_, v__vector, 5);
  oop _1= 0;
  oop _2= 0;
  ((oop *)_state1)[2]= v_stateful_self;
  ((oop *)_state1)[1]= v_self;
  _1= ((struct t_Smalltalk *)((oop *)_state1)[2])->v_argumentVector;  /* argumentVector */
  /* Scope() */
  /* Scope('stateful_self'->ArgumentVariableNode 'self'->ArgumentVariableNode 'argumentCount'->SlotVariableNode 'argumentVector'->SlotVariableNode) */
  /* nil */
  /* 2 */
  /* 1 */
  _2= _send(s_function_5f_arity_5f_outer_state_nlr_5f_, v_BlockClosure, (oop)b_3, 0, 0, ((oop *)_state1), 0);
  _1=_send(s_ifNil_, _1, _2);
  return _1;
 }
static oop b_5(oop v__closure, oop v__self, oop v_i)
 {
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  oop _4= 0;
  oop _5= 0;
  oop _6= 0;
  _1= ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[1];  /* argv */
  _2= v_i;
  _3= v_ImmutableString;
  _4= ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[2];  /* self */
  _5= v_i;
  _6= l_4;
  {
    int _l= (int)_5 >> 1;
    int _r= (int)_6 >> 1;
    int _s= (_l - _r);
    if ((1 & (int)_5) && ((_s ^ (_s << 1)) >= 0))  _5= (oop)(_s << 1 | 1);  else _5= _send(s__2d, _5, _6);
  }
  _5=_send(s__5fintegerValue, _5);
  _4=_send(s__5fargumentAt_5f_, _4, _5);
  _3=_send(s_value_5f_, _3, _4);
  _1=_send(s_at_put_, _1, _2, _3);
  return _1;
 }
static oop Smalltalk__makeArgumentVector(oop v__closure, oop v_stateful_self, oop v_self)
 {
  oop _state1= _send(s_new_5f_, v__vector, 6);
  oop v_argc= 0;
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  (void)v_argc;
  ((oop *)_state1)[3]= v_stateful_self;
  ((oop *)_state1)[2]= v_self;
  _1= ((oop *)_state1)[2];  /* self */
  _1=_send(s_argumentCount, _1);
  v_argc= _1;
  _1= v_Array;
  _2= v_argc;
  _1=_send(s_new_, _1, _2);
  ((oop *)_state1)[1]= _1;  /* argv */
  _1= l_4;
  _2= v_argc;
  /* Scope('i'->ArgumentVariableNode) */
  /* Scope('argv'->TemporaryVariableNode 'argc'->TemporaryVariableNode 'self'->ArgumentVariableNode 'argumentVector'->SlotVariableNode 'stateful_self'->ArgumentVariableNode 'argumentCount'->SlotVariableNode) */
  /* nil */
  /* 2 */
  /* 1 */
  _3= _send(s_function_5f_arity_5f_outer_state_nlr_5f_, v_BlockClosure, (oop)b_5, 1, 0, ((oop *)_state1), 0);
  _1=_send(s_to_do_, _1, _2, _3);
  _1= ((oop *)_state1)[1];  /* argv */
  return _1;
 }
static oop Smalltalk__argumentAt_(oop v__closure, oop v_stateful_self, oop v_self, oop v_index)
 {
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  /* ifTrue: */
  _1= 0;
  /* and: */
  _2= v_index;
  _3= l_6;
  if (1 & (int)_2) {
    _2= (((int)_2 > (int)_3) ? v_true : v_false);
  } else _2= _send(s__3e, _2, _3);
  if (!_2) goto _l2;
 {
  _2= v_index;
  _3= v_self;
  _3=_send(s_argumentVector, _3);
  _3=_send(s_size, _3);
  if (1 & (int)_2 & (int)_3) {
    _2= (((int)_2 <= (int)_3) ? v_true : v_false);
  } else _2= _send(s__3c_3d, _2, _3);
 }
 _l2:;
  if (!_2) goto _l1;
 {
  _1= ((struct t_Smalltalk *)v_stateful_self)->v_argumentVector;
  _2= v_index;
  _1=_send(s_at_, _1, _2);
 }
 _l1:;
  return _1;
 }
static oop Smalltalk__arguments(oop v__closure, oop v_stateful_self, oop v_self)
 {
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  _1= v_self;
  _1=_send(s_argumentVector, _1);
  _2= l_7;
  _3= v_self;
  _3=_send(s_argumentCount, _3);
  _1=_send(s_copyFrom_to_, _1, _2, _3);
  return _1;
 }

void __id__init__Smalltalk(void)
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
# define GC_add_roots _local_gc_addRoots
  GC_INIT();
  {
    struct _Selector *s= 0;
    for (s= _Selectors;  s->name;  ++s)
      *s->addr= _selector(s->name);
  }

  _send(s__5fimport_, _local_object, "Object", "__id__init__Object");
  _send(s__5fimport_, _local_object, "_object", "__id__init___5fobject");
  v__object= _id_import("_object");
  v__vector= _id_import("_vector");
  v_Object= _id_import("Object");
  v_UndefinedObject= _id_import("UndefinedObject");
  v_StaticBlockClosure= _id_import("StaticBlockClosure");
  v_BlockClosure= _id_import("BlockClosure");
  v_Magnitude= _id_import("Magnitude");
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
  v_true= _id_import("true");
  v_false= _id_import("false");
  _send(s__5fimport_, _local_object, "BlockClosure", "__id__init__BlockClosure");
  _send(s__5fimport_, _local_object, "SmallInteger", "__id__init__SmallInteger");
  _send(s__5fimport_, _local_object, "Integer", "__id__init__Integer");
  _send(s__5fimport_, _local_object, "Number", "__id__init__Number");
  _send(s__5fimport_, _local_object, "Magnitude", "__id__init__Magnitude");
  _send(s__5fimport_, _local_object, "Array", "__id__init__Array");
  _send(s__5fimport_, _local_object, "ArrayedCollection", "__id__init__ArrayedCollection");
  _send(s__5fimport_, _local_object, "SequenceableCollection", "__id__init__SequenceableCollection");
  _send(s__5fimport_, _local_object, "Collection", "__id__init__Collection");
  _send(s__5fimport_, _local_object, "Character", "__id__init__Character");
  _send(s__5fimport_, _local_object, "String", "__id__init__String");
  _send(s__5fimport_, _local_object, "ByteArray", "__id__init__ByteArray");
  _send(s__5fimport_, _local_object, "WordArray", "__id__init__WordArray");
  v_Smalltalk= _proto(v_Object);
  _method(v_Smalltalk, s__5fsizeof, Smalltalk___5fsizeof);
  _method(v_Smalltalk, s__5fdebugName, Smalltalk___5fdebugName);
  _id_export("Smalltalk", v_Smalltalk);
 {
  oop _1= 0;
  _1= v_Smalltalk;
  _1=_send(s_new, _1);
  v_Smalltalk= _1;
  _id_export("Smalltalk", v_Smalltalk);
 }
  _method(v_Smalltalk, s_quit, Smalltalk__quit);
  _method(v_Smalltalk, s_abort, Smalltalk__abort);
  _method(v_Smalltalk, s__5fosError, Smalltalk___5fosError);
  _method(v_Smalltalk, s__5fargumentCount, Smalltalk___5fargumentCount);
  _method(v_Smalltalk, s__5fargumentAt_5f_, Smalltalk___5fargumentAt_5f_);
  _method(v_Smalltalk, s__5fosErrorString_5f_, Smalltalk___5fosErrorString_5f_);
  _method(v_Smalltalk, s_osError, Smalltalk__osError);
  _method(v_Smalltalk, s_osErrorString, Smalltalk__osErrorString);
  _method(v_Smalltalk, s_osErrorString_, Smalltalk__osErrorString_);
  _method(v_Smalltalk, s_osErrorString_5f_, Smalltalk__osErrorString_5f_);
  l_1= _send(s_size_5f_value_5f_, v_ImmutableString, 2, ": ");
  _method(v_Smalltalk, s_osWarning_, Smalltalk__osWarning_);
  _method(v_Smalltalk, s_osError_, Smalltalk__osError_);
  _method(v_Smalltalk, s_argumentCount, Smalltalk__argumentCount);
  _method(v_Smalltalk, s_argumentVector, Smalltalk__argumentVector);
  l_4= _send(s_value_5f_, v_SmallInteger, 1);
  _method(v_Smalltalk, s_makeArgumentVector, Smalltalk__makeArgumentVector);
  l_6= _send(s_value_5f_, v_SmallInteger, 0);
  _method(v_Smalltalk, s_argumentAt_, Smalltalk__argumentAt_);
  l_7= _send(s_value_5f_, v_SmallInteger, 2);
  _method(v_Smalltalk, s_arguments, Smalltalk__arguments);
}
