#include "libft.h"

int ft_atoi(char *str)
{
  int i;
  i =0;
  int res;
  res =0; 
  int sign;
  sign = 1;

  while(((str[i]>= 9 && str[i]<=13) || str[i] == 32) && str[i])
  {
    i++;
  }
  if (str[i] =='-')
    {
      sign = sign * -1;
      i++;
    }
  else if (str[i]=='+')
    {
      sign = 1;
      i++;
    }
  while ((str[i] >= '0' && str[i]<='9')  )
    {
      res = res *10 +(str[i]-'0');
      i++;
    }
    i++;
  
   return res*sign;
}
