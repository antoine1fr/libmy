#include <stdarg.h>

#include "my.h"
#include "request.h"

#define HEXA_BASE "0123456789abcdef"

char		*transform_x(t_request *request, va_list *ap)
{
  int		n;

  n = va_arg(*ap, int);
  return (my_untostr(n, HEXA_BASE));
}
