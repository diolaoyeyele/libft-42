#include "libft.h"


static int countd(int n) 
{ 
    if (n == 0) 
        return 0; 
    return 1+ countd(n / 10);
    
    
}

char * ft_itoa(int n)
{
  
  int count;
  count = countd(n);
  char *array1 =(char*)malloc(count*sizeof(char)+1);
  if(n == -2147483648)
  {
    ft_strcpy(array1,"-2147483648");
    return array1;
  }
  int p ;
  p =count -1;
  
  if(n == 0)
    array1[0]=0 +'0';
  if (n<0)
  { 
    array1[0] = '-';
    p++;
    n = n*-1;
  }
  while(n && count >=0)
  {
    int i = n%10;
    array1[p]= i +'0';
    p--;
    n =n/10;  
  }
  array1[count +1]='\0';
  return array1;
  }
