/*
** Author : Antoine Luciani <antoin1fr[at]gmail[dot]com>
*/

#ifndef _ZIP_H_
# define _ZIP_H_

# define ZIP_SIGNATURE 0x04034b50

# pragma pack(push, 1)
typedef struct	s_file_header
{
  int		signature;
  short int	version;
  short int	flags;
  short int	method;
  short int	last_mod_time;
  short int	last_mod_date;
  int		crc;
  int		comp_size;
  int		uncomp_size;
  short int	file_name_len;
  short int	extra_length;
  char		*file_name;
  char		*extra_field;
}		t_file_header;
# pragma pack(pop)

#endif /* !_ZIP_H_ */
