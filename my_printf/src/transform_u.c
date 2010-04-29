#include <stdarg.h>

#include "my.h"
#include "request.h"

#define BASE_DEC "0123456789"

char		*transform_u(t_request *request, va_list *ap)
{
  unsigned int	n;

  n = va_arg(*ap, unsigned int);
  return (my_untostr(n, BASE_DEC));
}
