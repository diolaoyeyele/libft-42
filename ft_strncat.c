#include "libft.h"

char *ft_strncat(char *restrict s1, const char *restrict s2,size_t n)
{
  int i ;
  i = ft_strlen(s1);
  int j;
  j =0;
   while( s2[j] != '\0' && j<(n-1))
      {
        s1[i] = s2[j];
        j++;
        i++;
      }
    
    s1[i] = '\0';
    return s1;
}
