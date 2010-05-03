#ifndef _TEST_H_
# define _TEST_H_

typedef enum	e_test_err
  {
    TE_NONE,
    TE_FATAL
  }		t_test_err;

typedef struct	s_test
{
  char		*id;
  t_test_err	(*f) ();
}		t_test;

#endif /* _TEST_H_ */
