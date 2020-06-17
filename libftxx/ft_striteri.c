#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	n;

	if (s && f)
	{
		n = 0;
		while (s[n])
		{
			f(i, &s[n]);
			n += 1;
		}
	}
}

