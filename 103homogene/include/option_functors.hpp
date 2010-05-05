//
// option_functors.hpp for 102matrice in /u/all/lucian_b/cu/work/projects/102matrice
// 
// Made by antoine luciani
// Login   <lucian_b@epitech.net>
// 
// Started on  Sun May  2 11:18:45 2010 antoine luciani
// Last update Sun May  2 17:26:25 2010 antoine luciani
//

#ifndef _OPTION_FUNCTORS_H_
# define _OPTION_FUNCTORS_H_

#include "matrix2.hpp"
#include "vector2.hpp"

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

/*
** Implementation of the option 1.
*/
class			COption1Functor : public COptionFunctor
{
protected:
  void			ExtractOptions(int nArgCount, char **pArgs);
  void			Launch(int nArgCount, char **pArgs);

private:
  math::CMatrix2	m_mat1;
  math::CMatrix2	m_mat2;
  unsigned int		m_nBase;
};

/*
** Implementation of the option 2.
*/
class			COption2Functor : public COptionFunctor
{
protected:
  void			ExtractOptions(int nArgCount, char **pArgs);
  void			Launch(int nArgCount, char **pArgs);

private:
  math::CMatrix2	m_mat;
  int			m_nCoef;
  unsigned int		m_nBase;
};

/*
** Implementation of the option 3.
*/
class			COption3Functor : public COptionFunctor
{
protected:
  void			ExtractOptions(int nArgCount, char **pArgs);
  void			Launch(int nArgCount, char **pArgs);

private:
  unsigned int		m_nBase;
  math::CMatrix2	m_mat;
  math::CVector2	m_v;
};

/*
** Implementation of the option 4.
*/
class			COption4Functor : public COptionFunctor
{
protected:
  void			ExtractOptions(int nArgCount, char **pArgs);
  void			Launch(int nArgCount, char **pArgs);

private:
  unsigned int		m_nBase;
  math::CMatrix2	m_mat1;
  math::CMatrix2	m_mat2;
};

#endif /* !_OPTION_FUNCTORS_H_ */
