#ifndef __ID_H
#define __ID_H

struct __closure
{
  _imp_t	method;
  oop		data;
};

struct __lookup
{
  struct __closure *closure;
  oop		    state;
};

struct __send
{
  oop		    selector;
  int		    nArgs;
  oop		    receiver;
  oop		    state;
  struct __closure *closure;
};

struct __slotinfo
{
  const char	*name;
  size_t	 offset;
  size_t	 size;
};

struct __methodinfo
{
  const char		*name;
  const char		*type;
  const char		*file;
  void			*meta;
  size_t		 sourceStart, sourceEnd;
  struct __methodinfo	*next;
};

struct __libid
{
  /* bootstrap */

  dlhandle_t	 (*dlopen )(const char *path, int mode);
  void		*(*dlsym  )(dlhandle_t handle, const char *symbol);
  int		 (*dlclose)(dlhandle_t handle);

  void		  *unused03;
  void		  *unused04;
  void		  *unused05;
  void		  *unused06;
  void		  *unused07;

  /* globals */

  oop		  _object;
  oop		  tag_vtable;
  oop		  nil_vtable;

  void		  *unused11;
  void		  *unused12;
  void		  *unused13;
  void		  *unused14;
  void		  *unused15;

  /* allocation */

  oop		 (*intern)(const char *string);
  oop		 (*proto)(oop base);
  void		 (*method)(oop type, oop selector, _imp_t method);
  oop		 (*alloc)(oop type, size_t size);
  oop		*(*palloc)(size_t size);
  void		*(*balloc)(size_t size);
  oop		 (*proto2)(oop base, size_t size);
  void		  *unused23;

  /* environment */

  oop		 (*import)(const char *key);
  oop		 (*export)(const char *key, oop value);
  void		*(*param)(int index);

  void		  *unused27;
  void		  *unused28;
  void		  *unused29;
  void		  *unused30;
  void		  *unused31;

  /* messaging */

  struct __closure *(*bind )(oop selector, oop receiver);
  struct __lookup   (*bind2)(oop selector, oop receiver);
  _imp_t	    (*bindv)(struct __send *send);

  void		  *unused35;

  oop		 (*nlreturn)(oop nlr, oop result);
  oop		 (*nlresult)(void);

  void		  *unused38;
  void		  *unused39;
  void		  *unused40;
  void		  *unused41;

  /* debugging */

  void		*(*enter)(struct __methodinfo *info);
  void		 (*line)(int line);
  void		 (*leave)(void *cookie);
  char		*(*backtrace)(void);
  void		*(*methodAt)(int offset);
  void		 (*infos)(struct __methodinfo *first, struct __methodinfo *last);
  void		*(*infoList)(void);
  int		 (*lineAt)(int offset);

  void		  *unused50;
  void		  *unused51;

  /* gc */

  void		 (*gc_addRoots)(char *low, char *high);
  void		 (*gc_gcollect)(void);
  int		 (*gc_generalRegisterDisappearingLink)(void **link, void *obj);
  int		 (*gc_unregisterDisappearingLink)(void **link);

  void		  *unused56;
  void		  *unused57;
  void		  *unused58;
  void		  *unused59;
  void		  *unused60;
  void		  *unused61;
  void		  *unused62;
  void		  *unused63;
};

#endif /* __ID_H */
