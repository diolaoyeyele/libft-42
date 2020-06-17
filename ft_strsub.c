#include "libft.h"

char * ft_strsub(char const *s, unsigned int start, size_t len)
{
  //always get the value for ft_strlen like this 
  int i= ft_strlen((char*)s);
  int end;
  int n =0;
  end = start + len;
  char* array1 = (char*)malloc(i*sizeof(char));
  while(len-- )
  {
      array1[n] = s[start];
      start++;
      n++;
  }
  return array1;
}
