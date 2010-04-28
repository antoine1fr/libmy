#include "my.h"
#include "request.h"
#include <stdarg.h>

char		*transform_s(t_request *request, va_list *ap)
{
  char		*str;

  str = my_strdup(va_arg(*ap, char *));
  return (str);
}
