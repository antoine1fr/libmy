#include "my.h"
#include "request.h"

#include <stdarg.h>

#define HEX_BASE "0123456789ABCDEF"

char		*transform_X(t_request *request, va_list *ap)
{
  unsigned int	n;

  n = va_arg(*ap, unsigned int);
  return (my_untostr(n, HEX_BASE));
}
