#include "my.h"
#include "request.h"
#include <stdarg.h>

#define DECIMAL_BASE	"0123456789"

char		*transform_d(t_request *request, va_list *ap)
{
  int		n;

  n = va_arg(*ap, int);
  return (my_ntostr(n, DECIMAL_BASE));
}
