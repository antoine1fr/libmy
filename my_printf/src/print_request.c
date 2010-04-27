#include "request.h"
#include "my.h"

void		print_request(char *str, t_request *request)
{
  int		i;
  int		remaining;

  if (!str || !request)
    return;
  remaining =  request->width - my_strlen(str);
  i = 0;
  while (i++ < remaining && request->flag != '+')
      my_putchar(' ');
  my_putstr(str);
  i = 0;
  while (i++ < remaining && request->flag == '+')
    {
      if (request->flag == '0' && request->is_number)
	my_putchar('0');
      else
	my_putchar(' ');
    }
}
