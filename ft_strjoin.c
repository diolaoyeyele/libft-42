#include "libft.h"

char * ft_strjoin(char const *s1, char const *s2)
{
  int n;
  n = ft_strlen((char*)s1)+ft_strlen((char*)s2);
  int i;
  i=0;
  int p ;
  p=0;

  char * array = (char *)malloc(n*sizeof(char));
  if(array == NULL)
    return (NULL);
  while(s1[i]!= '\0')
  {
    array[i] =s1[i];
    if(s1[i+1] == '\0')
    {
      i++;
      while(s2[p]!= '\0')
      {
        array[i] = s2[p];
        i++;
        p++;
      }
    }
  i++;
  }
  return array;
}
