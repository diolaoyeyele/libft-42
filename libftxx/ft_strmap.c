#include "libft.h"

char * ft_strmap(char const *s, char (*f)(char))
{
	int	n;
	char	*str;

	if (!s)
		return (NULL);
	if (!(str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1)))
		return (NULL);
	n = 0;
	while (s[n])
	{
		str[n] = f(s[n]);
		n += 1;
	}
	str[n] = '\0';
	return (str);
}
