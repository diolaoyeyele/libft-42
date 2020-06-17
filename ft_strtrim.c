#include "libft.h"

char * ft_strtrim(char const *s)
{
  int i;
  i=0;
  int p = ft_strlen((char*)s)-1;
  while(s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
    i++;
  while(s[p] == ' ' || s[p] == '\t' || s[p] == '\n')
    p--;
  int a =0;
  char * array3 = (char *)malloc(((p-i)+1)*sizeof(char));
  if(array3 == NULL)
    return (NULL);
  while(i<=p)
  {
    array3[a] = s[i];
    i++;
    a++;
  }
  return array3;
}
