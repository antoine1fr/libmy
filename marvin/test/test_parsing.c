#include "test.h"
#include "token.h"
#include <stdio.h>

char	*parsing_tests[] = {
  "int a;",
  "int a; int b;",
  0
};

static void	print_token(t_token *token)
{
  printf("token type\t: %d\n", token->type);
  if (token->type == TOK_TYPE_TYPE)
    {
      printf("type : ");
      print_type(token);
      printf("\n");
    }
  else if (token->type == TOK_TYPE_NAME)
    printf("value\t\t: %s\n", (char *)token->value);
}

static t_test_err	test_unit(char *str)
{
  t_list	*tok_list;

  printf("test : '%s'\n", str);
  tok_list = tokenize(str);
  if (!tok_list)
    return (TE_FATAL);
  list_print_data(tok_list, print_token);
  return (TE_NONE);
}

t_test_err	test_parsing()
{
  t_test_err	error;
  int		i;

  printf("test-parsing----------------------\n");
  i = 0;
  while (parsing_tests[i] != 0)
    {
      error = test_unit(parsing_tests[i]);
      if (error != TE_NONE)
	return (error);
      i += 1;
    }
  printf("test-parsing----------------------\n\n");
  return (error);
}
