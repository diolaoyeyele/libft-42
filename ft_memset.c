#include "libft.h"

void ft_memset(void *b, int c, size_t len)
{
  char *str ;
  str= (char*) b;
  int i;
  
  while(len--)
  {
    str[i]= c;
    i++;
  }

}
