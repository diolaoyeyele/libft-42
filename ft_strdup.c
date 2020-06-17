#include "libft.h"

 char * ft_strdup(const char *s1)
 {
   int i=ft_strlen((char*)s1);
   int n =0;
   char * array1 = (char*)malloc((i+1)*sizeof(char));
   while(s1[n] !='\0')
   {
     array1[n] = s1[n];
     n++;
   }
   if (array1 == NULL)
    return (NULL);
   array1[n] = '\0';
   return array1;
 }
