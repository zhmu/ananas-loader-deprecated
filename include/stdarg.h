#ifndef __STDARG_H__
#define __STDARG_H__

typedef __builtin_va_list	va_list;

#define va_start(ap, last)	__builtin_va_start(ap, last)
#define va_end(ap)		__builtin_va_end(ap)
#define va_arg(ap, type)	__builtin_va_arg(ap, type)

#endif /* __STDARG_H__ */
