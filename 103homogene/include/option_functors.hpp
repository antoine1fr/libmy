//
// option_functors.hpp for 103matrice in /u/all/lucian_b/cu/work/projects/102matrice
// 
// Made by antoine luciani
// Login   <lucian_b@epitech.net>
// 
// Started on  Sun May  2 11:18:45 2010 antoine luciani
// Last update Sun May  2 17:26:25 2010 antoine luciani
//

#ifndef _OPTION_FUNCTORS_H_
# define _OPTION_FUNCTORS_H_

/*
** Base class of an option-functor.
*/
class			COptionFunctor
{
protected:
  /*
  ** Extracts the options needed to execute the option.
  */
  virtual void		ExtractOptions(int nArgCount, char **pArgs) = 0;

  /*
  ** Launches the option.
  */
  virtual void		Launch(int nArgCount, char **pArgs) = 0;

public:
  /*
  ** () operator overloading.
  */
  void			operator () (int nArgCount, char **pArgs);
};
#endif /* !_OPTION_FUNCTORS_H_ */
